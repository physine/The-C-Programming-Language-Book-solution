/* 20/07/2019 */

# include <stdio.h>

int main(){
	printf("Enter:");
	int c;
	//c = getchar();

	while(1){
		if(c == 'q'){
			break;
		}
		c =  getchar();
		if(c == 48){
			printf("1\t%d %c\n", c, (char)c);
		}else if(c == 49){
			printf("0\t%d %c\n",c, (char)c);
		}else{
			printf("other\t%d %c EOF=%d\n",c, (char)c, EOF);
		}
		//printf("%d\n", c);
		printf("-----------------\n");
	}


	//printf("%c",c);
/*
	while(c != EOF){
		printf("%d\n", c);
		c = getchar();
		printf("----\n");
		if(c == 10){
			printf("--10 -- '%c'\n", c);
		}
	}
*/

}
