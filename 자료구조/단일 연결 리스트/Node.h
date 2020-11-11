class Node{
private:
    int data;
    Node* next;
public:

    Node(int data, Node *next);

    void setData(int value);
    int getData();

    void setNext(Node* next);
    Node* getNext();

};

Node::Node(int data, Node* next){
    this->data = data;
    this->next = next;
}

void Node::setData(int value){
    data = value;
}

int Node::getData(){
    return data;
}

void Node::setNext(Node* next){
    this->next = next;
}

Node * Node::getNext(){
    return next;
}