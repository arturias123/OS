#include <stdio.h>
#include <stdlib.h>
#include "readline.h"
#include "findsubstr.h"
#pragma warning(disable:4996)



int main(int argc, char* argv[]) {
	char* inp;
	inp = (char*)malloc(100 * sizeof(char));
	char inp1[100];
	printf("Enter the input string: ");
	scanf("%s", inp1);
	fflush(stdin);
	inp = inp1;
	printf("The input string: %s", inp);
	fflush(stdin);
	printf("\n");
	getchar();
	char* str;
	str = (char*)malloc(100 * sizeof(char));
	int stop = read_line(str);
	printf("%d\n", stop);
}
