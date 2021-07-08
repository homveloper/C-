#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

int anwser = 0;

int primeNumber[1000]  = {-1};

bool isPrimeNumber(int value);

void permutation(std::string array, int depth, int n, int r) {
    if (depth == r) {
        int num = std::stoi(array.substr(0, r));

        if (isPrimeNumber(num)){
            bool has=0;
            for(int i=0; i<anwser; i++) {
                if ( primeNumber[i] == num) {
                    has = 1;
                    break;
                }
            }

            if (!has){
                primeNumber[anwser] = num;
                anwser++;
            }
        }

    } else {
        for (int i=depth; i< n; ++i) {
            std::swap(array[depth] , array[i]);
            permutation(array, depth + 1, n, r);
            std::swap(array[depth], array[i]);
        }
    }
}

bool isPrimeNumber(int value) {
    int last = value / 2;

    if ( value <= 1) 
        return 0;
    
    for (int i= 2; i<=last; ++i) {
        if ( (value % i ) == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    std::string array = {'0','1','0'};

    for(int i=1; i<=array.length(); i++){
        permutation(array, 0, array.length(), i);
    }

    for(int i=0; i<anwser; i++){
        std::cout<<primeNumber[i]<<std::endl;
    }

    std::cout<<anwser<<std::endl;

    return 0;
}