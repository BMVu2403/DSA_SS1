#include<stdio.h>

int countOccurences(int arr[],int n,int x) {
    int count = 0;
    for (int i=0;i<n;i++) {
        if (arr[i]==x) {
            count++;
        }
    }
    return count;
}

int main() {
    int n,x;

    printf("Nhập số lượng phần tử:");
    scanf("%d",&n);

    int arr[n];

    printf("nhập các phần tử của mảng:\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("nhập giá trị cần đếm:");
    scanf("%d",&x);

    int result=countOccurrences(arr,n,x);
    printf("Giá trị %d xuất hiện %d lần trong mảng.\n",x,result);
    return 0;
}