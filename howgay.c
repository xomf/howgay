#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
 
  char buff[512];
  srand((unsigned int)buff);
  printf("You are ");
  printf("%d",rand() % 101);
  printf("%% gay\n");
  
}
