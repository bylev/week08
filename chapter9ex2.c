#include <stdio.h>
#include <string.h>

//my variables//
void compare (char string1 [100], char string2[100])

{ //using if to know if it is false or true//
	if (strcmp(string1, string2)==0){
		
		 printf("true");

	}
else {
	  printf ("false");

}

}


 int main () 
 { //here i'm comparing, putting in proof my code//
  char string1 [100];
	char string2 [100];

	printf("Enter string1\n: ");
	fgets(string1, sizeof(string1), stdin);
	sscanf(string1, "%s", string1);


	printf("Enter string2\n:  ");
	 fgets(string2, sizeof(string2), stdin);
	 sscanf(string2, "%s", string2);

	compare (string1, string2);
 
return 0;

 }


