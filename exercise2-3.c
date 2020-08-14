#include <stdio.h>
#include <stdlib.h>

/*
	hex > ascii > decimal	
*/

int htoi(char[]);

void main(){

	int dec;
	char hex[15];

	printf("Enter hex number to be converteded to decimel. Enter blank line to quit.\n");
	
	scanf("%s", hex);
	while(hex[0] != '\n'){
		dec = htoi(hex);
		printf("\t%d", dec);
		scanf("%s", hex);
	}
}

int htoi(char hex[]){

	int decimel = 0;
	int hexLen;
	char hexNum[15];

	for(int i=0; i<15; ++i){
		hexNum[i] = hex[i];
	}
	putchar('\n');	

	for(int hexLen = 0; hexNum[hexLen] != '\0'; ++hexLen)
		if(hexNum[hexLen] == '\n')
			hexNum[hexLen] = '\0';
		printf("hexLen=%d\n", hexLen);

	hexLen -= 1;

	int loopMultiplier = 1;

	printf("hexLen=%d\n", hexLen);

	for(int i=hexLen; ('0' <= hexNum[i] && '9' >= hexNum[i]) || ('a' <= hexNum[i] && 'z' >= hexNum[i]) 
		|| ('A' <= hexNum[i] && 'Z' >= hexNum[i]); --i){


		if('0' <= hexNum[i] && '9' >= hexNum[i]){
			decimel += hexNum[i] * loopMultiplier;
		}
		else if('a' <= hexNum[i] && 'z' >= hexNum[i]){
			decimel += hexNum[i]-87 * loopMultiplier;
		}
		else  if('A' <= hexNum[i] && 'Z' >= hexNum[i]){
			decimel += hexNum[i]-55 * loopMultiplier;
		}
		else {
			printf("ERROR");
			exit(1);
		}

		loopMultiplier += 16;
	}
	return decimel;
}
