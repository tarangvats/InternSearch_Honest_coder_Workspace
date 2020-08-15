#include <stdio.h>

int main(void) 
{
	int n ;
	scanf("%d",&n);
	int arr[n];
	for(int i=0 ; i<n ; i++)
	{
		scanf("%d ",&arr[i]);
	}
	for(int i=0 ; i<n ; i++)
	{
		for(int j=i ;j<n ;j++)
		{
			for(int k = j ;k<n ; k++)
			{
				if(arr[i]+arr[j]+arr[k]==0 && i!=j && j!=k && i!=k)
				{
					printf("%d,%d,%d\n",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
	return 0;
}
