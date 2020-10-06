#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int answer= 59;
	int i;
	int trial=0;
	
	do
	{
	printf("Guess a number: ");
	scanf("%i",&i);

	if(i<answer)
		printf("Low\n");
	else if(i>answer)
		printf("High\n");
	
	trial++;
	}while(i!=answer);
	printf("Congratuation! trials:%i",trial);
    	
	return 0;
}
