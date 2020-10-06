#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int sum=0;
	int i;
	int num;
	
	printf("input a number: ");
	scanf("%i",&num);
	
	for(i=0;i<=num ;++i)
		sum += i;
    	printf("the result is %i.\n",sum);
    	
	return 0;
}
