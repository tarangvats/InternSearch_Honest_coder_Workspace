#include <stdio.h>

int main(void) 
{
	int m,n ;
	scanf("%d %d",&m ,&n);
	int a[n],b[m] ;
	for(int i = 0 ;i<n ;i++)
		scanf("%d ",&a[i]);
	for(int i = 0 ; i<m ;i++)
		scanf("%d ",&b[i]);
	

	
	int t=0;
	
	for(int i = 0 ; i<m ; i++)
	{
		for(int j = 0 ; j<n ; j++)
		{
			if(a[j]==b[i])
			{
				int tmp = a[t];
				a[t] = a[j];
				a[j] = tmp;
        	
			   t++  ; 
			}
		
		}
	}

	for(int i = 0 ;i<n ;i++)
		printf("%d ",a[i]);
	return 0;
}
