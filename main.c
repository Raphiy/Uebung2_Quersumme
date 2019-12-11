/*
 * main.c
 *
 *  Created on: 24.10.2019
 *      Author: Froemberg Raphael
 */

#include <stdio.h>

int quersumme(int z);

int main () {
	setvbuf(stdout, NULL, _IONBF,0);
	int eingabe, flag;

	flag = 1;


	while(flag) {
		printf ("Bitte Zahl eingeben: ");
		scanf ("%d", &eingabe);
		if(eingabe == 0) {
			flag = 0;
		}
		else {
			printf("Die Quersumme der eingegebenen Zahl ist: %d\n", quersumme(eingabe));
		}
	}
return (0);
}


int quersumme(int z){
	int sum = 0;
	while(z>0){
		sum += z % 10;
		z /= 10;
	}
	return sum;
}
