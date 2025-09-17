#include<stdio.h>

int main(){
	int sub1,sub2,sub3,total;
	float percentage;
	
	printf("Enter marks of subect 1:");
	scanf("%d",&sub1);
	
	printf("Enter marks of subject 2:");
	scanf("%d",&sub2);
	
	printf("Enter marks of subject 3:");
	scanf("%d",&sub3);
	
	total=sub1+sub2+sub3;
	percentage=(total/300.00)*100;
	
	printf("Total Marks=%d\n",total);
	printf("Percentage=%.2f%%\n",percentage);
	
	return 0;
}
