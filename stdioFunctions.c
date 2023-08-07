/*
* STDIO FUNCTIONS
* 
* Just some demos of the functions found in the C stdlib.
* This demo reverses strings.
* 
*/

#include <stdio.h>

#define SIZE 80


/*
* USER INPUT
* Takes input from stdin.
* Returns const char*
*/

void getInput( char* str, int size) {
	
	//char sentence = str;
	puts("Enter a line of text: ");
	fgets(str, size, stdin);
	
}

/*
* REVERSE STRING
* Takes a string and reverses the character order.
* Outputs to stdin 
*/

void reverse(const char* const pStr) {
	
	if ('\0' == pStr[0] ) {
		return;
	}
	else {
		reverse(&pStr[1]); // recursion step that winds up the callstack
		putchar(pStr[0]); // puts char to stdin once base case reached
	}
	
}

/* ****** MAIN *******/

int main(void) {

	char sentence[SIZE] = "";
	
	getInput(sentence, SIZE);
		
	printf("\n%s", "The line printed backward is: ");
	reverse(sentence);
	
	puts("");

	return 0;
}

