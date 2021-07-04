#include <stdio.h>

int array_p(char chars[100]){


 int i;
 int p = 0;



  for (i=0; i < sizeof(100); ++i){

        p+= chars[i];
	} 


	return (p);

}


int main (){
char char_array[100] ={'A','B','c','r'};
   



  printf("Result: %d\n", array_p(char_array));
	return(0);


}
