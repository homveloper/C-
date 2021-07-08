/*
    알고리즘 생각!!

    1. 노란색 블록으로 만들 수 있는 사각형의 경우의 수를 나열
    2. 만들어진 각 노란색 사각형의 테두리를 계산, 테두리 길이 = (가로+1) * 2 + (세로+1) * 2
    3. 테두리 길이와 갈색 블록의 갯수가 동일한지 확인
        3-1 true : 해당 노란색 사각형의  가로+1 와 세로+1 한 결과를 return
            이때, 가로 길이가 세로 길이 보다 길어야 함.
        
        3-2 false :  2번을 게속 진행
*/

#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> solution(int brown, int yellow) {

    int width=1, height = 1;

    // 1. 가로 길이가 1인 노란색 사각형 부터 게속 나열함.
    for(;width<=yellow; width++){

        // 1-1. 가로 길이가 1이기 때문에 높이는 자동적으로  yellow / width가 됨.
        // 이때 가로 길이와 세로 길이는 정수여야 함.
        if( yellow % width != 0)
            continue;
        
        height = yellow / width;

        // 2. 테두리 길이 계산
        int outline_length = (width+1) * 2 + (height+1) * 2;

        // 3. 테두리 길이와 brown 블록 갯수가 동일
        if(outline_length == brown) {
            
            if (width < height){
                std::swap(width, height);
            }

            width++;
            height++;

            break;
        }
    }
    return {width+1, height+1};
}

int main() {

    std::vector<int> answer = solution(24, 24);

    for(auto i : answer){
        std::cout<<i<<' ';
    }
    std::cout<<'\n';
}