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

void ContaPotencias(int fatorial){
  int cont, base, qntPotencia = 0;

  for(cont=2; cont<=fatorial;){
   
    if(hePrimo(cont)){
      base = cont;
      
      while(base<=fatorial){
        qntPotencia += fatorial/base;
        base *= cont;
      }

      printf("%d ", qntPotencia);
      qntPotencia = 0;
    }
    if(cont==2) cont += 1;
    else cont += 2;
  }
}
  

int main(){
  int num;

  num = LerInt();

  if(num==2 || num==1) printf("1\n");
  else ContaPotencias(num);

  return 0;  
}
