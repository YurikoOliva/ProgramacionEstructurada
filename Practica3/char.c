#include <stdio.h>

char a;

int main()
{
	int b = (int)a;
	printf("\nPresione cualquier caracter: ");
		a= getchar();
			if(48<a && a<57)
				printf("Es numerico");
			else
				if(65<a && a<90)
					printf("\nEs alfabetico. \n\tMayusculas");
				else
					if(97<a && a<122)
						printf("\nEs alfabetico. \n\tMinusculas");
					else
						printf("\nEs un simbolo");
	return 0;
}
