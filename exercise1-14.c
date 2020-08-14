# include <stdio.h>

int main(void){

	int arr[127];
	int c;

	for(int index=0; index<127; index++)
		arr[index] = 0;

	while((c = getchar()) != EOF){
		++arr[c];
	}

	printf("\n\n\n|------------|\n");
	printf("| HORIZONTAL |\n");
	printf("|------------|\n\n");
	for(int index=0; index<127; index++){
		if((arr[index]!=0) && (index!=10) && (index!=32) && (index!=9)){
			printf(" %c\t", (char)index);
			for(int freq=0; freq<arr[index]; freq++)
				printf("+");
			printf("\n");
		}
	}

	printf("\n\n|------------|\n");
	printf("|  VERTICAL  |\n");
	printf("|------------|\n\n");

	int max = 0;
	int notZeros = 0;
	for(int index=0; index<127; index++)
		if(max < arr[index])
			max = arr[index];
	//printf("max=%d\n\n", max);

	for(int tempMax=max; tempMax>0; tempMax--){
		for(int index=97; index<123; index++){

			if(arr[index] >= tempMax){
				printf(" +");
			}
			else{
				printf("");
			}
			if(index==122){
				printf("\n");
			}
		}
	}

	printf(" ");
	for(int index=97; index<123; index++)
		if(arr[index]!=0)
			printf("--");
	printf("\n");

	for(int index=97; index<123; index++)
		if(arr[index]==0)
			printf("");
		else
			printf(" %c", (char)index);


	printf("\n\n");
}
