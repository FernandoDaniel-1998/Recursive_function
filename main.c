#include <stdio.h>
#include <stdlib.h>

int recursivo(int din, int valor, int numporVales, int numdeVales, int numlivros);

int main(void) {

  int numClientes,din,valor,numporVales;
  int numlivro;

  scanf("%d",&numClientes);

  for(int i=0; i < numClientes; i++){
    scanf("%d %d %d", &din, &valor, &numporVales);
    numlivro = recursivo(din, valor, numporVales,0,0);
    printf ("%d\n",numlivro);
  }

  return 0;
}

int recursivo(int din, int valor, int numporVales, int numdeVales, int numlivros){
  int aux = numdeVales;

  if(din>0){
    numlivros = din/valor;
    numdeVales = numlivros;
    din=0;
  } else {
    numdeVales = (int) (numdeVales/numporVales);
    }

  if(numdeVales < numporVales){

    int auxVale = aux/numporVales;
    numlivros += auxVale;
    return numlivros;

    } else {

      int auxVale = aux/numporVales;
      numlivros += auxVale;
      return recursivo(din,valor,numporVales,numdeVales,numlivros);
    }

}