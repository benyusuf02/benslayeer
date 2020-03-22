#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(int argc, char *argv[]) {
setlocale(LC_ALL,"Turkish");
int a,s,f,v;
printf("birinci sayýyý gir : "); scanf("%d",&a);

printf("ikinci sayýyý gir  :"); scanf("%d",&s);

printf("\ttoplama yapmak için : 1\n");
printf("\t***********************\n");
printf("\tçýkarma yapmak için : 2\n");
printf("\t***********************\n");
printf("\tçarpma yapmak için  : 3\n");
printf("\t***********************\n");
printf("\tbölme yapmak için   : 4\n");
printf("\t***********************\n");

sa : printf("\nyapmak istediðiniz iþlemi seçiniz  :");scanf("%d",&f);


switch(f)
{

	case 1: {
	 v= a+s;
	printf(" \niki sayýnýn toplamý = %d\a",v);
		break;
	}
	case 2 : {
		v=a-s;
		printf("\n iki sayýnýn farký = %d\a",v);
		
		break;
	}
	case 3 : 
	{
	v=a*s;
	printf("\niki sayýnýn çarpýmý = %d\a",v);
break;		
	}
	case 4: {
		float b; 
		b = a/s;
		printf("\nbölme iþleminin sonucu = %.1f\a",b);
		break;
	}
	
	default :
	{ printf("\nlütfen 1-3 arasýnda bir seçim yapýnýz...\n");
	goto sa;
	 }
	
	system("pause");
	
}




























	
	
	return 0;
}
