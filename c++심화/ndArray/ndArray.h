class NDArray {
    const int dim;  // 차원 
    int* size;      // size[0] * size[1] * ... * size[dim-1] 배열

    struct Address {
        int level;
        // 맨 마지막 level은 데이터를 의미하고 그 상위 레벨은 다음 Address 배열을 가리킨다.

        void* next;
    }


    Address* top;

public:
    NDArray(int dim, int* arraySize) : dim(dim) {
        size = new int[dim];
        
        for(int i=0; i<dim; i++){
            size[i] = arraySize[i];
        }
    }
}