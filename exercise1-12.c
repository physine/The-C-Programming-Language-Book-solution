# include <stdio.h>

#define IN 1
#define OUT 0

int main(){

	int c, state;
	int firstChar = 1;
	//state = IN;

	while((c = getchar()) != EOF){

		if(firstChar == 1){
			firstChar = 0;
			if(c == ' ' || c == '\n' || c == '\t'){
				state = OUT;
			}else{
				putchar(c);
				state = IN;
			}
		}
		else{
			if(c == ' ' || c == '\n' || c == '\t'){
				state = OUT;
			}
			else{
				if(state == OUT){
					putchar('\n');
					putchar(c);
					state = IN;
				}
				else{
					putchar(c);
				}
			}
		}
	}
}
