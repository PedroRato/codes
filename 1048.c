#include <stdio.h>

int main(){
    float salary;
    scanf("%f", &salary);
    printf("Novo salario: %.2f\n",(salary<=400)?salary*1.15 :(salary<=800)?salary*1.12 :(salary<=1200)?salary*1.1 :(salary<=2000)?salary*1.07 :salary*1.04);
    printf("Reajuste ganho: %.2f\n",(salary<=400)?salary*0.15 :(salary<=800)?salary*0.12 :(salary<=1200)?salary*0.1 :(salary<=2000)?salary*0.07 :salary*0.04);
    printf("Em percentual: %i %%\n",(salary<=400)?15 :(salary<=800)?12 :(salary<=1200)?10 :(salary<=2000)?7 :4);
    return 0;
}
