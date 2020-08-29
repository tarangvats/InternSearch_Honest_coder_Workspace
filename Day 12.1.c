#include <stdio.h>

int main(void) 
{
    int n ;
    scanf("%d",&n);
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
    	scanf("%d ",&arr[i]);
    int t = n-1 ;
    while(t>0)
    {
    	for(int i = 1 ;i<=t ; i++)
       {
    	  if(arr[t-i]>=i)
    	   {
    		t = t - i ;
    		if(t==0)
    		{
    			printf("true\n");
    			return 0;
    		}
    		break;
    	   }
    	   else
    	   {
    	   	printf("false");
    	   	return 0;
    	   }
    	  
    		
       }
    	
    }
    
	return 0;
}
