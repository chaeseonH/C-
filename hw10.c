 #include <stdio.h>
 void CleanLineFromReadBuffer(void)
 {
 	while(getchar()!='\n');
 }
 
 
 struct city
 {
 	char name[20];
 	char country[20];
 	int ppl;
 };
 
 int main(void)
 {
 	struct city c1, c2, c3;
 	int i;
 	
 	printf("Input three cities: \n");
 	printf("Name> "); gets(c1.name);
 	printf("Country> "); gets(c1.country);
 	printf("Population> "); scanf("%d", &c1.ppl);
 	CleanLineFromReadBuffer();
 	
 	
 	printf("Name> "); gets(c2.name);
 	printf("Country> "); gets(c2.country);
 	printf("Population> "); scanf("%d", &c2.ppl);
 	CleanLineFromReadBuffer();
 	
 	printf("Name> "); gets(c3.name);
 	printf("Country> "); gets(c3.country);
 	printf("Population> "); scanf("%d", &c3.ppl);
 	CleanLineFromReadBuffer();
 	
 	printf("Printing the three cities: \n");
 	printf("1. %s in %s with a population of %d people \n", c1.name, c1.country, c1.ppl);
 	printf("2. %s in %s with a population of %d people \n", c2.name, c2.country, c2.ppl);
 	printf("3. %s in %s with a population of %d people \n", c3.name, c3.country, c3.ppl);
 	return 0;

 }
