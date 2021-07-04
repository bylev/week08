
#include <stdio.h>

int high(int values[100]) {
	int high;      
	int i;             

	high = 0;

	for (i = 0; i < sizeof(100); ++i) {
		      if (values[i] > high) {
			          high = values[i];
		}
	}

	return high;
}

int main(void) {
	int values[] = {10,20};

	      printf("Result: %d\n", high(values));
	               return(0);
}

