#include <stdio.h>

void replace(char arr[100]) {
	int i;         

	for (i = 0; i < sizeof(100); ++i) {
		if (arr[i] == '-') {
		arr[i] = '_';
		}
	}
}

int main(void) {
	int i;        

	char chars[] = { '-',  '_', 'b','u','t','t','e','r'};
	replace(chars);

	for (i = 0; i < sizeof(chars); ++i) {
		printf("%c\n", chars[i]);
	}

	return(0);
}
