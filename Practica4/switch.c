#include <stdio.h>

int main()
{
	char op;
	float a, b, suma, resta, multi, div;
	
		printf("\nMENU\n\ta)Suma\n\tb)Resta\n\tc)Multiplicacion\n\td)Division\n");
		printf("\n\nElija una opcion: ");
			scanf("%c",&op);
		switch(op)
		{
			case 'a':
			{
				printf("\nDe dos numero: ");
					scanf("%f", &a);
					scanf("%f", &b);
				suma=a+b;
				printf("\nLa suma es: %.2f", suma);
			break;	
			}
			case 'b':
			{
				printf("\nDe dos numero: ");
					scanf("%f", &a);
					scanf("%f", &b);
				resta=a-b;
				printf("\nLa resta es: %.2f", resta);
			break;
			}
			case 'c':
			{
				printf("\nDe dos numero: ");
					scanf("%f", &a);
					scanf("%f", &b);
				multi=a*b;
				printf("\nLa multiplicacion es: %.2f", multi);
			break;
			}
			case 'd':
			{
				printf("\nDe dos numero: ");
					scanf("%f", &a);
					scanf("%f", &b);
				div=a/b;
				printf("\nLa division es: %.2f", div);
			break;
			}
			default:
				printf("\nERROR");
		}			
}
