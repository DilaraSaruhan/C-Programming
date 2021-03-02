#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
	int main (void)
{
 int number;
 printf("Write number: ");
 scanf("%d", &number);

 if(number%2 ==0)

 printf ("%d is even number.", number);

 else

 printf ("%d is odd number.", number);



	return 0;
}
