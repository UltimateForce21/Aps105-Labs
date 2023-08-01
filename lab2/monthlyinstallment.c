#include <stdio.h>
#include <math.h>



//Complete 

int main(){

    /*
    Variables
    Purchase P dollars
    Douwn Payment D
    Finance Term N months
    Monthly Interest Rate r
    Monthly payment M

    */

    int P;
    int D;
    int n;
    double r;
    double monthlyPayment;

    printf("Enter the purchase price P: ");
    scanf("%d", &P); //fix why it takes from the next line

    printf("Enter the amount of down payment D: ");
    scanf("%d", &D);

    printf("Enter the finance term (in months): ");
    scanf("%d", &n);

    printf("Enter the monthly interest rate (in percent): ");
    scanf("%lf", &r);

    r = r/100;

    
    double power = pow(r + 1, n);

    monthlyPayment = ((P - D) * r * power)/(power - 1);

    printf("\nThe monthly payment is: %.2lf\n", monthlyPayment);
    
    return 0;
}


