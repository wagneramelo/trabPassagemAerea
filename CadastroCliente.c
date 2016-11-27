#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
#include <locale.h>


int main() {
char cliente [30][40], endereco[30][40];
char email[30][40], cartao[30][40];
int cadastrar, op, excluir, modificar;
int sair, tele [30], cpf[30], rg[30], idade[30];
int cont=1, aux, x, apagar, mod, vis;
aux=0;
sair=2;
while(sair==2){
    system("cls");
    printf("\t\t%c-----------------------------------------------%c", 201, 187);
    printf("\n\t\t  |  Reserva de Passagens - Black Airlines  |\n");
    printf("\t\t%c-----------------------------------------------%c\n\n", 200, 188);
    printf("1-Cadastrar\n");
    printf("2-Consultar precos, horarios e rotas\n");
    printf("3-Consultar vagas disponiveis\n");
    printf("4-Comprar passagem\n");
    printf("5-Cancelar reserva\n");
    printf("6-Sair\n\n");

    printf("Digite uma opcao: ");
    scanf("%d", &op);
    switch (op) {
case 1:
    system ("cls");
    printf("Quantas reservas voce deseja fazer?");
    scanf("%d", &cadastrar);
    for(cont=0;cont<cadastrar;cont++){
        printf("\nDigite o nome do passageiro: ");
        fflush(stdin);
        scanf("%[^\n]s", &cliente[aux]);
        printf("Digite a idade do passageiro: ");
        fflush(stdin);
        scanf("%d", &idade[aux]);
        printf("Digite o endereco: ");
        fflush(stdin);
        scanf("%[^\n]s", &endereco[aux]);
        printf("Digite o telefone do passageiro: ");
        fflush(stdin);
        scanf("%d", &tele[aux]);
        printf("Digite o CPF do passageiro: ");
        fflush(stdin);
        scanf("%d", &cpf[aux]);

        printf("Digite o RG do passageiro (somente numeros): ");
        fflush(stdin);
        scanf("%d", &rg[aux]);

        printf("Digite o email do passageiro: ");
        fflush(stdin);
        scanf("%[^\n]s", &email[aux]);

        printf("Digite o número do cartao de credito para pagamento: ");
        fflush(stdin);
        scanf("%d[^\n]s", &cartao[aux]);
        aux++;
        system("pause");



    }



    }











}















}

