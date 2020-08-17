#include <stdio.h>

int main(void)
{
	int n ; //number of days
	scanf("%d",&n);
	int stock[n];
	for(int i = 0 ; i<n ; i++)
	{
		scanf("%d ",&stock[i]);
	}
	int profit = 0;
	for(int i = 0 ; i<n-1 ;i++)
	{
		for(int j=i ; j<n ;j++)
		{
		    if((stock[j]-stock[i])>profit)
		    {
		    	profit = stock[j] - stock[i] ;
		    } 	
		}
		
	}
	printf("%d", profit);
	
	return 0;
}
