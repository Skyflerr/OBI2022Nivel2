#include <stdio.h>
#include <stdlib.h>

int segundomaior(int k1, int k2, int k3, int k4){
  int maior,sm;

  maior = k1;
  maior = k2 > maior ? k2 : maior;
  maior = k3 > maior ? k3 : maior;
  maior = k4 > maior ? k4 : maior;
  sm = k1; 
  sm = (k2 > sm && k2 < maior) ? k2 : sm;
  sm = (k3 > sm && k3 < maior) ? k3 : sm;
  sm = (k4 > sm && k4 < maior) ? k4 : sm;

  return sm;
}

int segundomenor(int k1, int k2, int k3, int k4){
  int m,sm;

  m = k1;
  m = k2 < m ? k2 : m;
  m = k3 < m ? k3 : m;
  m = k4 < m ? k4 : m;
  sm = k1;
  sm = (k2 > sm && k2 < segundomaior(k1,k2,k3,k4)) ? k2 : sm;
  sm = (k3 > sm && k3 < segundomaior(k1,k2,k3,k4)) ? k3 : sm;
  sm = (k4 > sm && k4 < segundomaior(k1,k2,k3,k4)) ? k4 : sm;

  return sm;
}

int main(){
  int n1,n2,n3,n4,maior,menor;

  printf("\n 1 jogador : ");
  scanf("%d",&n1);
  printf("\n 2 jogador : ");
  scanf("%d",&n2);
  printf("\n 3 jogador : ");
  scanf("%d",&n3);
  printf("\n 4 jogador : ");
  scanf("%d",&n4);

  maior = n1;
  maior = n2 > maior ? n2 : maior;
  maior = n3 > maior ? n3 : maior;
  maior = n4 > maior ? n4 : maior;

  menor = n1;
  menor = n2 < menor ? n2 : menor;
  menor = n3 < menor ? n3 : menor;
  menor = n4 < menor ? n4 : menor;

  // segundomenor(n1,n2,n3,n4);
  int segmaior = segundomaior(n1,n2,n3,n4);
  int segmenor = segundomenor(n1,n2,n3,n4);

 printf("\n A menor diferença de times e %d ",((maior + menor) - (segmaior + segmenor)));


  return 0;
}
