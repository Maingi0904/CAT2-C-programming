/*
 Name:Immaculate Nyambura Maingi
 Reg No:CT101/G/26509/25
 Date: 6/ 11/2025
 Description:A program for tax
 */





 #include <stdio.h>

int main() {
    float hours, rate, gross = 0.0, tax = 0.0, net;

    // Input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: $");
    scanf("%f", &rate);

    // Calculate gross pay with overtime
    if (hours <= 40) {
        gross = hours * rate;
    } else {
        gross = 40 * rate + (hours - 40) * rate * 1.5;
    }

    // Calculate tax
    if (gross <= 600) {
        tax = gross * 0.15;
    } else {
        tax = 600 * 0.15 + (gross - 600) * 0.20;
    }

    // Net pay
    net = gross - tax;

    // Output
    printf("\n--- Payroll Summary ---\n");
    printf("Gross Pay : $%.2f\n", gross);
    printf("Taxes     : $%.2f\n", tax);
    printf("Net Pay   : $%.2f\n", net);

    return 0;
}
