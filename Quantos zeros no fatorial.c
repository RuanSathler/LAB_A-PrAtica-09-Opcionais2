#include<stdio.h>

int LerInt(){
  int Num;
  scanf("%d", &Num);

  return Num;
}

int main(){
  int num, cont = 5, qntzeros;

  num = LerInt();

  while(cont<=num){
    qntzeros += num/cont;
    cont *= 5;
  }

  printf("%d \n", qntzeros); 
  
  return 0;  
}
