#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayi1,secim,sonuc,kare,kup; 
	
	char a;
	sayi1=a;
	
	
	printf("***MATEMATIK MENUSU***\n");
	printf("**********************\n");
	printf("1 Karede Alan ve Cevre Hesabi\n");
	printf("2 Girilen Sayinin Kupu\n");
	printf("3 Dairenin Alan ve Cevre Hesabi\n");

	
	printf("Islem seciniz: \n");
	scanf("%d",&secim);
	
	printf("Birinci Sayiyi Giriniz: \n");
	scanf("%d",&a);
    

	switch(sonuc)
	{
		case 1: printf("Birinci Sayiya Gore Karenin Alani: %d\n",(a*a));
		        printf("Birinci Sayiya Gore Karenin Cevresi: %d\n",(a*4));
				 break;
		case 2: printf("Girilen Birinci Sayinin Kupu: %d\n",(a*a*a));
		        fflush(stdin);
				 break;
		case 3: printf("Birinci Sayiya Gore Dairenin Alani: %d\n",(3*a*a));
				printf("Birinci Sayiya Gore Dairenin Cevresi: %d\n",(2*3*a));
				fflush(stdin);
				 break;
		default: printf("Yanlis Islem Numarasi");
			    break;
	}
	return 0;
}
