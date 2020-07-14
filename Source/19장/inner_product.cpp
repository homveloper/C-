#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
   double v1[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
   double v2[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
   double sum;

   sum = inner_product(&v1[0], &v1[5], &v2[0], 0.0);
   cout << "³»Àû= " << sum << endl;
}
