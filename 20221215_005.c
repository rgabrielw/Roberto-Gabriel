#include <stdio.h>

int main() 
{
        float a1 = 0;
        float resultado1 = 0;
        float resultado2 = 0;
        
        printf("Digite o valor do lado do quadrado: ");
        scanf("%f",& a1);
        
        resultado1 = a1*a1;
        resultado2 = resultado1 * 2;
        
        printf("O valor do dobro da area eh: %.1f", resultado2);
        
        return 0;
}
