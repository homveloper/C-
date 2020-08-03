#include <iostream>
#include <string>
using namespace std;

class checkSystem
{
    string enter;
    

private:
public:
    void check()
    {
        int ALP=0;
        int NUM=0; 
        int SPACE=0;
        int *pa;
        pa = &ALP;
        int *ps;
        ps = &SPACE;
        int *pn;
        pn = &NUM;
        cout << "enter the sentence which you want to check." << endl;
        getline(cin,enter);
        cout << endl;
        int ENTER_SIZE = enter.size();
        cout << ENTER_SIZE<<endl;
        for (int i = 0;i<ENTER_SIZE;i++){
            if (enter[i]==' ') (*ps)++;
            else if (enter [i]>=65 && enter[i]<=90) (*pa)++;
            else if (enter[i]>=97 && enter[i]<=122) (*pa)++;
            else if (enter[i]>=48 && enter[i]<=57) (*pn)++;
        }
        cout<<"Counted Number of alphabet : "<<*pa<<endl;
        cout<<"Counted Number of number : "<<*pn<<endl;
        cout<<"Counted number of space : "<<*ps<<endl;
    }
    void increase(int *num){
        *num++;
    }
};

void main()
{
    checkSystem s;
    s.check();
}