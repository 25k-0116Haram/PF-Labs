#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    // Calculate allowances
    hra = 0.10 * basic;   // 10% of basic
    da  = 0.05 * basic;   // 5% of basic

    // Calculate Gross Salary
    gross = basic + hra + da;

    // Display result with 2 digits after decimal
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}

