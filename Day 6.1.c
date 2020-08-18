#include <stdio.h>
#include <math.h>

int main(void) 
{
    int n ; //size of array
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ;i<n ;i++){
    	scanf("%d ",&arr[i]);
    }
    int t;  //number to add
    scanf("%d",&t);
    	
   
    int number=0;
    int k = 1;
    for(int i=0;i<n;i++)
    {
    	number = number + k*arr[n-i-1];
       k=k*10;
    	
    	
    }
    number = number+t;
    printf("%d",number);
	return 0;
}
