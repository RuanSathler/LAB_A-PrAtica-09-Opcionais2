#include<stdio.h>

int LerInt(){
  int Num;
  scanf("%d", &Num);

  return Num;
}

int HePotencialDivisor(int Num, int possivelDivisor){
  if((possivelDivisor*possivelDivisor)<=Num) return 1;
  else return 0;
  
}

int hePrimo(int numcandidato){
  int proxTeste = 1, possivelDivisor = 2, hePrimo = 1;

  while(proxTeste){

    if(numcandidato==2){
      hePrimo = 1;
      break;
    }
    
    if(HePotencialDivisor(numcandidato, possivelDivisor)){
      if(numcandidato%possivelDivisor==0){
        proxTeste = 0;
        hePrimo =0;        
      }
    }
    else proxTeste = 0;

    if(possivelDivisor==2) possivelDivisor += 1;
    else possivelDivisor += 2;
  }

  return hePrimo;  
}

void decompoe(int fatorial){
  int cont;

  printf("%d: ", fatorial);
  
  for(cont=2; cont<=fatorial;){
   
    if(hePrimo(cont)){
      while((fatorial%cont)==0){
        fatorial /= cont;
        printf("%d ", cont);
      }

    }
    if(cont==2) cont += 1;
    else cont += 2;
  }
}
  

int main(){
  int num;

  while(num = LerInt(), num!=0){
    if(hePrimo(num) || num==1) printf("%d: %d\n", num, num);
    else decompoe(num);
    putchar('\n');
  }

  return 0;  
}
