#include <stdio.h>
#include <stdlib.h>
#include <string.h>
        
    struct Cadastro
      { 
        int  id;
        char nome[100];
        char cpf[15];
        char vacina[50];
        char data[11];
        char lot[100];
      };
   
         int main()
         {
           struct Cadastro cad[1000];
           char buscacpf[15];
           int contador;
           int i;
           int dia;
           int mes;
           int ano;
           int opcao;
           
         
          do{ //*OPÇOES PARA O USUARIO ESCOLHER
              printf("======== MENU PRINCIPAL ========\n");
              printf("=== 1- Cadastrar Vacina ===\n");
              printf("=== 2- Listar Aplicacoes ===\n");
              printf("=== 3- Consultar por CPF ===\n");
              printf("=== 4- Sair\n");
              printf("=== Escolha uma opcao ===\n");
              scanf("%d",&opcao);
              fflush(stdin);
              system("cls");
               
            switch (opcao){
            //*COMEÇO DO CADASTRO 
            case 1:
              printf("Quantos deseja cadastrar?\n");
              scanf("%d",&contador);
              fflush(stdin);
              system("cls");

           for(i=1;i<=contador;i++){
              
              cad[i].id=i;
              printf("=== CODIGO PACIENTE:%d ===\n",cad[i].id);
              printf("=== %d-Digite o nome: ===\n",cad[i].id);
              fgets(cad[i].nome,100,stdin);
              fflush(stdin);
              system("cls");
           
           do{
              printf("=== %d-Digite o CPF: xxx.xxx.xxx-xx ===\n",cad[i].id);
              fgets(cad[i].cpf,15,stdin);
              fflush(stdin);
           //* VALIDA O CPF INSERIDO PELO USUARIO
           
           if(!(strlen(cad[i].cpf) <=14 && strlen(cad[i].cpf) >=13)) printf("=== CPF INVALIDO ===\n");
           }while(!(strlen(cad[i].cpf) <=14 && strlen(cad[i].cpf) >=13));
              system("cls");

              printf("=== %d-Digite a vacina: ===\n",cad[i].id);
              fgets(cad[i].vacina,50,stdin);    
              fflush(stdin);
              system("cls");

           do{
              printf("=== %d-Digite a data: xx/xx/xxxx ===\n",cad[i].id);
              fgets(cad[i].data,11,stdin);
              sscanf(cad[i].data,"%2d/%2d/%4d\n",&dia,&mes,&ano);
              fflush(stdin);
           //* VALIDAR A DATA INSERIDA PELO USUARIO
            
              if (!(dia >= 1 && dia <=31 && mes >= 1 && mes <= 12 && ano <= 2022 && ano >=2020))
              printf("=== Data invalida ===\n");
           }while(!(dia >= 1 && dia <=31 && mes >= 1 && mes <= 12 && ano <= 2022 && ano >=2020));
              system("cls");

              printf("=== %d-Digite o lote: ===\n",cad[i].id);
              fgets(cad[i].lot,100,stdin);
              fflush(stdin);
              system("cls");
             };
            break;
           //*LISTAGEM DE DADOS DOS USUARIOS CADASTRADOS
            case 2:
            for(i=1;i<=contador;i++){
              printf("=== CODIGO PACIENTE:%d ===\n",cad[i].id);
              printf("nome:%s",cad[i].nome);
              printf("cpf:%s\n",cad[i].cpf);
              printf("vacina:%s",cad[i].vacina);
              printf("data:%s\n",cad[i].data);
              printf("lote:%s",cad[i].lot);
              printf("=================================================\n");
            };
            break;
           //*BUSCA PELO CPF DOS USUARIOS CADASTRADOS
            case 3:{
               
               int identificador =0;
              printf("=== INFORME O CPF A BUSCAR ===\n");
              fgets(buscacpf,15,stdin);
              fflush(stdin);
              
             for(i=1;i<=contador;i++) 
                 {
                    if((strcmp(buscacpf, cad[i].cpf)) == 0) 
                    {
                       identificador =1;
                        printf("CPF encontrado\n");
                        printf("Nome: %s", cad[i].nome);
                        printf("CPF: %s\n", cad[i].cpf);
                        printf("Vacina: %s", cad[i].vacina);
                        printf("Data: %s\n", cad[i].data);
                        printf("Lote: %s\n", cad[i].lot);
                    }
                  };
                  if(identificador == 0){
                     printf("CPF NAO ENCONTRADO\n");
                  };
                system("pause");
                system("cls");
            }
            break;

            case 4:
             printf("=== Finalizando o programa ===");
            break;

            default:
            printf("======== OPCAO INVALIDA ======== ");
            break;
            };
          }while(opcao != 4);
          

              

         
        






     










        }