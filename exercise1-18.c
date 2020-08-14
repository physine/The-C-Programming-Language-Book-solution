# include <stdio.h>

# define MAXLINE 1000

char line[MAXLINE];

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
void removeTrailingSpace(void){
	/*	we need to find the number of spaces between the first '\0'
	  	and the last char which is not '\t' or ' '.
	  	
	  	Also, if(line[0]=='\n' && line[1]=='\0'){ end with a '\n'
	  	so we need to make sure to not remove it.
	*/
	extern char line[];
	int newLineFlag;

	int nullend; // index of the first '\0' in line[]
	for(nullend=0; line[nullend]!='\0'; ++nullend)
		;//nullend with be the index of the first '\0'

	// in the case of a line with only '\n'
	if(line[0]=='\n' && line[1]=='\0'){
		line[0] = '\0';
	}
	else{
		if(line[nullend-1]=='\n')
			newLineFlag = 1;

		for(int index=nullend-1; 
			line[index]=='\t' || line[index]==' ' || line[index]=='\n'; --index){
			line[index] = '\0';
		}
		if(newLineFlag==1)
			for(nullend=0; line[nullend]!='\0'; ++nullend)
				;
			line[nullend] 	= '\n';
			line[nullend+1] = '\0';
	}
}
int main(void){
	int len, nullend;
	while((len = gettline()) > 0){
		removeTrailingSpace();
		for(nullend=0; line[nullend]!='\0'; ++nullend)
				;
		for(int index=0; index<nullend; ++index){
			printf("%c", line[index]);
		}
	}
}
