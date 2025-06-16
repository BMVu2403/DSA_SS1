#include <stdio.h>
#include <stdlib.h>

int* mallocArray(int n) {
    int* arr = (int*)malloc(n* sizeof(int));
    for (int i=0;i<n;i++) {
        arr[i] = i;
    }
    //Độ phức tạp không gian: O(n)
    return arr;
}
