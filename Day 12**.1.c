#include <stdio.h>

int main(void) 
{
   int m,n ;
   scanf("%d %d",&m,&n);
   int arr[m][n];
   for(int i = 0 ; i<m ; i++)
   {
   	for(int j=0 ;j<n ;j++)
   	{
   		scanf("%d ",&arr[i][j]);
   	}
   	printf("\n");
   }
   int arry[m][n];
   for(int i = 0 ; i<m ; i++)
   {
   	for(int j=0 ;j<n ;j++)
   	{
   		
   			arry[i][j]=1;
   		
   	}
   }
   for(int i = 0 ; i<m ; i++)
   {
   	for(int j=0 ;j<n ;j++)
   	{
   		if(arr[i][j]==0)
   		{
   			for(int p = 0 ; p<n ;p++)
   			{
   				arry[i][p]=0 ;
   			}
   			for(int p=0 ; p<m ;p++)
   			{
   				arry[p][j]=0;
   			}
   		}
   	}
   }   
    for(int i = 0 ; i<m ; i++)
   {
   	for(int j=0 ;j<n ;j++)
   	{
   		if(arry[i][j]!=0)
   		{
   			arry[i][j]=arr[i][j];
   		}
   	}
   }
   
   
   
   for(int i = 0 ; i<m ; i++)
   {
   	for(int j=0 ;j<n ;j++)
   	{
   		printf("%d ",arry[i][j]);
   	}
   	printf("\n");
   }
   
	return 0;
}
