#include <stdio.h>

int mcd(int a, int b){
  int i;
  do{
    i = b;
    b = a % b;
    a = i;
  }while (b != 0);

  return i;
}

void mcm(int a, int b){
  int i;
  i = (a/mcd(a,b))*b;
  printf("El minimo comun multiplo de %d y %d es: %d \n", a, b, i);
}


int main()
{
  int x, y, a, b;
  puts("Ingresa dos numeros: ");
  scanf("%d%d", &a,&b);

  if(a >= b){
    x = a;
    y = b;
  }
  else{
    x = b;
    y = a;
  }

  mcm(x,y);


    return 1;
}
