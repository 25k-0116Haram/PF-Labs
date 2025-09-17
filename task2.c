#include<stdio.h>

int main(){
	int a,b,temp;
	
	printf("Enter Value of a:");
	scanf("%d",&a);
	printf("Enter Value of b:");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After swapping:a=%d,b=%d\n",a,b);
	
	return 0;
	
}
