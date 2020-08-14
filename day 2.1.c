#include <stdio.h>

int main(void) {
	int arr[8];
	for(int i=0 ; i<8 ;i++)
	{
	  scanf("%d ",&arr[i]);	
	}
	int target;
	scanf("%d",&target);
	if(arr[0]>target)
	{
		printf("0");
		return 0;
	}
	else if(arr[7]<target)
	{
		printf("8");
		return 0;
	}
	else
	{
		for(int i = 0 ; i<7 ;i++)
	     {
		      if(arr[i]==target)
		      {
		      		
			          printf("%d",i);
			           return 0 ;
		           
		      }
	
              else if(arr[i]<target && arr[i+1]>target )
	                 	{        
	                 		
	                 	   printf("%d",i+1);	
	                 	}
		
	     }
	}
	
	
	
	
	return 0;
}
