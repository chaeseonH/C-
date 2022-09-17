#include <stdio.h>

int main(void)
{
	
	float km;
	printf("Please enter kilometers: ");
	scanf("%f", &km);
	float mile;
	mile = km/(1.609);
	printf("%.1f km is equal to %.1f miles", km, mile);
	
	return 0;
}
