#include "LinkedList.h"

template <typename T>
void LinkedList<T>::PrintForward() const {
    Node *curr = head;
    while (curr != nullptr) {
        std::cout << curr->data << '\n';
        curr = curr->next;
    }
}

template <typename T>
void LinkedList<T>::PrintReverse() const {
    Node *curr = tail;
    while (curr != nullptr) {
        std::cout << curr->data << '\n';
        curr = curr->prev;
    }
}

template <typename T>
void LinkedList<T>::AddHead(const T &data)
{
    nodeCount++;
    Node *newHead = new Node(data);
    if (head == nullptr) {   tail = head = newHead; return;  }
    
    Node *temp = head;
    head->prev = newHead;
    newHead->next = head;
    head = newHead;
}

template <typename T>
void LinkedList<T>::AddTail(const T &data) {
    nodeCount++;
    Node *newTail = new Node(data);
    if(tail == nullptr) {   head = tail = nullptr; return;  }
    
    Node *temp = tail;
    tail->next = newTail;
    newTail->prev = tail;
    tail = newTail;
}
