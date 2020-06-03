#include<stdio.h>
#include<conio.h>
 
long fibonacci(int);
void main(void)
{
	int i, N;
 
	printf("NUMERO FIBONACCI\n\n");
	printf("\nCantidad de numeros requeridos: ");
	scanf("%d", &N);
	for(i=0;i<N;i++)
		printf("\n\t%d\t %d\n", i, fibonacci(i));
	getch();
}
 
long fibonacci(int n)
{
	if(n==0 || n==1)
		return n;
	else
		return fibonacci(n-2) + fibonacci(n-1);
}

