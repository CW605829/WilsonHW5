// that the user inputs into the command line argument
// example invocation ./helloworld 5 prints Hello World 5 times

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  int amount = atoi(argv[1]);
  printf("You want to write Hello World %d times\n", amount);  
	for(int i;i < amount; i++){
    printf("Hello World\n");
  }
  return 0;
}
