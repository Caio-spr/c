/*
 * allExercises.c
 *
 *  Created on: 7 de ago de 2021
 *      Author: caio
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>



void CalcMedia(){
	//	Receber duas notas e calcular a média


		float a,b;
		printf("diga dois números e eu te direi a média");
		scanf("%f",&a);
		scanf("%f",&b);
		printf("(%f+%f)/2 = %f", a, b,(a+b)/2);
}

void difMod(){


	//Receber duas notas e demonstrar o módulo da diferença das notas



	float a,b,resModulo;

	printf("\n\nme de duas notas e eu te darei o módulo da diferença (n sei porque)\n");

	printf("Nota 1:");
	scanf("%f",&a);

	printf("Nota 2:");
	scanf("%f",&b);
	resModulo=abs(a-b);

	printf("%f",resModulo);
}


void threeMultiply(){
//ler 3 números de uma só vez, depois multiplicar todos e imprimir


float a,b,c,res;

printf("digite 3 valores\n");
scanf("%f %f %f",&a,&b,&c);
res=a*b*c;
printf("\n%f",res);
}

_Bool isPrime(int x){
	for(int i = 2; i<x; i++){

		if((x % i) == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int a[3],input;
	printf("how many numbers will you save?");
	scanf("%d", &input);


	printf("write some numbers :)\n");
	for (int i = 0; i < 3; i++){
		scanf("%d", &a[i]);
		printf("a[%d] is %d\n", i, a[i]);
	}
}



