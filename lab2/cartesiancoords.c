#include <stdio.h>
#include <math.h>


int main(){


    double x, y;


    printf("Enter the x-coordinate in floating point: ");
    scanf("%lf", &x);


    printf("Enter the y-coordinate in floating point: ");
    scanf("%lf", &y);

    //Rounding Coordinates to hundreth place
    x = roundf(x*100)/100;
    y = roundf(y*100)/100;

    printf("\n(%.2lf, %.2lf) ", x, y);

    if(x == 0 && y == 0){
        printf("is at the origin.");
    }
    else if(x == 0){
        printf("is on the y axis.");
    }
    else if(y == 0){
        printf("is on the x axis.");
    }
    else{
        if(x > 0 && y > 0){
            printf("is in quadrant I.");
        }
        else if(y > 0){
            printf("is in quadrant II.");
        }
        else if(x < 0 && y < 0){
            printf("is in quadrant III.");
        }
        else{
            printf("is in quadrant IV.");
        }
    }
    return 0;
}