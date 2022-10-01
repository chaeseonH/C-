#include <stdio.h>

int main(void)
{
	
	int num,i;
	printf("양의 정수 입력: ");
	scanf("%d", &num);
	for(i=2; i<num; i++)
	{
		if (num%i==0)
		{
			printf("It is not a prime number.");
			return 0;
		}
	
	}
	
	
	
	printf("It is a prime number.");
	
	
	return 0;
}
