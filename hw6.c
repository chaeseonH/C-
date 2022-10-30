#include <stdio.h>

int even(int a); 
int odd(int a); 
 
int even(int a)               
{
    if(a%2==0)                 
        printf("%d ",a);       
    return 0;
}
 
int odd(int a)                
{
    if(a%2==1)                 
        printf("%d ",a);        
    return 0; 
}
 

int main(void)
{
	int i;
	int arr[5];
	
	printf("Please input five integers: ");
	
	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Odd numbers :");                    
    for(i=0; i<5; i++)               
    {
        even(arr[i]);                  
    }
    
    printf("Even numbers :");
    for(i=0; i<5; i++)
    {
        odd(arr[i]);                   
    }
    
	return 0;
} 
