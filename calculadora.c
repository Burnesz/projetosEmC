#include <stdio.h>

int soma(int x,int y){
    return (x+y);
}
int sub(int x,int y){
    return (x-y);
}
int mult(int x,int y){
    return (x*y);
}
float divis(float x,float y){
    return (x/y);
}
void menu(){
    printf("\n1-SOMAR\n");
    printf("2-SUBTRAIR\n");
    printf("3-MULTIPLICAR\n");
    printf("4-DIVIDIR\n");
    printf("5-SAIR\n");
    return;
}

int main()
{
    int op,x,y;
    
    do{
        system("cls");
        printf("Digite um numero: ");
        scanf("%d", &x);
        
        printf("Digite outro numero: ");
        scanf("%d", &y);

        menu();

        printf("\nQual a operacao matematica? ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("O resultado é: %d\n", soma(x,y));
            break;

        case 2:
            printf("O resultado é: %d\n", sub(x,y));
            break;
            
        case 3:
            printf("O resultado é: %d\n", mult(x,y));
            break;

        case 4:
            printf("O resultado é: %.2f\n", divis(x,y));
            break;
        case 5:
            break;
        
        default:
            printf("Opcao invalida!");
            break;
        }
        system("PAUSE");
    }while(op!=5);
}