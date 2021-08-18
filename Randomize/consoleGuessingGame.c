/*
 * consoleGuessingGame.c
 *
 *  Created on: 7 de ago de 2021
 *      Author: caio
 *
 * guessing game
 * 1. randomize a number
 * 2. talk to the player
 * 3. scanf an input
 * 4. compare the original value to the input
 * 5. talk to the player!!!!!!!!!!!!!!!!!!!!!! ezpz
 * compare the input to
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	char userWantstoPlay;
	printf("do you want to play? y/n \n");
	scanf("%c", &userWantstoPlay);


	while(userWantstoPlay == 'y'){


		//declaring variables
		int r,input;


		//command that set the rand() configuration
		srand((unsigned)time(NULL));

		//variable that recieves the randomized number
		r = rand()%11;

		printf("guess my number\n");

		//scan
		scanf("%d",&input);

		//checking
		if(r == input){
			printf("MAKE \n");
		}else{
			printf("MISS \n");
		}
		userWantstoPlay='d';
		printf("want to play again?");
		scanf("%c", &userWantstoPlay);
	}
}

