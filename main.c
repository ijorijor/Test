#include "stdio.h"

main(int arg, char **argv){
char str[200];
int n;

  for(int i=0;i<150;i++)
    printf("%s\n","Hello Word" );

  for(int i=0;i<150;i++)
    printf("%s %d \n","Hello Word",i );

    n=0;
    while (n) {
      printf("Inpun you name:",);
      n=scanf(str,"%s");
    }

}
