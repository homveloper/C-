/*
    
    모든 사람이 처음은 1등이며, 
    나보다 몸무게와 키가 더 큰 사람이 있다면 등수를 1추가한다.
*/

#include <iostream>

struct Human{
    int weight;
    int tall;
};

Human humans[100];

int main() {
    int n;
    
    scanf("%d", &n);

    int rank = 1;

    for(int i=0; i<n; i++){
        scanf("%d %d", &humans[i].weight, &humans[i].tall);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (humans[i].weight < humans[j].weight && 
                humans[i].tall < humans[j].tall) {
                rank++;
            }
        }
        printf("%d ",rank);
        rank = 1;
    }

    return 0;
}