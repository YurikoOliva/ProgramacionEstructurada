#include <stdio.h>
#include <stdlib.h>

struct student
{
	int id;
	char name[10];
	char lastname[10];
	char school[50];
	int grade;
	char career[20];
	char gender;
}A[50];

int main()
{
	int i;
	
	printf("\nInformacion de los estudiantes ");
		for(i=0; i<50; i++)
		{
			printf("\nID: ");
				scanf("%d", A[i].id); 
			fflush(stdin);
			printf("\nNombre: "); 
			fflush(stdin);
				gets(A[i].name);
			printf("\nApellido: "); 
			fflush(stdin);
				gets(A[i].lastname);
			printf("\nEscuela: "); 
			fflush(stdin);
				gets(A[i].school);
			printf("\nGrado: ");
				scanf("%d", A[i].grade);
			printf("\nCarrera: "); 
			fflush(stdin);
				gets(A[i].career);
			printf("\nGenero: ");
				scanf("%c", A[i].gender);
			printf("\n");
		}
	system ("pause");
	return 0; 
}
