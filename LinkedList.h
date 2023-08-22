#pragma once

#include <vector>

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node *next = nullptr, *prev = nullptr;
        Node(T data);
    } 
    
    unsigned int nodeCount = 0;
    Node *head = nullptr, *tail = nullptr;

    //Non-Const Accessor Overloads
    //Node *Find(const T &value);
    //Node *At(unsigned int index);
    //Node *Head();
    //Node *Tail();

public:
/*============================================Constructors============================================*/ 
    LinkedList();                                                             //Default Constructor
    //LinkedList(const LinkedList<T> &list);                                    //Copy Constructor


/*=====================================Accessors (DATA READ ONLY)====================================*/
    void PrintForward() const;                                                //Print all elements in list from head->...->tail
    void PrintReverse() const;                                                //Print all elements in list from tail->...->head
    //unsigned int size() const;                                                //Return number of elements in list
    //void FindAll(vector<Node *> &outData, const T &value) const;              //Populate output parameter with pointers to nodes whose data matches value parameter
    //const Node *Find(const T &value) const;                                   //Return pointer to first Node whose data matches value parameter. Returns NULL if such Node not found
    //const Node *At(unsigned int index) const;                                 //Return pointer to Node at given index
    //const Node *Head() const;                                                 //Return pointer to head Node
    //const Node *Tail() const;                                                 //Return pointer to tail Node


/*=============================================Insertion=============================================*/
    //Insert Single Node
    void AddHead(const T &data);                                            //Create new Node at front containing data
    void AddTail(const T &data);                                            //Create new Node at end containing data
    //bool InsertBefore(Node *node, const T &data);                           //Insert new Node storing data in list before given Node
    //bool InsertAfter(Node *node, const T &data);                            //Insert new Node storing data in list after given Node
    //bool InsertAt(const T &data, unsigned int index);                       //Insert new Node storing data in list at given index

    //Insert Multiple (Count) Nodes
    //void AddHead(const T *data, unsigned int count);                        //Overload to insert count Nodes to front maintaining order of list
    //void AddTail(const T *data, unsigned int count);                        //Overload to insert count Nodes to end maintaining order of list
    //bool InsertBefore(Node *node, const T *data, unsigned int count);       //Overload to insert count Nodes before given Node maintaining order of data
    //bool InsertAfter(Node *node, const T *data, unsigned int count);        //Overload to insert count Nodes after given Node maintaining order of data
    //bool InsertAt(const T *data, unsigned int count, unsigned int index);   //Overload to insert count Nodes before given Node maintaining order of data


/*==============================================Removal==============================================*/
    //Remove Single Node
    //bool RemoveHead();                                                      //Remove first Node in list. Return if successful.
    //bool RemoveTail();                                                      //Remove last Node in list. Return if successful.
    //bool RemoveAt(int index);                                               //Remove index-th Node in list. Negative index checks from back. Return if successful.
    //unsigned int RemoveFirst(const T &value);                               //Remove first Nodes in list whose data matches given value.  

    //Remove Multiple Nodes (Returns number of Nodes successfully removed)
    //unsigned int RemoveHead(unsigned int count);                            //Overload to remove the first count Nodes in list. Return how many elements successfuly removed.
    //unsigned int RemoveTail(unsigned int count);                            //Overload to remove the last count Nodes in list. Return how many elements successfully removed.
    //unsigned int Remove(const T &value, unsigned int count);                //Remove first count Nodes in list whose data motches given value.
    //unsigned int Remove(const T &value);                                    //Overload to remove all Nodes in list whose data matches given value.


/*=============================================Operators=============================================*/
    //const T &operator[](unsigned int index) const;                          //Const-Protected element access operator. equivalent to At(index) but NO VALID INDEX CHECK
    //T &operator[](unsigned int index);                                      //element access operator. eqivalent to At(index) NO VALID INDEX CHECK
    //bool &operator==(const LinkedList<T> &rhs) const;                       //Const-Protected equality operator. Returns true if lists are same size and have same data in the same order
    //LinkedList<T> &operator=(const LinkedList<T> &rhs);                     //Overloaded equality operator. Sets LL left of operator equal to the same data in same order as rhs.


/*=============================================Destructor============================================*/
    //~LinkedList();                                                          //Destructor

};

template <typename T>
inline LinkedList<T>::Node::Node(T data) : data{data} {}

template <typename T>
inline LinkedList<T>::LinkedList() {}
