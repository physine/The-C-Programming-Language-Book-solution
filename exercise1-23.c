# include <stdio.h>

int main(void){
	int len, c;

	int exitingMulti = 0;
	int multiLine  	 = 0;
	int singleLine 	 = 0;

	/*	
		OUT
		-- out comment and not entering 	 		(multiLine==0 && singleLine==0) && c!='/'					print c

		POSSIBLY ENTERING
		-- out comment and possinly entering 	 	(multiLine==0 && singleLine==0) && c=='/'					set multiLine=1 and singleLine=1
		-- out comment and entering singleLine		(multiLine==1 && singleLine==1) && c=='/'					set multiLine=0 and singleLine=2	
		-- out comment and entering multiLine		(multiLine==1 && singleLine==1) && c=='*'					set multiLine=2 and singleLine1	
		-- out comment and not entering 			(multiLine==1 || singleLine==1) && (c!='/' || c!='*') 		set multiLine=0 and singleLine=0 and print / and c

		IN
		-- in singleLine comment and exiting 	 	(multiLine==0 && singleLine==2) && c=='\n' 					set singleLine=0 and print the '\n' 

		-- in multiLine comment possibly exiting 	(multiLine==2 && singleLine==0) && exitingMulti=0 && c=='*' set exitingMulti=1
		-- in multiLine comment exiting 			exitingMulti=1 && c=='/' 									set exitingMulti=0 and multiLine=0
		-- in multiLine comment and not exiting 	exitingMulti=1 && c!='/'									set exitingMulti=0 

	*/

	while((c = getchar()) != EOF){
		// hello
		if((multiLine==0 && singleLine==0) && c!='/'){
			putchar(c);
			//printf("multiLine=%d singleLine=%d c=%c exitingMulti=%d\n", multiLine, singleLine, c, exitingMulti);
		}
		else if((multiLine==0 && singleLine==0) && c=='/'){
			multiLine  = 1;
			singleLine = 1;
		}
		else if((multiLine==1 && singleLine==1) && c=='/'){
			multiLine  = 0;
			singleLine = 2;
		}
		else if((multiLine==1 && singleLine==1) && c=='*'){
			multiLine  = 2;
			singleLine = 0;
		}
		else if((multiLine==1 || singleLine==1) && (c!='/' || c!='*')){
			multiLine  = 0;
			singleLine = 0;
			putchar('/');
			putchar(c);
		}
		else if(singleLine==2 && c=='\n'){
			singleLine = 0;
			putchar('\n');
		}
		else if(multiLine==2 && exitingMulti==0 && c=='*'){
			exitingMulti = 1;
		}
		else if(exitingMulti==1 && c=='/'){
			exitingMulti = 0;
			multiLine 	 = 0;
		}
		else if(exitingMulti==1 && c!='/'){
			exitingMulti = 0;
		}
	}
}
