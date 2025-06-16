#include<stdio.h>
#include<stdbool.h>

// Cách 1: So sánh từng cặp phần tử (Brute-force) - O(n^2)
bool checkDuplicate1(int arr[],int n) {
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (arr[i]==arr[j]) {
                return true;
            }
        }
    }
    return false;
}

// Cách 2: Dùng mảng đánh dấu (Hashing) - O(n)
bool checkDuplicate2(int arr[],int n) {
    int freq[1001]={0};
    for (int i=0;i<n;i++) {
        if (freq[arr[i]]==1) {
            return true;
        }
        freq[arr[i]] = 1;
    }
    return false;
}
int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap %d phan tu trong khoang 0 - 1000:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Kết quả từ 2 cách
    printf("\nKiem tra bang 2 cach:\n");
    printf("Cach 1 (O(n^2)): %s\n", checkDuplicate1(arr, n) ? "Co trung lap" : "Khong co trung lap");
    printf("Cach 2 (O(n)): %s\n", checkDuplicate2(arr, n) ? "Co trung lap" : "Khong co trung lap");

    return 0;
}


