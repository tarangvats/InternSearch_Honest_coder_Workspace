#include <stdio.h>
int create(int k)
{
	int arr[10000];
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
	int sum=0 ;
	for(int i = 0 ; i<=t ;i++)
	{
		sum = sum + (arr[i]*arr[i]) ;
	}
	return sum;
}	

int main(void) 
{
	int number ;
	scanf("%d",&number);
	int h = create(number);
	while(h!=1)
	{
		h = create(h);
		if(h==1)
		{
		printf("true");
		return 0;	
		}
		else if(h==4)
		{
			printf("false");
			return 0;
		}
	}
	
	return 0;
}
