#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	   int a = 59;
	   int num;
	   int trial = 0;
	
	  
	   
	   do{
	    
	   printf("Guess a number : ");
	   scanf("%i", &num );
	   trial = trial + 1;
	   if(num < 59){printf("low!\n");
	   }
	   else if(num > 59){
	   printf("high!\n");}
	   else{
	   printf("congratulation!\ntrials : %i\n",trial);
	    }
	   
	   }
	   
	  while(a != num);
	  

	   
	return 0;
}
