#include <stdio.h>

int main(void)
{
	
	int num,i;
	printf("���� ���� �Է�: ");
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
