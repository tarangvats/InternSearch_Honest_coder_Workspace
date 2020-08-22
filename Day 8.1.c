#include <stdio.h>

int main(void) 
{
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i = 0 ;i<n ; i++)
    	scanf("%d ",&arr[i]);
   for(int j = 0; j<n ; j++)
   {
   	   for(int i = 0 ;i<n-1 ; i++)
        {
   	      if(arr[i]>arr[i+1])
   	      {
   			int tmp = arr[i];
   			arr[i] = arr[i+1];
   			arr[i+1] = tmp;
     	  }
        }
   	}
   	int p;
   	for(int i = 0 ;i<n ;i++)
   	{
   		if(arr[i]!=0)
   		{
   		  p = i;
   		  break;
   		}
   	}
   	for(int i = 0 ;i<n-p-1 ;i++)
    	arr[i] = arr[p+i+1];
   	for(int i = n-1 ; i>=n-p-1 ;i--)
   		arr[i] = 0;
   		
 for(int i=0 ; i<n ; i++)
	printf("%d ",arr[i]);
 
 return 0;    
}  
