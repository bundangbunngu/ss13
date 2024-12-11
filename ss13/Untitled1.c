#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Nhap so nguyen thu 1: ");
    scanf("%d", &num1);

    printf("Nhap so nguyen hai: ");
    scanf("%d", &num2);

    int gcd = findGCD(num1, num2);
    printf("uoc chung lon nhat cua %d và %d là: %d\n", num1, num2, gcd);

    return 0;
}

