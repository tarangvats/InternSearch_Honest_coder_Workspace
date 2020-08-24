#include <stdio.h>

int main(void) 
{
   int n ;
   scanf("%d",&n);
   int a[n];
   int w=0 ;
   for(int i = 0 ;i<n;i++)
		scanf("%d ",&a[i]);
	for(int i = 1 ; i<n-1 ;i++)
	{
		if(a[i]<=a[i-1] && a[i]<=a[i+1])
		{
			if(a[i+1]>a[i-1] )
			{
				w = w+a[i-1]-a[i] ;
			}
			else if(a[i-1]>a[i+1])
			{
				w = w + a[i+1] - a[i] ;
			}
			else
			{  
				if((n-i)<=i)
				{
					for(int j = 1 ;j<n-i  ; j++)
				   {
					if(a[i+j]>a[i-j])
					{
						w = w + a[i-j] - a[i] ;
						break;
					}
					else if(a[i+j]<a[i-j])
					{
						w = w + a[i+j] -a[i];
					}
				  }
					
				}
				else
				{
					for(int j = 1 ;j<i  ; j++)
				   {
					if(a[i+j]>a[i-j] && a[i-j]>a[i])
					{
						w = w + a[i-j] - a[i] ;
						break;
					}
					else if(a[i+j]<a[i-j] && a[i+j]>a[i])
					{
						w = w + a[i+j] -a[i];
					}
					else
					{
						w = w + a[i+1] -a[i] ;
					}
				  }
					
				}
				
				
				
			}
		}
		if(a[i]>a[i-1] && a[i]<a[i+1])
		{
			for(int j = 1 ; j<=i ; j++)
			{
				if(a[i-j]>=a[i])
				{
					w = w + a[i+1] - a[i] ;
					break;
				}
			}
		}
		if(a[i]<a[i-1] && a[i]>a[i-1])
		{
			for(int j = 1 ; j<n-i ; j++)
			{
				if(a[i+j]>=a[i])
				{
					w = w + a[i-1] - a[i] ;
					break;
				}
			}
		}
		
		
		
	}
	
	printf("%d",w);
	return 0;
}
