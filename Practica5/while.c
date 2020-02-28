#include<stdio.h>

int main()
{
	int i=0,num=0;
	float prom,sum=0;
	
	while(num>=0)
	{
		printf("\nIngrese un numero: ");
			scanf("%d", &num);
			if(num>=0)
			{
				sum=sum+num;
				i++;	
			}
		
		printf("\nSuma= %.2f\n",sum);
	
	}
		prom=sum/i;
		printf("\nEl promedio es: %.2f",prom);
		
	return 0;

}
