# include <stdio.h>

#define IN 1
#define OUT 0

int main(void){

	int c;
	int state;
	int frequancyArr[15];
	int length = 0;
	int firstChar = 1;

	for(int index = 0; index < sizeof(frequancyArr)/sizeof(int); index++)
		frequancyArr[index] = 0;


	while((c = getchar()) != EOF){

		if(firstChar == 1){
			firstChar = 0;
			if(c == ' ' || c == '\n' || c == '\t'){
				state = OUT;
			}
			else{
				state = IN;
			}
		}
		//if(state == IN){
			if(c == ' ' || c == '\n' || c == '\t'){
				state = OUT;
				if(length >= 14){
					++frequancyArr[14];
					length = 0;
				}
				else{
					++frequancyArr[length];
					length = 0;
				}
			}
			else{
				++length;
			}
		//}
	}

	printf("\n\n\n|------------|\n");
	printf("| HORIZONTAL |\n");
	printf("|------------|\n");

	for(int index = 1; index < sizeof(frequancyArr)/sizeof(int); index++){
		if(index <= 13){
			printf("| %d\t", index);
			for(int freq = 0; freq < frequancyArr[index]; freq++)
				printf("+");
			printf("\n");
		}
		else{
			printf("| >=%d\t", index);
			for(int freq = 0; freq < frequancyArr[index]; freq++)
				printf("+");
			printf("\n");
		}
	}

	printf("\n\n\n|------------|\n");
	printf("|  VERTICAL  |\n");
	printf("|------------|\n");

	int largestIndex = -1;
	for(int index = 1; index < sizeof(frequancyArr)/sizeof(int); index++){
		//printf(" ");
		if(largestIndex < frequancyArr[index]){
			largestIndex = index;
			for(int y = 1; y < ; y++)

		}
	}
}



