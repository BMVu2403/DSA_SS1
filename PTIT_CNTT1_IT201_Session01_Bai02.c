#include <stdio.h>

void printDouble(int n) {
    int i = 10;
    while (i < n) {
        printf("%d\n", i);
        i *= 2;
    }
    // Độ phức tạp thời gian: O(log n)
}

int main() {
    printDouble(20); // Gọi đúng tên hàm
    return 0;
}
