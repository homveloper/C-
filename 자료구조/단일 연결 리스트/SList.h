#include "Node.h"

// 단일 연결 리스트
class SList
{
private:
    /* data */
    Node* head;
    int size;
public:
    SList();

    bool isEmpty();

    Node* search(int target);

    void insertFront(int data);
    void insertAfter(int data, Node* p);

    void deleteFront();
    void deleteAfter(Node*p );

    void display();

};

SList::SList()
{
    head = nullptr;
    size = 0;
}

bool SList::isEmpty(){
    return size ==0;
}

Node* SList::search(int target){

    for(Node*p = head; p != nullptr; p = p->getNext()){
        if(p->getData() == target){
            return p;
        }
    }

    return -1;
}

void SList::insertFront(int data){
    head = new Node(data, head->getNext());
    size++;
}
void SList::insertAfter(int data, Node* p){
    p->setNext(new Node(data,p->getNext()));
    size++;
}

void SList::deleteFront(){
    Node* temp = head;
    head = head->getNext();
    size--;

    delete temp;
}
void SList::deleteAfter(Node*p ){
    Node* temp = p->getNext();
    p->setNext(temp->getNext());
    size--;

    delete temp;
}

void SList::display(){
    for(Node*p = head; p != nullptr; p = p->getNext()){
        cout<<p->getData()<<" ";
    }
    cout<<endl;
}