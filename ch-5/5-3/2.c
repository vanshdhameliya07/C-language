#include<stdio.h>
main(){
	
	int English,Hindi,Gujarati,choice,subchoice;
	printf("Press 1 for English Press 2 for Hindi Press 3 for Gujarati :- ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			  printf("Press 1 for Internet Recharge Press 2 for Top-up Recharge Press 3 for Special Recharge :- ");
	             		   scanf("%d",&subchoice);   
	             switch(subchoice){
	             	        
	             	
	             	case 1:
	             		   printf("You have successfully done a Internet Recharge.");
	             		   scanf("%d",&subchoice);
	             	case 2:
	             		   printf("You have successfully done a Top-up Recharge.");
	             		   scanf("%d",&subchoice);
					case 3:
	             		   printf("You have successfully done a Special Recharge.");
	             		   scanf("%d",&subchoice);					   
				 }
	             break;
	             
	             
	             
	    case 2:
			  printf("Internet Recharge ke liye 1 dabaiye Top-up Recharge ke liye 2 dabaiye Special Recharge ke liye 3 dabaiye :- ");
	          scanf("%d",&subchoice);   
	             switch(subchoice){
	             	        
	             	
	             	case 1:
	             		   printf("Aapne safaltapurvak Internet Recharge kar liya he.");
	             		   scanf("%d",&subchoice);	
	             	case 2:
	             		   printf("Aapne safaltapurvak Top-up Recharge kar liya he.");
	             		   scanf("%d",&subchoice);
					case 3:
	             		   printf("Aapne safaltapurvak Special Recharge kar liya he.");
	             		   scanf("%d",&subchoice);					   
				 }
	             break;  
		case 3:
			  printf("Internet Recharge mate 1 dabavo Top-up Recharge mate 2 dabavo Special Recharge mate 3 dabavo :- ");
	          scanf("%d",&subchoice);   
	             switch(subchoice){
	             	        
	             	
	             	case 1:
	             		   printf("Tame safaltapurvak Internet Recharge karyu chhe.");
	             		   scanf("%d",&subchoice);	
	             	case 2:
	             		   printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
	             		   scanf("%d",&subchoice);
					case 3:
	             		   printf("Tame safaltapurvak Special Recharge karyu chhe.");
	             		   scanf("%d",&subchoice);					   
				 }
	             break;   		        
	}
	
	
}
