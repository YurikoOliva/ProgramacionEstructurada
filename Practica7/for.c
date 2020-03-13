#include <stdio.h>

int main()
{
	int b, n, i, mult=0;
	
		printf("\nDe el numero base: ");
			scanf("%d", &b);
		printf("\nDe el numero de multiplos que quiere: ");
			scanf("%d", &n);
			for(i=1; i<=n; i++)
				{
					mult=b*i;
					printf("\n\t%d", mult);
				}
	return 1;
}
