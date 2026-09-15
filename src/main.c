// Main File

#include <stdio.h>

int main(int argc, char **argv){
  char buffer[128];

  while(1){
    printf("nerp-shell> ");

    if(fgets(buffer, sizeof(buffer), stdin) == NULL){
      printf("Process ended.\n");
      break;
    }

    printf("Output: %s", buffer);
  }

  return 0;
}
