#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL)); // set seed for random number.
	
	int minRange;
	int maxRange;
	int answer;
	int guess;
	int guessNr;
	const int MAX_GUESSES = 8;

	printf("!!GUESS THE NUMBER GAME!!\n");
	
	// choose lowest and highest ranges from input user
	printf("Choose lowest number:");
	scanf("%d", &minRange);
	printf("Choose highest number:");
	scanf("%d", &maxRange);
	maxRange = maxRange + minRange;

	// set answer
	answer = rand() % (maxRange - minRange) + minRange;
	printf("Guess a number between %d and %d\n", minRange, (maxRange - 1));

	// compare user guess with answer
	for(guessNr = 0; guessNr < MAX_GUESSES; guessNr++){
		printf("Number of guess left %d.. ", MAX_GUESSES - guessNr);
		scanf("%d",&guess);
		if(guess < answer){
			printf("Guess is too low\n");
		}else if(guess > answer){
			printf("Guess is too high\n");
		}else if(guess == answer){
			printf("Correct!!\n");
			exit(1);
		}
	}
	printf("Game over!! Answer: %d\n", answer);
	
	return 0;
	
}
