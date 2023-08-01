#include <stdio.h>


int main(){
	
	
	int currH, currMins, tripH, tripMins;
	float tripT;

	printf("Entre current time: ");
	//currH = 2; currMins = 10;
	scanf("%d %d", &currH, &currMins); //something here is going wrong
	
	printf("Entre trip time: ");
	
	//tripT = 5.5;
	scanf("%lf", &tripT);
	tripH = tripT;

	
	tripMins = 60*(tripT-tripH);
	
	

	int endH, endMins, addedH;

	
	endMins = currMins + tripMins;
	addedH = endMins / 60;
	endMins = endMins % 60;	
	endH = currH + tripH + addedH;


	if(endH > 24){
		endH -= 24;
		printf("Arrival Time is next day %d:%d\n", endH, endMins);
	}
	else{
		printf("Arrival TIme is same day %d:%d\n", endH, endMins);
	}


	return 0;

}
