#include <stdio.h>

int main(void) 
{
	int n ;
	printf("No. of terms ? \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the numbers: \n");
	for(int i = 0 ;i<n ;i++)
	     {
		    scanf("%d ",&arr[i]);
         }
    for(int j=0 ; j<n-1 ; j++)
    {
             for(int i = 0 ;i<n-1 ;i++)
                  {
    	                  if(arr[i]>arr[i+1])
    	                         {
    	                         	int tmp = arr[i];
    	                         	arr[i] = arr[i+1];
    	                         	arr[i+1] = tmp ;
    	                         }
                  }
    }
   int d = arr[1] - arr[0] ;
//common difference assumed to be d
    int t=0;
     for(int i =0 ; i<n-1 ; i++)
     {
     	if(arr[i+1]!=arr[i]+d)
     	{
     		printf("false");
     		return 0;
     	}
     }
    printf("true");
    
		return 0;
}

