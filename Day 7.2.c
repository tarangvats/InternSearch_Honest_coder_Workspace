#include <stdio.h>
#include <math.h>
int main(void) 
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0 ; i<n ;i++)
	{
		scanf("%d ",&arr[i]);
	}
	int a;
	scanf("%d",&a);

     int t = arr[0] + arr[1] + arr[2];
    for(int i=0 ; i<n-2 ; i++)
    {
    	for(int j = i+1 ; j<n-1 ;j++)
    	{
    		for(int k =j+1 ; k<n ; k++)
    		{
    			int s = arr[i] + arr[j] + arr[k] ;
    			if(s==a)
    			{
    				printf("%d",k);
    				return 0;
    			}
    			else if((s>a && s<t)|(s<a && s>t))
    			{
    				t = s;
    			}
    			else if(s>a && a>t)
    			{
    				if(s-a<a-t)
    				{
    					t = s;
    				}
    					
    			}
    			else if(s<a && a<t)
    			{
    				if(a-s<t-a)
    				{
    					t = s;
    				}
    			}
    				
    		}
    	}
    }
    printf("%d",t);

	return 0;
}
