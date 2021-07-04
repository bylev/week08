#include <stdio.h>

char group[100];
char a[100];
int x;
int count = 0;

int main(void)
{
    
 
    printf("input words:\n");

    fgets(group, sizeof(group), stdin);

    sscanf(group,"%[^\n]a", a);

    
    for (x = 0;   a[x] != '\0';   x++)
    {
      if (a[x] == ' '   &&   a[x+1] != ' ')
      count++;    
    }
    printf("The number of words are %d\n", count+1);
} 