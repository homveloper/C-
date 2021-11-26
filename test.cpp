int* sum(int a, int b){
    static int* sum;
    *sum = (a+b);
    return sum;
}