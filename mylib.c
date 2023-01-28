#include <stdio.h>

void circular_rotation_right(int* arr, int N, int k){
    k = k % N;
    int temp;
    int offset = 0;
    for(int i = 1; i < N; i++){
        if((i * k % N) == 0){
            offset ++;
        }
        temp = arr[offset];
        arr[offset] = arr[(i * k + offset)%N];
        arr[(i * k + offset)%N] = temp;
    }
}

void print_array(int N, int* arr){
    printf("[");
    for(int i = 0; i < N - 1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[N - 1]);
}