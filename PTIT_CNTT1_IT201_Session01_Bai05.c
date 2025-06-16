#include <stdio.h>

// Hàm đổi chỗ 2 giá trị
void swap(int*a,int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng bằng Bubble Sort
// Độ phức tạp: O(n^2)
void bubbleSort(int arr[],int n) {
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

// Hàm in mảng ra màn
void printArray(int arr[],int n) {
    for (int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhập số lượng phần tử:");
    scanf("%d",&n);

    int arr[n];

    printf("Nhập các phần tử của mảng:\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Mảng trước khi sắp xếp là:");
    printArray(arr,n);

    bubbleSort(arr,n);

    printf("Mảng sau khi sắp xếp(BubbleSort): ");
    printArray(arr,n);
    return 0;
}