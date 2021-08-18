/*
 * countdown.c
 *
 *  Created on: 7 de ago de 2021
 *      Author: caio
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>


_Bool isPrime(int x){
	for(int i = 2; i<x; i++){

		if((x % i) == 0){
			return false;
		}
	}
	return true;
}


int main(){
	setlocale(LC_ALL,"");



//	//pares de 10 a 20 com for, do while e while
//	for(int i = 10; i >= 0; i--){
//		printf("\n%d", i);
//	}
//
//	printf("\n");
//
//	int j = 10;
//	do{
//		printf("\n%d", j);
//		j--;
//	}while(j>=0);
//
//	printf("\n");
//
//	int k=10;
//	while(k>=0){
//		printf("\n%d", k);
//		k--;
//	}
//
//	printf("\n");
//	int a=10;
//	while(a<=20){
//		printf("\n%d",a);
//		a+=2;
//	}
//
//
//	printf("\n");
//	a=10;
//	do{
//		printf("\n%d",a);
//		a+=2;
//	}while(a<=20);
//
//	printf("\n");
//	for(a=10;a<=20;a+=2){
//		printf("\n%d",a);
//	}










	//is it a prime number hmmm???
	int input;

	printf("HELLO, give me a number and ill say if its prime\n");
	scanf("%d",&input);

	if(isPrime(input)){
		printf("is prime");
	}else{
		printf("is not prime");
	}







}




