#include "Node.h"

class DList
{
private:
    /* data */
    Node* head;
    Node* tail;
    int size;
public:
    DList(/* args */);
    ~DList();

    void insertBefore(int, Node*);
    void insertAfter(int, Node*);
    void deleteNode(Node*);

};

DList::DList(/* args */)
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}

DList::~DList()
{
}

void DList::insertBefore(int data, Node* p){
    Node* temp = p->getPrevious();
    Node* newNode = new Node(data,temp,p);
    p->setPrevious(newNode);
    temp->setNext(newNode);
    size++;
}

void DList::insertAfter(int data, Node* p){
    Node* temp = p->getPrevious();
    Node* newNode = new Node(data,p,temp);
    temp->setPrevious(newNode);
    p->setNext(newNode);
    size++;
}

void DList::deleteNode(Node *target){
    if(target == nullptr)
        return;

    Node* p = target->getPrevious();
    Node* n = target->getNext();

    p->setNext(n);
    n->setPrevious(p);
    size--;
}