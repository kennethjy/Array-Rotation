#include <stdio.h>

void circular_rotation_right(int* arr, int N, int k){
    k = k % N;
    int temp, offset = 0, index = 0;
    for(int i = 1; i < N; i++){
        if((index % N) == 0){
            offset ++;
        }
        index = (index + k) % N;
        temp = arr[offset];
        arr[offset] = arr[(index + offset) % N];
        arr[(index + offset) % N] = temp;
    }
}

void print_array(int N, int* arr){
    printf("[");
    for(int i = 0; i < N - 1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[N - 1]);
}
