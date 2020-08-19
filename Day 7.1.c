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
	int t = arr[0];
	for(int j = 0 ; j<n ;j++)
	{  
		if(arr[j]>t)
			t = arr[j];
	}
	int arry[n];
	for(int i = 0 ;i<n ;i++)
	{
		arry[i] = arr[i] + k ;
	}
	
	for(int i = 0 ; i<n ; i++)
	{
		if(arry[i]>=t)
			printf("True ");
		else
			printf("False ");
	}
	return 0;
}
