//numberGuesser in C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE -1
#define FALSE 0

int randNumGen(){
	srand(time(NULL));
	int randomNum = rand() % 100 + 1;
	return randomNum;
}

int main(){
	int answer = randNumGen();
	int guess = 500;
	int attempts = 0;
	char userName[20];
	
	printf("Greetings! What's thy nameth? ");
	scanf("%s", userName);
	printf("Welcome, %s! \n", userName);
	printf("In this game, I shall cometh up with a random numb'r from 1 to 100. Thou shalt tryeth to guesseth t and I'll giveth thee helpful hints 'long the way! \n");
	int keepGoing = TRUE;
	while (keepGoing == TRUE){
		attempts++;
		printf("%d) Guesseth a n'mber: ", attempts);
		scanf("%d", &guess);
		if (guess > 100){
			printf("That's not allowed! We won't count that as an attempt. \n");
			attempts--;
		}
		else if (guess < 0){
			printf("That's not allowed! We won't count that as an attempt. \n");
			attempts--;
		}
		else if (guess > answer){
			printf("That's too high!\n");
		}
		else if (guess < answer){
			printf("That's too low!\n");
		}
		else if (guess == answer){
			printf("You got it!\n");
			keepGoing = FALSE;
			if (attempts < 7){
				printf("Wow, you did amazing!\n");
			}
			else if (attempts == 7){
				printf("Wow... you did average. Try again but use less attempts. \n");
			}
			else if (attempts > 7){
				printf("Ooof, you can do better than that. Try again but use less attempts. \n");
			}
		} 
	}
	return 0;
}
