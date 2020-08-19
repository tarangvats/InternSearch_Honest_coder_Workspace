#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0 ; i<n ;i++)
	{
		scanf("%d ",&arr[i]);
	}
	int k;
	scanf("%d",&k);
	
	for(int j = 0 ; j<n ;j++)
	{  
		int t = arr[j]+k;
		int l = 0;
	    for(int i=0 ; i<n ; i++)
	       {
		      if(t<arr[i])
		      {
		      	printf("false ");
		        l=1;	
		      	break ;
		      	
		      }
		      else
		    	l=0;
		    }
		  if(l==0)
			printf("true ");
		
	}
	return 0;
}
