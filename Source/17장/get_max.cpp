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
  // �Ʒ��� ������ ���� ���� get_max()�� ȣ���Ѵ�. 
  cout << get_max(1, 3) << endl;

  // �Ʒ��� ������ �Ǽ� ���� get_max()�� ȣ���Ѵ�. 
  cout << get_max(1.2, 3.9) << endl;

  return 0;
}
