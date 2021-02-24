#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int sayi1,secim,t,sonuc; 
	

	printf("***GEZEGENLERDE ATIS HESABI***\n");
	printf("**********************\n");
	printf("1 DUNYADA\n");
	printf("2 AYDA\n");
	printf("3 SATURNDE\n");

	
	printf("Islem seciniz: \n");
	scanf("%d",&secim);

    printf("Zaman giriniz: \n");
    scanf("%d",&t);

	switch(sonuc)
	{
		case 1: printf("DUNYADA ATIS HESABI: %d\n",((1/2)*(9,81)*(t*t)));
		       
				 break;
		case 2: printf("AYDA ATIS HESABI: %d\n",((1/2)*(9,81)*(t*t)));
		
		        fflush(stdin);
				 break;
		case 3: printf("SATURNDE ATIS HESABI: %d\n",((1/2)*(9,81)*(t*t)));
			
				fflush(stdin);
				 break;
		default: printf("Yanlis Islem Numarasi");
			    break;
	}
	return 0;
}
