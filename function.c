#include<stdio.h>
 void hello()
 {
 	printf("welcome to the world of c \n");
 	
 }
 void add()
 {
 	int a,b;
 	printf(" Emter two numbers:");
 	scanf("%d %d",&a,&b);
 	printf("Addition of %d and %d is %d\n",a,b,a+b);
 	
 }
 
 
 int sum()
 {
 	int a,b;
 	printf("Addition of %d and %d is %d\n", a, b,(a+b));
 	
}
 
 int suml(int a,int b)
 {
 	int c =a+b;
	 return c;
	 
 }
 
 
 int main()
 {
 	int num;
 	hello();
 	hello();
 	
 	add();
 	suml(14,65);
 	
 	num= sum(34,67);
 	printf (" sum =%d\n", num);
 }
