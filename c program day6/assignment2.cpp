#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);//28

    for (i = 1; i < num; i++) {
        if (num % i == 0) {     // num =6 i=1,2,3=6
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a Perfect Number", num);
    }
    else {
        printf("%d is not a Perfect Number", num);
    }
    return 0;
}
