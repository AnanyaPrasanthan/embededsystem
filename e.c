#include <stdio.h>

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    
    int days = (month == 2) ? 28 : (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;
    
    if (month < 1 || month > 12) {
        printf("Invalid month number!\n");
    } else {
        printf("Number of days: %d\n", days);
    }
    
    return 0;
}
