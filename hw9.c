#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[30];
	int i;
	
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	
	 
    for(i=0; str[i]; i++)
    {
    	const int diff = 'a' - 'A';
        if((str[i]>='a')&&(str[i]<='z'))//if(islower(str[i]))
        {
            str[i] = str[i]- diff;
        }
        else
        {
            if((str[i]>='A')&&(str[i]<='Z'))//if(isupper(str[i]))
            {
                str[i] = str[i]+ diff;
            }
        }
        
    }
	
	
	printf("Output> %s", str);
	
} 
