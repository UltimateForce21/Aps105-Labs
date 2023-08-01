#include <stdio.h>
#include <stdlib.h>

// complete
int main(){

	int original;
	
	int f, g, h, i;
	
	int a, b, c, d;

	printf("Enter an ecrypted 4-digit combination: ");

	scanf("%d", &original);

	//printf("%d", original);
	
	i = original % 10;

	h = (original % 100 - i)/10;

	g = (original % 1000 - i - h)/100;

	f = (original % 10000 - i - h - g)/1000;

	a = i;
	b = abs(9-g);
	c = abs(9-h);
	d = f;

	
	printf("\n%d%d%d%d\n", a, b, c, d);


	return 0;



}
