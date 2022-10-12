int binary(int n)
{
	if(n>1)
		binary(n/2);
	printf("%d", n%2);
}



int main(void)
{
	int num;
	 printf("Pleaese enter a number:");
	 scanf("%d", &num);
	 binary(num);
	 return 0;
	 
	 
}
