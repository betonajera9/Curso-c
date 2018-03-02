#include <stdio.h>
#include <stdlib.h>

void paginas(int x){
  int y;
  if((x-9) % 2 == 0){
    y = ((x-9)/2)+9 ;
    printf("%d\n", y);
  }

  else
  puts("\nImposible!!");

}

int main(){
  int dig, y[100], i, n, r;

  puts("Ingresa el numero de digitos que necesitas");

  for( i = 0; i < 100 ; i++){
      scanf("%d", &dig);
      y[i] = dig ;
      if(dig == '#')
      break;
  }

  puts("-------------------------");
  for(int x = 0; x < i; x++){
  n = y[x];
  if(n == '\0')
  break;
  paginas(n);
  }


  return EXIT_SUCCESS;
}
