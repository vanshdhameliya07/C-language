#include <stdio.h>

int main() {
    int score;
    char grade;
    
    printf("Enter your score: ");
    scanf("%d", &score);


  if (score >= 80) 
  {
        grade = 'A';
  }
  else if (score >= 70) 
  {
        grade = 'B';
  }
  else if (score >= 60)
   {
        grade = 'C';
   }
  else if (score >= 50)
   {
        grade = 'D';
   }

   else
    {
        grade = 'F';
    }

    switch(grade){
    	case 'A':
    		      printf("Your grade is A. Excellent work!");
    		      break;
    	case 'B':
    		      printf("Your grade is B. Well done.");
    		      break;
		case 'C':
    		      printf("Your grade is C. Good job.");
    		      break;
				  
		case 'D':
    		      printf("Your grade is D. You passed, but you could do better");
    		      break;
	
		case 'F':
    		      printf("Your grade is F. You passed, Sorry, you failed");
    		      break;		  		  		  		  	      
	}
    
}
