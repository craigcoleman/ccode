//gcc -o fold fold.c -lm
//./fold
#include "stdio.h"
#include "math.h"

void main(){
	int i, y;
	double s,e;
	printf ("Fold Paper \n");
	printf(" Folds \t | \t Sides \n");
	
	for(i = 0; i < 21; i++){
		e = (double)i;
		s = pow(2,e);
		y = (int)s;
		printf ("%d \t | \t %d \n",i,y);
	
	}
}
