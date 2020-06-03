#include <stdio.h>

int main()
{
	int i, num, j, A[3][3];
	
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
		{
			printf("\nMatriz de 3x3 ");
			printf("\nDe el valor para [%d][%d]: ", i+1, j+1);
				scanf("%d", A[i][j]);
		}
	
	printf("Numero a multiplicar: \n");
	scanf("%d", &num);
		for(i=0; i<3; i++)
			for(j=0; j<3; j++)
				printf("%d\t ", A[i][j]); 
	 
	return 0;
}
