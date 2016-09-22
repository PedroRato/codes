#include <stdio.h>

void troca(int* v1, int* v2){
   int aux = *v2;
   *v2 = *v1;
   *v1 = aux;
}

int main(){
   int a,b,c;
   scanf("%i %i %i", &a, &b, &c);
   int aI = a, bI = b, cI = c;
   if(a > c)
      troca(&a,&c);
   if(b > c)
      troca(&b,&c);
   if(a > b)
      troca(&a,&b);
   printf("%i\n%i\n%i\n", a, b, c);
   printf("\n%i\n%i\n%i\n", aI, bI, cI);
}
