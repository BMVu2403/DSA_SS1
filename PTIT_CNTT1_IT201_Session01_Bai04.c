#include <stdio.h>

// Hàm tính tổng vòng lặp - Cách 1
// Độ phức tạp: O(n)
int sum_loop(int n) {
int sum = 0;
for (int i = 1; i <= n; i++) {
sum += i; // Mỗi lần lặp cộng thêm i vào tổng
}
return sum;
}

// Hàm tính tổng bằng công thức - Cách 2
// Độ phức tạp: O(1)
int sum_formula(int n) {
return n * (n+1)/2; // Công thức tính tổng dãy số tự nhiên
}

int main() {
int n;

printf("Nhập n:");
scanf("&d",&n);

int result_loop = sum_loop(n);
int result_formula = sum_formula(n);

printf("Tổng là:%d\n",result_loop);
printf("Tổng là:%d\n",result_formula);

return 0;
}

