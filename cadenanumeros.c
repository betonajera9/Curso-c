#include <stdio.h>
#include <stdlib.h>

int IsInteger(double a, int b){

  if (a - b == 0) {
    return 0;
  }
  else
    return 1;

}

int main(){
  int x, y, r, a;
  puts("De cuantos valores es tu cadena?");
  scanf("%d",&x);

  double z[x];

  puts("Ingresa tu cadena separada por espacios");

  for (int i = 0; i < x; i++) {
    scanf("%lf",&z[i]);
  }

  a=0;
  for (int i = 0; i < x; i++) {
    int y = (int) z[i];
    r = IsInteger(z[i], y);
      if (r != 0) {
        for (int j = i; j < x; j++) {
          z[i] = z[i+1];
        }
        a++;
      }
  }
  printf("Numero de elementos eliminados: %d\n", a);
  
  puts("Los siguientes numeros son los enteros validos ingresados");
  for (int i = 0; i < x-a; i++) {
    printf("%.0lf\n",z[i]);
  }

  return EXIT_SUCCESS;
}
