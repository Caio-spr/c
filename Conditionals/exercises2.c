/*
 * exercises2.c
 *
 *  Created on: 5 de ago de 2021
 *      Author: caio
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "");
//	*make a program capable of reading 3 float values, calculating the average
//	*if the average is greater than 7, print "aproved", else print "kkkkkkkkkkkk se fudeu"

	float a,b,c,res;
	printf("tell me 3 values\n");
	scanf("%f %f %f",&a,&b,&c);

	res = (a+b+c)/3;

	if ( (res >= 7) && (res > 6) || (res == 10)){
		printf("your average was %f, aproved", res);
	}else{
		printf("your average was %f, i'm sorry", res);
	}




//	*create an algorythm that reads 3 values and inform if they are equal between themselves

	float a,b,c;

	printf("give me three values and ill say if they are equal");

	printf("\nvalue 1:");
	scanf("%f",&a);

	printf("\nvalue 2:");
	scanf("%f",&b);

	printf("\nvalue 3:");
	scanf("%f",&c);

	float d=3,e=6,f=6;

	if(a == b && b == c){
		printf("Yes");
	}else{
		printf("No");
	}




//	Create an algorythm that reads (at least) two values;
//	make a menu using switch case that has, at least, 4 options, including, add, subtract, divide and multiply
//	print both inputs and then the result



	int input;
	int ops;
	float res=0;

	printf("how many numbers will you use?:");
	scanf("%d",&input);

	while(input<2){
		printf("error, you need to use at least 2 numbers, please try again\n");
		scanf("%d",&input);
		break;
	}

	int num[input];
	printf("Write %d integers\n",input);


	for (int i = 0; i < input; i++){
		scanf("%d",&num[i]);
	}
	for (int i = 0;i < input;i++){
		printf("%d, ",num[i]);

	}




	printf("\nwhat operation do you want to do?\n 1- plus\n 2- minus \n 3- divide \n 4- times\n");
	scanf("%d",&ops);
	res=0;
	switch(ops){

		case 1: //plus

			for(int i = 0; i < input; i++){
				if(i==0){
					res=num[0];
				}
				res+=num[i];
			}
			printf(".2%f",res);
			break;



		case 2: //minus

			for(int i = 0; i < input; i++){
				if(i==0){
					res=num[0];
				}
				res-=num[i];
			}
			printf(".2%f",res);
			break;



		case 3: //division

			//this will make the user rewrite the initial inputs if there is a diferent quantity of numbers than 2

			while(input != 2){
				printf("invalid, division op. accepts only 2 numbers");
				scanf("%d",&input);
				if(input = 2){
					printf("Write %d integers\n",input);

					for (int i = 0; i < input; i++){
						scanf("%d",&num[i]);
					}
				}
			}

			//this part will do the actual calculation

			res=num[0]/num[1];
			printf(".2%f",res);
			break;



		case 4://times

			for(int i =0; i < input; i++){
				if(i==0){
				res=num[0];
			}
				res=res*num[i];
			}
			printf("%f",res);
			break;


		default://another "ops" value
			printf("error, invalid number\n");
			break;
	}

}




