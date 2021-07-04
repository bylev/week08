#include <stdio.h>
#include <string.h>

//asking for a string and then it will tell you how it is its length//
int length(char string[]) {
	int index;          

for (index = 0; string[index] != '\0'; ++index) {

	}
	return(index);






}





int main() {
	char line[100];
        	while (1) {
	         printf("Enter line:");
		fgets(line, sizeof(line), stdin);
		printf("Length is (including a space): %d\n", length(line));
	}
}