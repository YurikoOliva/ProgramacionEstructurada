#include<stdio.h>

int main()
{
	int i=0,num=0;
	float prom,sum=0;
	
	do
	{
		printf("\nIngrese un numero: ");
			scanf("%d", &num);
				sum=sum+num;
				i++;	
		printf("\nSuma= %.2f\n",sum);
	
	}while(num>=0);
	    i=i-1;
	    sum=sum-num;
		prom=sum/i;
		printf("\nTotal de numeros leidos: %d", i);
		printf("\n\nEl promedio es: %.2f",prom);
				
	return 0;

}

