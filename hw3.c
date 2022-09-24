#include <stdio.h>

int main(void)
{
	int i,j,rows;
	for (rows=1; rows<=5; rows++ )
	{
		for(i=1; i<=5-rows; i++ )
		{
			printf(" ");
		}
		for(j=1; j<=(2*rows-1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
