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
	int t = 0;
   	for(int i=0 ; i<n; i++)
	{
		t = t + a[i];
	}
  printf("%d",t);
	return 0;
}
