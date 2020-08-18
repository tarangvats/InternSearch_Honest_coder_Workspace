#include <stdio.h>
#include <math.h>
int main(void)
{
	int d,m,y,c;
	scanf("%d %d %d",&d,&m,&y);
	int t[]={ 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	  if (m < 3) 
	  {
	  	y=y-1;
	  }
        
    int daynum= (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
    if(daynum==0)
    	printf("Sunday");
    else if(daynum==1)
    	printf("Monday");
    else if(daynum==2)
    	printf("Tuesday");
    else if(daynum==3)
    	printf("Wednesday");
    else if(daynum==4)
    	printf("Thursday");
    else if(daynum==5)
    	printf("Friday");
    else
    	printf("Saturday");	
    	
   
	
}
