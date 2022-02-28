// 9-2-3.cpp :链表类模板

#include <iostream>


template <class T>
class Node {
private:
    Node<T>* next;
public:
    T data;

    Node(const T& data, Node<T>* next = 0);
    void insertAfert(Node<T>* p);
    Node<T>* deleteAfter();
    Node<T>* nextNode();
    const Node<T>* nextNode() const;

};


int main()
{
    
}

