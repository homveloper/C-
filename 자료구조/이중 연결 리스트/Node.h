class Node{
private:
    int data;
    Node* next;
    Node* previous;
public:

    Node(int data,Node* previous, Node *next);

    void setData(int value);
    int getData();

    void setNext(Node* next);
    Node* getNext();

    void setPrevious(Node* previous);
    Node* getPrevious();

};

Node::Node(int data,Node* previous, Node* next){
    this->data = data;
    this->previous = previous;
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


void Node::setPrevious(Node* previous){
    this->previous = previous
}

Node* Node::getPrevious(){
    return previous;
}