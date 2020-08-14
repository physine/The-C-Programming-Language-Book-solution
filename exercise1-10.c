# include <stdio.h>

int main(){

	int c;

	while((c = getchar()) != EOF){

		if(c == '\t' || c == '\n' || c == '\\'){
			if(c == '\t'){
				putchar('\\');
				putchar('t');
			}
			if(c == '\n'){
				putchar('\\');
				putchar('n');
			}
			if(c == '\\'){
				putchar('\\');
				putchar('\\');
			}
		}else{
			putchar(c);
		}
	}
}
