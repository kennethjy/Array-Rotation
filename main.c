#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

int main(){
    printf("Enter the length of the array: ");
    int N;
    scanf("%d", &N);
    int* arr = (int*) malloc(N * sizeof(int));
    for(int i = 0; i < N; i++){
        printf("Enter the %dth element of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nCurrent array:\n");
    print_array(N, arr);
    printf("\nEnter the number of spaces to rotate the array to the right: ");
    int k;
    scanf("%d", &k);
    printf("\nCurrent array:\n");
    print_array(N, arr); 
    printf("\nShifted array printed manually:\n");
    printf("[");
    for(int i = 0; i < N - 1; i++){
        printf("%d, ", arr[(i - (k%N) + N) % N]);
    }
    printf("%d]\n", arr[(N - 1 - (k%N))]);

    circular_rotation_right(arr, N, k);
    printf("\nNew array:\n");
    print_array(N, arr);
    free(arr);
    return 0;
}
