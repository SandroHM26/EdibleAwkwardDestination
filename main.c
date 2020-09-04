#include <stdio.h>

int main(void) {
  printf("Hola mundo soy Sandro\n");
  int suma = 0;
  while(1){
    if(suma == 10){
      printf("La suma llegó a 10\n");
      break;
    }
    else{
      suma++;
    }
  }
  return 0;
}