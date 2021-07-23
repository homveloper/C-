#include <iostream>
#include <string>
#include <set>
using namespace std;

int compare(string a, string b){
    if (a.size() == b.size()){
        return a<b;
    }else{
        return a.size() < b.size();
    }
}

struct Compare{
    bool operator() (const string& a, const string& b) const{
        if(a.size() == b.size())
            return a < b;
        else
            return a.size() < b.size();
    }
};

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int N;
    string temp;
    // set<string,decltype(compare)*> arr(compare);
    set<string,Compare> arr;

    cin>>N;

    for(int i=0; i<N; i++){
        cin>>temp;
        arr.insert(temp);
    }

    for(const auto& e: arr){
        cout<<e<<'\n';
    }

    return 0;
}