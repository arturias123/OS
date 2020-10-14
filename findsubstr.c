#include <stdio.h>
#include <string.h>
#include "findsubstr.h"

int find_sub_string(const char *str, const char *sub) {
	char *check = strstr(str, sub);
	if (check != NULL) {
		return strlen(str) - strlen(check);
	}
	return -1;
}