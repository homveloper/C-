#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "myheader.h"
using namespace std;

int main()
{
   double v1[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
   double sum;

   sum = accumulate(&v1[0], &v1[5], 0.0);
   cout << "누적합= " << sum << endl;

   vector<double> v2;
   partial_sum(&v1[0],&v1[5], back_inserter(v2));
   print(v2, "부분합= ");
}
