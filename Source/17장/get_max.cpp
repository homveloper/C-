#include <iostream>
using namespace std;

template <typename T>
T get_max(T x, T y)
{
  if(x > y)   return x;
  else return y;
}
 
int main()
{
  // 아래의 문장은 정수 버전 get_max()를 호출한다. 
  cout << get_max(1, 3) << endl;

  // 아래의 문장은 실수 버전 get_max()를 호출한다. 
  cout << get_max(1.2, 3.9) << endl;

  return 0;
}
