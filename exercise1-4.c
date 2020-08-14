/* 20/07/2019 */

# include <stdio.h>

int main(){
	float far;
	int lowerCel, upperCel, step;

	lowerCel = 0;
	upperCel = 100;
	step = 10;

	printf("\ncelsius\tfahr\n----------------\n");
	while(lowerCel <= upperCel){
		far = (lowerCel * 9/5) + 32;

		printf("%3.0d\t%6.1f\n", lowerCel, far);

		lowerCel += step;
	}
}
