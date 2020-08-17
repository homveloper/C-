#include <iostream>
using namespace std;
// ���� ó���� ���� Ŭ����
class FullStack
{} ;

// ���� ó���� ���� Ŭ����
class EmptyStack
{};

template <class T>
class Stack {
private:
  T*  s;
  int    size;
  int    top;
public:
  Stack(int n = 100) : size(n), top(-1)
  { 
		s = new T[size]; 
	}
  ~Stack() { delete []s; }
  void  push(T v); 
  T pop();
  bool  isEmpty() const { return top == -1;}
  bool  isFull() const { return top == size - 1;}
};

template< typename T >                     
void Stack< T >::push( T v )
{
   if ( isFull() )
		throw FullStack();
   s[ ++top ] = v;
} 

template< typename T >             
T Stack< T >::pop( )
{
   if ( isEmpty() )
		throw EmptyStack();
   return s[ top-- ]; 
} 
int main()
{
	Stack<int> s;  // ũ�Ⱑ 100�� ������ ����
	s.push(100);
	s.push(200);
	s.push(300);
	s.push(400);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	return 0;
}
