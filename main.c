#include <stdio.h>
#define SIZE 100

int main(void) {
    //  Write a program in C to find the maximum and minimum elements in an array.
    int n;
    int arr[SIZE];
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input  %d elements in the array: ", n);

    for (int i = 0; i < n; ++i) {
        printf("\nElement - %d: ", i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("\nMax = %d ", max);
    printf("\nMin = %d ", min);

    return 0;
}
