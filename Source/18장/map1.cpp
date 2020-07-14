#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
     map<string, string> dic;
     dic["boy"]="소년";
     dic["school"]="학교";
     dic["office"]="직장";
     dic["house"]="집";
     dic["morning"]="아침";
     dic["evening"]="저녁";

     cout << "house의 의미는 " << dic["house"] << endl;	// 등록이 된 단어
     cout << "morning의 의미는 " << dic["morning"] << endl;	// 등록이 된 단어
     cout << "unknown의 의미는 " << dic["unknown"] << endl;	// 등록이 안된 단어
	 return 0;
}
