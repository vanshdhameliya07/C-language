#include<stdio.h>
main(){
	
	int i=1,ans,no=5;
	table:
		   ans = no*i; //5*1
		              // 5*25
		              
		   printf(" %d * %d  %d \n",no,i,ans); // 5 1 5
		                                   // 5 2 10
		   
		   i++;  
	if(i<=10){
		goto table;
	}	   
	
}
