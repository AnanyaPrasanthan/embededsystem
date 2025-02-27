#include <stdio.h>
int calculateSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);   
    int result = calculateSum(n);
    printf("Sum = %d\n", result);
    return 0;
}
