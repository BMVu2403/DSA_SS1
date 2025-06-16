#include <stdio.h>

int findMostFreqquent(int arr[],int n) {
    int freq[1001]={0};

    for (int i=0;i<n;i++) {
        freq[arr[i]]++;
    }

    int maxCount = freq[arr[0]];
    int maxValue = arr[0];
    for (int i=1;i<n;i++) {
        if (freq[arr[i]]>maxCount) {
            maxCount = freq[arr[i]];
            maxValue = arr[i];
        }
    }
    return maxValue;
}

int main() {
    int n;
    printf("nhập số lượng phần tử:");
    scanf("%d",&n);

    int arr[n];
    printf("Nhập các phần tử:\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int result = findMostFrequent(arr,n);
    printf("Phần tử xuất hiện nhiều nhất là:%d\n",result);
    return 0;
}
