#include <stdio.h>

int main(void) 
{
	int n ; //numbers
	scanf("%d",&n);
	int arr[n];
	for(int i =0 ; i<n ;i++)
	{
	   scanf("%d ",&arr[i]);	
	}
   for(int i=0 ; i<n-1 ;i++)
   {
   	for(int j = 0; j<n ;j++)
   	{
   		if(arr[i]==arr[j])
   		{
   			printf("true");
   			return 0;
   		}
   		
   	}
   	
   }
	printf("false");
	return 0;
}
