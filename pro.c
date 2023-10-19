#include <stdio.h>

suma (int a, int b)
{
    
    int res = a + b;

    return res; 
}
    int main (int argc, char const *argv())
{
    int num1;
    int num2;
    int resultado=0;
    printf("Ingrese el numero 1; ");
        scanf("%d", &num1);
            printf("Ingrese el numero2: ");
                scanf("%d", &num2);
    
    resultado= suma(num1,num2);
        
        printf("Resultado %d", resultado);
        
    
    return 0;



}
