#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
#include <locale.h>

void comprar(char cliente[][]){
  char destino[20];
  int voo[6], opcao;
  printf("Deseja comprar passagem para onde(Sao Paulo, Curitiba ou Rio de Janeiro): \n");
  scanf("%s\n",destino);
  if(destino =='Sao Paulo'){
    printf("Horarios:\n");
        printf("1-14:00 = 200,00 reais\n");
        printf("2-20:00 = 250,00 reais\n");
        system("pause");
        printf("Qual horário deseja:");
        scanf("%d\n"&opcao);
          if(opcao==1){
            voo[0] = cliente;
          }
          if(opcao==2){
              voo[1] = cliente;
            }
  }

  else if(destino == 'Curitiba'){
    printf("Horarios:\n");
       printf("1-13:00 = 300,00 reais\n");
       printf("2-19:00 = 350,00 reais\n");
       system("pause");
      printf("Qual horário deseja:");
       scanf("%d\n"&opcao);
         if(opcao==1){
           voo[2] = cliente;
         }
         if(opcao==2){
             voo[3] = cliente;
           }

  }

  else if(destino == 'Rio de Janeiro'){
    printf("Horarios:\n");
    printf("1-12:00 = 300,00 reais\n");
    printf("2-18:00 = 250,00 reais\n");
         system("pause");
    printf("Qual horário deseja:");
     scanf("%d\n"&opcao);
       if(opcao==1){
         voo[4] = cliente;
       }
       if(opcao==2){
           voo[5] = cliente;
         }
  }
  else{
    printf("Não foi encontrado.\n");
  }

}

case 2:

  system("cls");
    printf("\t\t%c-----------------------------------------------%c", 201, 187);
    printf("\n\t\t  |  Consulta de voos - Black Airlines  |\n");
    printf("\t\t%c-----------------------------------------------%c\n\n", 200, 188);
    printf("1-Belo horizonte >> Sao paulo \n");
    printf("2-Belo horizonte >> Curitiba\n");
    printf("3-Belo horizonte >> Rio de Janeiro\n");
    scanf("%d", &voo);
    while (voo=1){
    printf("Horarios:\n");
    printf("14:00 = 200,00 reais\n");
    printf("20:00 = 250,00 reais\n");
    system("pause");
    printf("digite 0 para retornar\n");

    }

      while (voo=2){
    printf("Horarios:\n");
    printf("13:00 = 300,00 reais\n");
    printf("19:00 = 350,00 reais\n");
     system("pause");
       printf("digite 0 para retornar\n");
    }
     while (voo=3){
    printf("Horarios:\n");
    printf("12:00 = 300,00 reais\n");
    printf("18:00 = 250,00 reais\n");
     system("pause");
       printf("digite 0 para retornar\n");
    }
    }

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

        printf("Digite o n�mero do cartao de credito para pagamento: ");
        fflush(stdin);
        scanf("%d[^\n]s", &cartao[aux]);
        aux++;
        system("pause");



    }



    }











}















}
