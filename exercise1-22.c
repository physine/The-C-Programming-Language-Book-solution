# include <stdio.h>

int gettline(void);

char line[1000];

int main(void){

	int spaceRemaining = 40;
	int currnetLine[40];
	int word[25];
	int len;

	while((len = gettline()) > 0){
		for(int index=0; lineindex!=' ' )
	}	

}

int gettline(void){
	extern char line[];

	int index, c;
	for(index=0; index<999
				&& (c = getchar()) != EOF && c != '\n'; ++index){
		line[index] = c;
	}
	if(c == '\n'){
		line[index] = c;
		++index;
	}
	line[index] = '\0';
	return index;
}
