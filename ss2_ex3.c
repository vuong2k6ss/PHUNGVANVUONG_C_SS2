#include <stdio.h>

int main() {
    int num1 = 11; 
    int num2 = 22; 
    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;
    printf("tong %d và %d là: %d\n", num1, num2, sum);
    printf("hieu %d và %d là: %d\n", num1, num2, sub);
	printf("tich %d và %d là: %d\n", num1, num2, mul);
	printf("thuong %d và %d là: %d\n", num1, num2, div);
    return 0;
}

