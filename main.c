#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>

//Desenvolvido por Matheus Alves e Emanuel Ferreira //
    typedef struct {


        char login[30];   // Este char apenas faz referência a um vetor para a struct;
        char senha[30];      // Este char apenas faz referência a um vetor para a struct;
        char cep[50];
        char Nome[50];
        double Telefone[50];

    } admin; admin ad[1]; // Determinamos apenas uma pessoa correspondente ao acesso às informações do cadastro/agendamento/cancelamento. Este usuário é o administrador da rede.

    void Prontuario() {
        //Criar variável 
        FILE* pont_arq;
        char Nome[30];
        char Sobrenome[30];
        char Diagnostico[30];
        char Medicacao[30];
        char Exames[30];

        pont_arq = fopen("Prontuario.txt", "w");

        if (pont_arq == NULL)
        {
            printf("\n Houve um erro na abertura do arquivo! Tente novamente! \n");

        }

        printf("\n Digite o Nome do Paciente: \n");
        scanf("%s", &Nome);
        fprintf(pont_arq, "%s", Nome);

        printf("\n Digite o sobrenome: \n");
        scanf("%s", &Sobrenome);
        fprintf(pont_arq, "%s""\n", Sobrenome);

        printf("\n Diagnostico do Paciente: \n");
        scanf("%s", &Diagnostico);
        fprintf(pont_arq, "%s""\n", Diagnostico);

        printf("\n Medicacao indicada ao Paciente: \n");
        scanf("%s", &Medicacao);
        fprintf(pont_arq, "%s""\n", Medicacao);

        printf("\n Exames Realizados/Indicados: \n");
        scanf("%s", &Exames);
        fprintf(pont_arq, "%s""\n", Exames);

        fclose(pont_arq);

        printf("\n O arquivo texto com as informações indicadas no Prontuario foi criado com Sucesso! \n");

        getchar();
    }

    void Unidade() {
    	FILE* pont_arq;
        char unidade[30];
        float n[5] = { 0 }, semana = 0, mensal = 0;
        int i;
        
        pont_arq = fopen("Rendimento_Unidade.txt", "w");

        if (pont_arq == NULL)
        {
            printf("\n Houve um erro na abertura do arquivo! Tente novamente! \n");

        }

        printf("\n Escreva o nome de sua Unidade de Atendimento: %s\n"); //ex: MG, DF, RJ
        scanf("%s", &unidade);
        fprintf(pont_arq, "%s""\n", unidade);

     //   unidade = getchar();

        printf("\n A unidade de Atendimento selecionada foi: %s\n", unidade);


        for (i = 0; i < 5; i++) { //são 5 dias uteis
            printf("Digite o valor correspondente ao rendimento diário: R$", i+1);
            scanf("%f", &n[i]);
            fprintf(pont_arq, "%f""\n", n[i]);

            semana = n[i-4] + n[i-3] + n[i-2] + n[i-1] + n[i];
        }
        
        mensal = semana * 4; // foi se atribuido 4 vezes a soma semanal para facilitar o processo, já que não há um banco de dados.
        
        printf("O rendimento semanal desta Unidade foi: R$ %f \n", semana);
        printf("O rendimento mensal desta Unidade foi: R$ %f \n", mensal);
        
        fclose(pont_arq);

        printf("\n O arquivo texto com as informações indicadas no Rendimento por Unidade foi criado com Sucesso! \n");

        getchar();


    }

    void Rendimento() {

        float n[5] = { 0 }, semana = 0, mensal = 0;
        int i;

        for (i = 0; i < 5; i++) { //são 5 dias uteis
            printf("Digite o valor correspondente ao rendimento diário: R$", i+1);
            scanf("%f", &n[i]);

            semana = n[i-4] + n[i-3] + n[i-2] + n[i-1] + n[i];
        }
        
        mensal = semana * 4; // foi se atribuido 4 vezes a soma semanal para facilitar o processo, já que não há um banco de dados.
        
        printf("O rendimento semanal desta Unidade foi: R$ %f \n", semana);
        printf("O rendimento mensal desta Unidade foi: R$ %f \n", mensal);
        

        getchar();
    }

    void Agendamento() {

        //Criar variável 
        FILE* pont_arq;
        char Nome[30];
        char Sobrenome[30];
        int Dia;
        char Mes[30];
        char hora;
        char consulta[50];

        pont_arq = fopen("Agendamento.txt", "w");

        if (pont_arq == NULL)
        {
            printf("\n Houve um erro na abertura do arquivo! Tente novamente! \n");

        }

        printf("\n Digite o Nome do Paciente: \n");
        scanf("%s", &Nome);
        fprintf(pont_arq, "%s""\n", Nome);

        printf("\n Digite o sobrenome: \n");
        scanf("%s", &Sobrenome);
        fprintf(pont_arq, "%s""\n", Sobrenome);

        printf("\n Data de Agendamento (Dia): \n ");
        scanf("%f", &Dia);
        fprintf(pont_arq, "%i""\n", Dia);

        printf("\n Mes de Agendamento (Mes): \n");
        scanf("%s", &Mes);
        fprintf(pont_arq, "%s""\n", Mes);
        
        printf("\n Horário de Agendamento (Hs): \n");
        scanf("%s", &hora);
        fprintf(pont_arq, "%s""\n", hora);
        
        printf("\n Tipo de consulta: \n");
        scanf("%s", &consulta);
        fprintf(pont_arq, "%s""\n", consulta);

        fclose(pont_arq);

        printf("\n O arquivo texto para escrever o Agendamento foi criado com Sucesso! \n");

        getchar();
    }



    void Ficha_Paciente() {
        FILE* pont_arq;
        
            char Nome[12];
            float altura;
            char Sobrenome1[12];
            double Telefone[50];
            int i;
         

        pont_arq = fopen("Ficha_Paciente.txt", "w");

        if (pont_arq == NULL)
        {
            printf("\n Houve um erro na abertura do arquivo! Tente novamente!\n");

        }

       printf("\n Digite o primeiro Nome do Paciente: ");
       scanf("%s", &Nome); // Usuário relacionado ao vetor senha contido na função principal (main)
       fprintf(pont_arq, "%s""\t", Nome);


        printf("\n Digite o Sobrenome do Paciente: ");
        scanf("%s", &Sobrenome1);
        fprintf(pont_arq, "%s""\n", Sobrenome1);


        printf("\n Digite o Telefone do Paciente: ");
        scanf("%s", &Telefone);
        fprintf(pont_arq, "%s""\n", Telefone);


        printf("\n Digite aqui a Altura em CM do Paciente: ");
        scanf("%f", &altura);
        fprintf(pont_arq, "%f""\n", altura);
        

        fclose(pont_arq);


        printf("\n As informações foram armazenadas no arquivo texto com Sucesso! \n ");


        getchar();
    }




    void cadastro_paciente() {
    	FILE* pont_arq;
    	
        char cep[50];
        char Nome[12];
        char Sobrenome1[12];
        char Telefone[50];
        
        pont_arq = fopen("cadastro_paciente.txt", "w");

        if (pont_arq == NULL)
        {
            printf("\n Houve um erro na abertura do arquivo! Tente novamente!\n");

        }

        printf("\n Digite o primeiro Nome do Paciente: ");
        scanf("%s", &Nome); // Usuário relacionado ao vetor senha contido na função principal (main)
        fprintf(pont_arq, "%s""\t", Nome);

        printf("\n Digite o Sobrenome do Paciente: ");
        scanf("%s", &Sobrenome1);
        fprintf(pont_arq, "%s""\t", Sobrenome1);

       // printf("\n Nome Completo do Paciente: %s %s\n",Nome, Sobrenome1); //%s para saída

        printf("\n Informe o CEP do Paciente: ");
        scanf("%s", cep); // Usuário relacionado ao vetor login contido na função principal (main)
        fprintf(pont_arq, "%s""\t", cep);

        printf("\n Telefone do Paciente: ");
        scanf("%s", Telefone);
        fprintf(pont_arq, "%s""\t", Telefone);
        
        fclose(pont_arq);


        printf("\n As informações foram armazenadas no arquivo texto com Sucesso! \n ");


        getchar();
        system("cls");
    } //fimm do cadastro




    void cadastro_medico() {
    	FILE* pont_arq;
    	
        char cep[50];
        char Nome[12];
        char Sobrenome1[12];
        char Telefone[50];
        
        pont_arq = fopen("cadastro_medico.txt", "w");

        if (pont_arq == NULL)
        {
            printf("\n Houve um erro na abertura do arquivo! Tente novamente!\n");

        }

        printf("\n Digite o primeiro Nome do Medico: ");
        scanf("%s", &Nome); // Usuário relacionado ao vetor senha contido na função principal (main)
        fprintf(pont_arq, "%s""\t", Nome);

        printf("\n Digite o Sobrenome do Medico: ");
        scanf("%s", &Sobrenome1);
        fprintf(pont_arq, "%s""\t", Sobrenome1);

        // printf("\n Nome Completo do Paciente: %s %s\n",Nome, Sobrenome1); //%s para saída

        printf("\n");


        printf("\n Informe o CEP do Medico: ");
        scanf("%s", cep); // Usuário relacionado ao vetor login contido na função principal (main)
        fprintf(pont_arq, "%s""\t", cep);

        printf("\n Telefone do Medico: ");
        scanf("%s", Telefone);
        fprintf(pont_arq, "%s""\t", Telefone);
        
        fclose(pont_arq);


        printf("\n As informações foram armazenadas no arquivo texto com Sucesso! \n ");


        getchar();
        system("cls");
    } //fimm do cadastro


    // Não será necessário, mas irei deixar separado para um código futuro.
    /*void Login() {

        char login[30];   // Este char apenas faz referência a um vetor para a struct;
        char senha[30];      // Este char apenas faz referência a um vetor para a struct;

        // Criando o acesso;

        strcpy(ad[0].login, "Admin"); // Atribuindo valor ao login como "Admin"

        strcpy(ad[0].senha, "pim"); // Atribuindo valor a senha como "pim"

        printf("\n Login: ");
        scanf("%s", login); // Usuário relacionado ao vetor login contido na função principal (main)

        printf("\n Senha: ");
        scanf("%s", senha); // Usuário relacionado ao vetor senha contido na função principal (main)

        if ((strcmp(login, ad[0].login) == 0)
            &&
            (strcmp(senha, ad[0].senha) == 0)) {

            printf("\nAdministrador Logado com Sucesso\n");



        }
        else {
            printf("\nTente novamente\n Login e/ou Senha não correspondem \n");

        }
    }*/


    void Login_admin() {

        int menu_admin;
        char login[30];   // Este char apenas faz referência a um vetor para a struct;
        char senha[30];      // Este char apenas faz referência a um vetor para a struct;

        // Criando o acesso;

        strcpy(ad[0].login, "Admin"); // Atribuindo valor ao login como "Admin"

        strcpy(ad[0].senha, "pim"); // Atribuindo valor a senha como "pim"

        printf("\n Login: ");
        scanf("%s", login); // Usuário relacionado ao vetor login contido na função principal (main)

        printf("\n Senha: ");
        scanf("%s", senha); // Usuário relacionado ao vetor senha contido na função principal (main)

        if ((strcmp(login, ad[0].login) == 0)
            &&
            (strcmp(senha, ad[0].senha) == 0)) {

            printf("\nAdministrador Logado com Sucesso\n");

            system("cls");

            do {
                printf("\nOi, Admin.\n \n \n\n" );
                    printf("1.Cadastro Paciente \n 2.Cadastro Medico \n 3.Agendamento \n 4.Ficha Paciente \n 5.Unidade & Rendimento \n 6.Sair \n");
                printf("\nSelecione sua opção: ");


                scanf("%d", &menu_admin);
                switch (menu_admin) {
                case 1:
                    cadastro_paciente();

                    break;

                case 2:
                    cadastro_medico();

                    break;

                case 3:
                    // Agendamento 
                    Agendamento();

                    break;


                case 4:

                    Ficha_Paciente();

                    

                    break;


                case 5:

                    Unidade();
                  

                    break;

                case 6:
                    //Return menu principal

                    break;
                }
            } while (menu_admin != 6);
          
        }
        else {
            printf("\nTente novamente\n Login e/ou Senha não correspondem \n");

        }
        
    }

    void Login_Medico() {

        int menu_med;
        char login[30];   // Este char apenas faz referência a um vetor para a struct;
        char senha[30];      // Este char apenas faz referência a um vetor para a struct;

        // Criando o acesso;

        strcpy(ad[0].login, "Medico"); // Atribuindo valor ao login como "Admin"

        strcpy(ad[0].senha, "pim"); // Atribuindo valor a senha como "pim"

        printf("\n Login: ");
        scanf("%s", login); // Usuário relacionado ao vetor login contido na função principal (main)

        printf("\n Senha: ");
        scanf("%s", senha); // Usuário relacionado ao vetor senha contido na função principal (main)

        if ((strcmp(login, ad[0].login) == 0)
            &&
            (strcmp(senha, ad[0].senha) == 0)) {

            printf("\nMedico Logado com Sucesso\n");

            system("cls");

            do {
                printf("\nOi, Medico.\n \n \n\n");
                printf("\nSelecione a opcao que deseja: \n 1.Ficha do Paciente \n 2.Agendamento \n 3.Prontuário \n 4.Sair\n");


                scanf("%d", &menu_med);
                switch (menu_med) {
                case 1:
                    //Ficha do Paciente
                    Ficha_Paciente();
                    break;

                case 2:
                    // Agendamento 
                    Agendamento();
                    break;

                case 3:
                    // Prontuário
                    Prontuario();

                    break;


                case 4:

                    //Return menu principal. 

                    break;
                }

            } while (menu_med != 4);

        }
        else {
            printf("\nTente novamente\n Login e/ou Senha não correspondem \n");

        }

    }

    void Faq() {
        setlocale(LC_ALL, "Portuguese");


        printf("Reclamações ou Cancelamento de Consultas.");

        printf("\n Envie sua proposta em: ");
        printf("\n e-mail: minhaclínica@gmail.com");
        printf("\n Entre em contato: [DDD]XXXX-XXXX");
        printf("\n Site: www.minhaclinica.com.br");

        printf("\nObrigado!\n \n \n \n \n");



    }
       

     

    int main() {
        setlocale(LC_ALL, "Portuguese");

        int menu;


        


        do {
           // system("cls");
            printf("\nSeja bem vindo à nossa clínica.\n \n \n");
            printf("1.Adminstrador\n2.Medico \n3.FaQ \n4.Sair \n");
            printf("\nSelecione sua opção: \n");


            scanf("%d", &menu);
           
            switch (menu) {


            case 1:

                
                Login_admin();

             
                break;

            case 2:
                
                Login_Medico();

                break;




            case 3:
                system("cls");
                Faq();
                

                break;

            case 4:
                printf("\nObrigado! Até mais!\n");
                exit(menu);
                
            default:

                //Redirecionando para as opções

                printf("\nAperte uma Key Válida! Tente Novamente...\n");

                break;


            }
        } while (menu != 4);

        return 0;
    }
