#include <stdio.h>
#include <stdlib.h>

int main()
{
	int id;
	char name[10];
	char lastname[10];
	char school[50];
	int grade;
	char career[20];
	char gender;
	int i, N;
	
	printf("\nInformacion de los estudiantes ");
	printf("\nCantidad de alumnos: ");
		scanf("%d", &N);
		for(i=0; i<N; i++)
		{
			printf("\nID: ");
				scanf("%d", &id); 
			fflush(stdin);
			printf("\nNombre: "); 
			fflush(stdin);
				gets(name);
			printf("\nApellido: "); 
			fflush(stdin);
				gets(lastname);
			printf("\nEscuela: "); 
			fflush(stdin);
				gets(school);
			printf("\nGrado: ");
				scanf("%d", &grade);
			printf("\nCarrera: "); 
			fflush(stdin);
				gets(career);
			printf("\nGenero: ");
				scanf("%c", &gender);
			printf("\n");
		}
	system ("pause");
	return 0; 
}
