#include <stdio.h>
#include <stdlib.h>

/*
===============
Soma 

    Essa função pede para o usuário colocar valores de duas variaveis( valor1 e valor2). A variavel (result) ira somar
    as duas variaveis que o usuário digitou e armazenar em si mesmo. E por fim irá imprimir o resultado na tela e chamará
    o menu novamente para que o usuário possa fazer uma nova operação ou apenas sair do programa.
*/

void Soma ( void ) { //funcao Soma
    float valor1, valor2, result; //variaveis
    printf("\nDigite o 1 valor: "); //pede um valor
    scanf ("%f", &valor1); //armazena o valor
    printf("Digite o 2 valor: "); //pede outro valor
    scanf ("%f", &valor2); //armazena o valor
    result = ( valor1 + valor2 ); //soma valor1 com valor 2 e coloca em result
    printf("\nResultado: %.2f\n", result); //mostra o resultado
    Menu(); //chama o menu novamente
}

/*
===============
Subtrair

    Essa função pede para o usuário colocar valores de duas variaveis( valor1 e valor2). A variavel (result) ira subtrair
    as duas variaveis que o usuário digitou e armazenar em si mesmo. E por fim irá imprimir o resultado na tela e chamará
    o menu novamente para que o usuário possa fazer uma nova operação ou apenas sair do programa.
*/
void Subtrai( void ) { 
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1); 
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = ( valor1 - valor2 );
    printf("\nResultado: %.2f\n", result);
    Menu();
}

/*
===============
Divide

    Essa função pede para o usuário colocar valores de duas variaveis( valor1 e valor2). A variavel (result) ira dividir
    as duas variaveis que o usuário digitou e armazenar em si mesmo. E por fim irá imprimir o resultado na tela e chamará
    o menu novamente para que o usuário possa fazer uma nova operação ou apenas sair do programa.
*/
void Divide( void ) {
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = ( valor1 / valor2 );
    printf("\nResultado: %.2f\n", result);
    Menu();
}

/*
===============
Multiplica 

    Essa função pede para o usuário colocar valores de duas variaveis( valor1 e valor2). A variavel (result) ira multiplicar
    as duas variaveis que o usuário digitou e armazenar em si mesmo. E por fim irá imprimir o resultado na tela e chamará
    o menu novamente para que o usuário possa fazer uma nova operação ou apenas sair do programa.
*/
void Multiplica( void ) { //funcao multiplica
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = ( valor1 * valor2 );
    printf("\nResultado: %.2f\n", result);
    Menu();
}
/*
===============
Menu 

    Irá imprimir um menu para que o usuário possa decidir a operação que deseja realizar
*/

void Menu( void ){
    int escolha;

    printf("\n\n Bem vindo a calculadora em C\n\n"); 

    printf("Selecione uma operacao matematica:\n"); 
    printf("\t1- Adicao\n");
    printf("\t2- Subtracao\n");
    printf("\t3- Divisao\n");
    printf("\t4- Multiplicacao\n");
    printf("\t5- Sair\n");
    printf("Operacao: "); 
    scanf ("%d", &escolha); 

    switch (escolha){ 
        case 1: 
            Soma();
        break; 

        case 2:
            Subtrai();
        break;

        case 3:
            Divide();
        break;

        case 4:
            Multiplica();
            break;

        case 5: //caso selecionado 5 executa:
            system("exit"); // fechar o programa
            printf("\nFinalizando...\n"); //da uma msg na tela
        break; // termina a funcao 5 selecionada

        default: // caso nao se digite nenhum do case disponiveis execute:
            printf("\nComando invalido, tente novamente!\n"); //msg
            Menu(); //volta pro menu inicial
            break; //termina funcao
    }
}


int main( void ) //funcao principal
{
    Menu(); //chama o menu
    return 0; //retorna que esta tudo OK

}