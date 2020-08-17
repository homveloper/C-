#pragma once

#include <iostream>
#include <exception>
using namespace std;

template <typename T>
class Stack{
    T* stack;   // 데이터를 저장할 공간
    int size;   // 공간의 크기;
    int top;    // 초기값이 -1

public:
    Stack(){
        Stack(10);
    }

    Stack(int size){
        this->size = size;
        stack = new T[this->size];
        top = -1;
    }

    bool isEmpty();
    bool isFull();

    void push(T value);
    T pop();

    void resize(int size);
    void resize2(int size);

    void print();
};


template <typename T>
bool Stack<T>::isEmpty()
{
    return top <= -1;
}

template <typename T>
bool Stack<T>::isFull()
{
    return top >= size - 1;
}

template <typename T>
void Stack<T>::resize(int newSize)
{
    T *temp = new T[newSize];

    
    for (int i = 0; i < this->size; i++)
        temp[i] = stack[i];

    delete[] stack;

    stack = new T[newSize];

    for (int i = 0; i < this->size; i++)
        stack[i] = temp[i];

    delete[] temp;
    this->size = newSize;
}

template <typename T>
void Stack<T>::push(T value)
{
    if (isFull())
        resize(size * 2);

    stack[++top] = value;
}

template <typename T>
T Stack<T>::pop()
{
    try
    {
        if (isEmpty())
            throw exception("스택 비었어요!!");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    if (top <= size / 2 - 1)
        resize(size / 2);

    return stack[top--];
}

template <typename T>
void Stack<T>::resize2(int size)
{
}

template <typename T>
void Stack<T>::print()
{
    try
    {
        if (isEmpty())
            throw exception("스택 비었어요!!");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }


    for (int i = 0; i < top + 1; i++)
        cout << stack[i] << " ";

    cout << endl;
}

