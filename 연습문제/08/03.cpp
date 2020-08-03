#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void main(){
    string words;

    getline(cin,words);

    int i = 0;

    cout<<words<<endl;

    int alphabet = 0;
    int space = 0;
    int number = 0;

    while(words[i] != '\0'){
        if('a'<=words[i] && words[i]<= 'z' || 'A' <= words[i] && words[i]<='Z')
            alphabet++;

        if(words[i] == ' ')
            space++;

        if('0' <=words[i] && words[i] <= '9')
            number++;

        i++;    
    }

    cout<<alphabet<<" "<<space<<" "<<number<<endl;
}