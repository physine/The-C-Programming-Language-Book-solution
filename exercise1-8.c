#include <stdio.h>

int main () 
{
    int c,nl = 0, blank = 0, tab = 0; //Newline, blanks and tabs.
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tab;
        else if (c == ' ')
            ++blank;
	}
    printf("\nTabs = %d\nBlanks = %d\nNewLine = %d\n\n",tab, blank, nl);
}
