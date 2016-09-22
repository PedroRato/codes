#include <stdio.h>
#include <math.h>

void troca(float* v1, float* v2){
   float aux = *v2;
   *v2 = *v1;
   *v1 = aux;
}

int main(){
   float a,b,c;
   scanf("%f %f %f", &a, &b, &c);
   if(a < c)
      troca(&a,&c);
   if(b < c)
      troca(&b,&c);
   if(a < b)
      troca(&a,&b);

   if(a >= (b+c)){
      printf("NAO FORMA TRIANGULO\n");
      return 0;
   }
   if(pow(a,2) == ((pow(b,2) + pow(c,2))))
      printf("TRIANGULO RETANGULO\n");

   if(pow(a,2) < ((pow(b,2) + pow(c,2))))
      printf("TRIANGULO ACUTANGULO\n");
   else if(pow(a,2) > ((pow(b,2) + pow(c,2))))
      printf("TRIANGULO OBTUSANGULO\n");

   if(a == b && b == c)
      printf("TRIANGULO EQUILATERO\n");
   else if((a==b) || (b==c) || (c==a))
      printf("TRIANGULO ISOSCELES\n");
   return 0;
}
