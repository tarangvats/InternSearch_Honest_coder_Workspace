#include <stdio.h>

int main(void) 
{
    int n ; 
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    	scanf("%d",&arr[i]);
    int d = 0;	
    for(int i = 0 ;i<n-1 ;i++)
    {  
    	for(int j = i+1 ; j<n ; j++)
    	{
    	 int k = arr[i]-arr[j]; 
    	 if(k>d)
    		d = k ;	
    	}
    	
    }
    printf("%d",d);
	return 0;
}
