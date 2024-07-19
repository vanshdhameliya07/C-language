#include<stdio.h>
main(){
	
	int score;
	char grade;
	printf("enter your score :- ");
	scanf("%d",&score);
	
    if(score>=80){
    	grade ='A';
            printf("Your grade is A. Excellent work! You are eligible for the next level. ");
	}
	else if(score>=70){
			grade ='B';
            printf("Your grade is B. Excellent work! You are eligible for the next level. ");
	}
	else if(score>=60){
			grade ='C';
            printf("Your grade is C. Excellent work! You are eligible for the next level. ");
	}
	else if(score>=50){
			grade ='D';
            printf("Your grade is D. Excellent work! You are eligible for the next level. ");
	}
	else if(score>=40){
			grade ='E';
            printf("Your grade is E. Excellent work! You are eligible for the next level. ");
	}
	else{
		grade ='F';
            printf("Your grade is F. Please try again next time. ");
	}
	

}
