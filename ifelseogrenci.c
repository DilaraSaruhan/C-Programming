#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//3 sinav notu,1 proje notu girilen ögrencinin geçme kalma durumu//

int main() {
	
	int ilksinav,ikincisnv,ucuncusnv,ilkprj,ortalama;
	
	printf("1.sinav notunu giriniz: ");
	scanf("%d",&ilksinav);
	
	printf("2.sinav notunu giriniz: ");
	scanf("%d",&ikincisnv);
	
	printf("3.sinav notunu giriniz: ");
	scanf("%d",&ucuncusnv);
	
	printf("Proje notunu giriniz: ");
	scanf("%d",&ilkprj);
	
	ortalama=(ilksinav+ikincisnv+ucuncusnv+ilkprj)/4;
	
	if (ortalama<=50)
	{
		printf("Ortalamaniz FF");
	}
	if (ortalama>50 && ortalama<60)
	{
		printf("Ortalamaniz DD");
	}
	if (ortalama>60 && ortalama<70)
	{
		printf("Ortalamiz CC");
	}
	if (ortalama>70 && ortalama<85)
	{
		printf("Ortalamaniz BB");
	}
	if (ortalama>85)
	{
		printf("Ortalamaniz AA");
	}
	return 0;
}
