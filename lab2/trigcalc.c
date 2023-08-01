#include <stdio.h>
#include <math.h>

int main(){


    double X, Y, H, theta;

    printf("Enter X: ");
    scanf("%lf", &X);
    printf("Enter Y: ");
    scanf("%lf", &Y);



    H = sqrt(X*X + Y*Y);
    theta = asin(Y/H)*180/M_PI;

    if(X == 0 || Y == 0){
        theta =0;
    }

    printf("\nThe Hypotenuse Length is: %.1lf\n", H);
    printf("\nThe Angle Theta is: %.1lf\n", theta);

    return 0;
}