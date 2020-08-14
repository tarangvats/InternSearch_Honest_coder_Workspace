#include <stdio.h>

int main(void)
{
int n ; 
scanf("%d",&n);
int arr[n];
for(int i=0 ; i<n ;i++)
{
	scanf("%d",&arr[i]);
}
int missing = 0;
for(int j = 0 ; j<n ; j++)
{
	if(arr[j]==missing)
	{
		
		missing = missing+1 ;
		
	}
	else
	{
		printf("missing is %d",missing);
		return 0;
	}
}
	return 0;
}
