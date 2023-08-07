/*
* GETCHAR() DEMO
* A small program looking at the getchar() function
* from stdio.h. This uses getchar() to read one char 
* at a time from stdin to the char array sentence. 
* Then uses puts() to display the string to stdout.
*/

#include <stdio.h>

#define SIZE 80

int main(void) {

	int c = 0;
	char sentence[SIZE] = "";
	int i = 0;

	puts("Enter a line of text: ");

	// the second condition saves getchar() input to var c 
	// then checks to see if it is '\n'. Sentence increments
	// i and saves the value of c to that index.
	while ((i < SIZE - 1) && (c = getchar()) != '\n') {
		sentence[i++] = c;
	}

	sentence[i] = '\0'; // null terminator to prevent overflow.

	puts("\nThe line entered was: ");
	puts(sentence);

	return 0;
}