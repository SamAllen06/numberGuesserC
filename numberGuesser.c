//numberGuesser in C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randNumGen(){
	srand(time(NULL));
	int randomNum = rand() % 100 + 1;
	return randomNum;
}

int main(){
	int true = -1;
	int false = 0;
	int answer = randNumGen();
	int guess = 500;
	int attempts = 0;
	char userName[20];
	printf("%d \n", answer);
	
	printf("Greetings! What's thy nameth? ");
	scanf("%s", userName);
	printf("Welcome, %s! \n", userName);
	printf("In this game, I shall cometh up with a random numb'r from 1 to 100. Thou shalt tryeth to guesseth t and I'll giveth thee helpful hints 'long the way! \n");
	return 0;

}
