#include <stdio.h>
#include <stdlib.h>
#include "readline.h"
#include "findsubstr.h"


int main (int argc, char *argv[]) {
	char *inp;
	inp = (char*) malloc(100 * sizeof(char));
	char inp1[100];
	printf("Enter the input string: ");
	scanf("%s", inp1);
	inp = inp1;
	printf("The input string: %s\n", inp);
	char *str;
	str = (char*) malloc(100 * sizeof(char));
	int stop = read_line(str);
	printf("%d\n", stop);
}
