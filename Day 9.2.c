#include <stdio.h>
#include <math.h>

int main(void) 
{
    int n ;
    scanf("%d",&n);
    int t =n ;
    int k = 0;
    while(t>0)
    {
    	t = t/10 ;
    	k++;
    }
    
    int arr[k];
    for(int i = 0 ; i<k ;i++)
    {
    	arr[k-i-1] = n%10 ;
    	n = n/10 ;
    }
    for(int i = 0 ;i<k ;i++)
    {
    	if(arr[i]==6)
    	{
    		arr[i] = 9 ;
    		break ;
    	}
    }
   
    for(int i = 0 ;i<k ;i++)
    	printf("%d",arr[i]);
    
	return 0;
	
}
