  #include <iostream>
    #include <vector>
    #include <string>
    #include <algorithm>
    #include "myheader.h"
   using namespace std;

	// 문자열의 길이를 가지고 정렬한다.
   bool is_less (const string& s1, const string& s2)
   {
       return s1.length() < s2.length();
   }

   int main()
   {
       vector<string> vec1;
       vector<string> vec2;

       vec1.push_back ("AAAA");
       vec1.push_back ("AAAAAA");
       vec1.push_back ("BBBB");
       vec1.push_back ("AAA");
       vec1.push_back ("AA");
       vec1.push_back ("A");
       vec2 = vec1;

       print (vec1,"처음 문자열\n");

       sort (vec1.begin(), vec1.end(), is_less);                             
       stable_sort (vec2.begin(), vec2.end(), is_less);                    

       print(vec1,"sort()이후 문자열\n");
       print(vec2,"stable_sort()이후 문자열\n");
	   return 0;
   }
