#include <stdio.h>
int create(int k)
{
	int arr[100];
	int t;
	for(int i = 0 ;i>-1 ;i++)
	{
		arr[i] = k%10 ;
		if(k/10!=0)
		{
			k = k/10 ;
		}
		else{
			t = i ;
			break;
		}
	}
	int sumup = 0;
	for(int i = 0 ; i<=t;i++)
	{
		sumup = sumup + arr[i];
	}
	return sumup;
}

int main(void)
{
   int n ; 
   scanf("%d",&n);
   int sum = create(n);
   	
   	while(sum/10!=0)
   	{
   	  sum = create(sum);
   	 
   }
  printf("%d",sum);
	return 0;
}
