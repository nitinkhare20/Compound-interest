#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compound_interest;

    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    
    printf("Enter the  rate (as a decimal): ");
    scanf("%f", &rate);

    
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    compound_interest = principal * (pow(1 + rate, time) - 1);


    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}

