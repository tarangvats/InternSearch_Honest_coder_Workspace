#include <stdio.h>

int main()
{
  int m,n ;
  scanf("%d %d",&m,&n);
  int arr[m*n];
  int t= 0 ;
  for(int i = 0; i<m ; i++)
  {
  	 
  	for(int i = 0 ;i<n ;i++)
  	{
  		 
  		 scanf("%d ",&arr[t+i]);
  	}
  	t = t+n ;
  	printf("\n");
  }
  int k ;
  scanf("%d", &k);
  if(k<arr[0] | k>arr[(m*n)-1])
  {
  	printf("False");
  }
	
  int a;
  for(int i = 0 ; i< (m-1)*n ; i = i+ n )
  {
  	 if(k>=arr[i] && k<arr[i+n])
  	 {
  	 	a =i;
  	 }
  }
 for(int i = a ; i<a+n ; i++)
 {
 	if(k==arr[i])
 	{
 		printf("true");
 		return 0 ;
 	}
 }
	return 0 ;
}
