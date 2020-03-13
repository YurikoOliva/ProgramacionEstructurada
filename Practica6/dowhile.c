#include<stdio.h>

int main()
{
	int i=-1,num=0;
	float prom,sum=0;
	
	do
	{
		sum=sum+num;
		printf("\nIngrese un numero: ");
			scanf("%d", &num);
				i++;
	}while(num>=0);
	    if(num==0)
	    	printf("\nEl promedio no se puede hacer\n");
	    else
			prom=sum/i;
			printf("\nTotal de numeros leidos: %d", i);
			printf("\n\nEl promedio es: %.2f",prom);
				
	return 0;

}

