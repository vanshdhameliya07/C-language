#include<stdio.h>
main(){
    
    int no,i;
    printf("enter number :- ");
    scanf("%d",&no);
    
    do{
    	if(i %2==1){
    		printf(" %d ",i);
		}
		i++;
	}
	while(i<=no);

}
