#include "Node.h"


class CList
{
private:
    /* data */
    Node* last;
    int size;

public:
    CList(/* args */);
    ~CList();

    bool isEmpty(){
        return size == 0;
    }

    void insert(int data){
        Node* newNode = new Node(data, nullptr);

        if(last == nullptr){
            newNode->setNext(newNode);
            last = newNode;
        }else{
            newNode->setNext(last->getNext());
            last->setNext(newNode);
        }

        size++;
    }

    void del(){
        if(isEmpty())
            return;

        Node* target = last->getNext();

        if(target == nullptr){
            last = nullptr;
        }else{
            last->setNext(target->getNext());
            target->setNext(nullptr);
        }

        size--;
        delete target;
    }
};

CList::CList(/* args */)
{
    last = nullptr;
    size = 0;
}

CList::~CList()
{
}
