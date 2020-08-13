#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0 ; i<n; i++)
	{
		scanf("%d ", &a[i]);
	}
	for(int j = 0 ;j<n/2 ; j++)
	{
		int tmp = a[j];
		a[j] = a[n-j-1]; 
		a[n-j-1] = tmp ;
	}
	for(int i=0 ; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
