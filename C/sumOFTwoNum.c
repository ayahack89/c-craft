// Sum of two numbers
#include<stdio.h>
int main() {
    int a, b, sum;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    sum = a + b;
    printf("The sum is: %d", sum); // The issue is fixed here
    return 0; // Added a return statement
}

