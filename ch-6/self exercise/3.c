	#include<stdio.h>
main (){
	
	int maths,english,science;
	float Average, total;
	printf("enter no of maths :- ");
	scanf("%d",&maths);
    printf("enter no of english :- ");
	scanf("%d",&english);
	printf("enter no of maths :- ");
	scanf("%d",&science);
	
	total = maths + english +science;
	Average = (total/300)*100;
	printf("%f\n ",total);
	printf("%f",Average);
	
}
