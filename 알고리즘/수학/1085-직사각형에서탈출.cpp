#include <iostream>

int main(){
    int x,y,w,h;
    int min = 1000;

    scanf("%d%d%d%d",&x,&y,&w,&h);

    min = x < w-x ? x : w-x;
    min = min < y ? min : y;
    min = min < h-y ? min : h-y;

    printf("%d",min);
} 