#include <stdio.h>
#include <math.h>

int main(){
    
    char wUnit[2];
    char hUnit[2]; //the last two characters of these indicate the units

    double w, h;
    double BMI;
    
    printf("Enter the body weight: ");
    scanf("%lf%s", &w, &wUnit);

    printf("Enter the height: \n");
    scanf("%lf%s", &h, &hUnit);

    /* printf("Weight: %lf, Units: %s\n", w, wUnit);
    printf("Height: %lf, Units: %s\n", h, hUnit); */



    //change pounds to kg
    if(wUnit[0] == 'l' && wUnit[1]== 'b'){
        w = w/2.205;
    }
    //converting in to m
    if(hUnit[0] == 'i' && hUnit[1]== 'n'){
        h = h/39.37;
    }
    //converting ft to m
    if(hUnit[0] == 'f' && hUnit[1]== 't'){
        h = h/3.281;
    }

    /* printf("post conversion\n");
    printf("Weight: %lf, Units: %s\n", w, wUnit);
    printf("Height: %lf, Units: %s\n", h, hUnit); */

    BMI = w/(h*h);
    BMI = roundf(BMI*10)/10;

    printf("The Body Mass Index (BMI) is: %.1lf\n", BMI);

    printf("Category: ");

    if(BMI < 18.5){
        printf("Underweight");
    }
    else if(BMI < 24.9){
        printf("Healthy Weight");
    }
    else if(BMI < 29.9){
        printf("Overweight");
    }
    else if(BMI >= 30){
        printf("Obesity");
    }


    return 0;
}