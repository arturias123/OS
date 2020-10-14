#include "readline.h"
#include <stdio.h>
#include <string.h>

int read_line(char *str) {
	int i = 0;
	int sum = 0;
	char realstr[100];
	char c;
	printf("Enter string: ");
	do {
        c = getchar();
        realstr[i] = c;
        i++;
        if (c == '\n') {
        	str = realstr;
            printf("%s", str);
            printf("%d\n", i - 1);
            i = 0;
            str[0] = '\0';
        }
        if (c == EOF) {
        	str = realstr;
            printf("\n%s\n", str);
            printf("%d\n", -1);
        }
    } while (c != EOF && c!= '\n');
}