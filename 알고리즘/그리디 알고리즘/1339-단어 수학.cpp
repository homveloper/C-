#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void print(vector<string> &words){
    for(int i=0; i<words.size(); i++){
        cout<<words[i]<<endl;
    }
}

int compare(string a, string b){
    return a.size() > b.size();
}

int main(){
    int N, value = 9;
    int alpha[100];
    int sum = 0;

    for(int i=0;i<100;i++){
        alpha[i] = -1;
    }

    cin>>N;

    vector<string> words(N);

    for(int i=0; i<N; i++){
        cin>>words[i];
    }

    sort(words.begin(),words.end(),compare);
    // print(words);

    int len = words[0].size();

    for(int i=len; i>0 && value >= 0; i--){
        for(int j=0; j<N; j++){

            cout<<i<<" "<<j<<endl;

            if(words[j].size() == len){
                int idx = words[j][len-i];
                cout<<(char)idx<<endl;
                if(alpha[idx] == -1){
                    alpha[idx] = value;
                    value--;
                }
            }
        }
    }

    for(int i=65; i<75; i++){
        cout<<alpha[i]<<" ";
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<words[i].size(); j++){
            sum += alpha[words[i][j]] * pow(10, words[i].size()-1 - j);
        }
    }

    cout<<sum<<endl;
}
