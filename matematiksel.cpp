#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(int argc, char *argv[]) {
setlocale(LC_ALL,"Turkish");
int a,s,f,v;
printf("birinci say�y� gir : "); scanf("%d",&a);

printf("ikinci say�y� gir  :"); scanf("%d",&s);

printf("\ttoplama yapmak i�in : 1\n");
printf("\t***********************\n");
printf("\t��karma yapmak i�in : 2\n");
printf("\t***********************\n");
printf("\t�arpma yapmak i�in  : 3\n");
printf("\t***********************\n");
printf("\tb�lme yapmak i�in   : 4\n");
printf("\t***********************\n");

sa : printf("\nyapmak istedi�iniz i�lemi se�iniz  :");scanf("%d",&f);


switch(f)
{

	case 1: {
	 v= a+s;
	printf(" \niki say�n�n toplam� = %d\a",v);
		break;
	}
	case 2 : {
		v=a-s;
		printf("\n iki say�n�n fark� = %d\a",v);
		
		break;
	}
	case 3 : 
	{
	v=a*s;
	printf("\niki say�n�n �arp�m� = %d\a",v);
break;		
	}
	case 4: {
		float b; 
		b = a/s;
		printf("\nb�lme i�leminin sonucu = %.1f\a",b);
		break;
	}
	
	default :
	{ printf("\nl�tfen 1-3 aras�nda bir se�im yap�n�z...\n");
	goto sa;
	 }
	
	system("pause");
	
}




























	
	
	return 0;
}
