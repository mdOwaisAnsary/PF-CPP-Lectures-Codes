// Working of assignment operators
#include <stdio.h>
int main()
{
   printf( "Assignment :\n");
		int x,y;
		x=5;
		y=2;
		printf( "x is:%d\n",x);// 
		printf( "y is:%d\n",y);//
	 
		printf( "After:\n");//
		x=x+y;
		x+=y;
		printf( "x is:%d\n",x);// 
		y=y+x;
		y+=x;
		printf( "y is:%d\n",y);//
		
		int x=2;	
		printf("%d\n" ,x+=2);//
		printf("%d\n" ,x-=2);//
		printf("%d\n" ,x*=2);//
		printf("%d\n" ,x/=2);//
		printf("%d\n" ,x%=2);//

    return 0;
}
