#include <stdio.h> //cabeçalho padrão para entrada e saida printf,scanf,system
#include <stdlib.h>// biblioteca padrao system,rand
#include <locale.h>//operações comuns como tratamento de entrada e saida de caracteres setlocale
#include <unistd.h>
#include <ctime>//manipulação de data e hora


int pausa (){
			printf("\t----------------------------------------------------------------\n");
			printf("\t|Aguarde 5 segundos para localizar um operador...              |\n");
			sleep (1);
			printf("\t|4 segundos...                                                 |\n");
			sleep (1);
			printf("\t|3 segundos...                                                 |\n");
			sleep (1);
			printf("\t|2 segundos...                                                 |\n");
			sleep (1);
			printf("\t|1 segundo...                                                  |\n");
			sleep (1);
			printf("\t|Operador encontrado! Pressione enter para iniciar atendimento.|\n");
			printf("\t----------------------------------------------------------------\n");
}

int assistencia (){
	system ("clear");//Comando para linux
    //system("cls");//comando para windows
    printf("\t------------------------------------------------------\n");
    printf("\t| Iremos marcar uma visita técnica para o senhor(a). |\n");
	printf("\t|            Obrigado pela sua ligação!              |\n");
	printf("\t------------------------------------------------------\n");
	return 0;
}

int suporteTec(){
	int tecla;
	system ("clear");//comando para linux
    //system("cls");//comando para windows
	printf ("Olá senhor(a)");
	printf("\t--------------------------------------------------\n");
	printf("\t|Qual seria seu problema? Digite a opção correta:|\n");
	printf("\t|          1 = Sem sinal na internet.            |\n");
	printf("\t|          2 = Sem sinal na TV.                  |\n");
	printf("\t|          3 = Sem sinal no telefone.            |\n");
	printf("\t--------------------------------------------------\n");
	printf("\tEscolha o numero e pressione enter:");
	scanf("%d",&tecla);
	switch (tecla){
		case 1://Suporte Internet
			system ("clear");//comando para linux
            //system("cls");//comando para windows
            printf("\t---------------------------------\n");
			printf("\t| Desligue e ligue seu modem.   |\n");
			printf("\t|Problema resolvido? 1=Sim 2=Não|\n");
			printf("\t---------------------------------\n");
			printf("\tEscolha o numero e pressione enter:");
			scanf("%d",&tecla);
				switch (tecla){
					case 1:
						system("clear");//comando para linux
                        //system("cls");//comando para windows
                        printf("\t------------------------\n");
						printf("\t|Obrigado pela ligação!|\n");
						printf("\t------------------------\n");
					return 0;
					case 2:
						system ("clear");//comando para linux
                        //system("cls");//comando para windows
                        printf("\t-----------------------------------------\n");
						printf("\t|Verifique se está conectado na energia.|\n");
						printf("\t|   Problema resolvido? 1=Sim 2=Não     |\n");
						printf("\t-----------------------------------------\n");
						printf("\tEscolha o numero e pressione enter:");
						scanf ("%d",&tecla);
						switch (tecla){
							case 1:
								system ("clear");//comando para linux
                                //system("cls");//comando para windows
                                printf("\t------------------------\n");
								printf("\t|Obrigado pela ligação!|\n");
								printf("\t------------------------\n");
							return 0;
							case 2:
								system ("clear");//comando para linux
                                //system("cls");//comando para windows
                                printf("\t-------------------------------------------\n");
								printf("\t|Verifique se esta conectado no computado.|\n");
								printf("\t|    Problema resolvido? 1=Sim 2=Não      |\n");
								printf("\t-------------------------------------------\n");
								printf("\tEscolha o numero e pressione enter:");
								scanf("%d",&tecla);
									switch (tecla){
										case 1:
										system ("clear");//comando para linux
                                        //system("cls");//comando para windows
                                        printf("\t------------------------\n");
										printf("\t|Obrigado pela atenção!|\n");
										printf("\t------------------------\n");
										return 0;
										case 2:
										return assistencia();
									}
						}
				}
		case 2://Sem sinal na TV
			//system ("clear")comando para linux
            system("cls");//comando para windows
            printf("\t------------------------------------------------\n");
			printf("\t|Verifique se seu decoder esta conectado na TV.|\n");
			printf("\t|        Problema resolvido? 1=Sim 2=Não       |\n");
			printf("\t------------------------------------------------\n");
			scanf("%d",&tecla);
				switch (tecla){
					case 1:
						//system ("clear")comando para linux
                        system("cls");//comando para windows
                        printf("\t------------------------\n");
						printf("\t|Obrigado pela ligação!|\n");
						printf("\t------------------------\n");
					return 0;
					case 2:
						//system ("clear")comando para linux
						system("cls");//comando para windows
						printf("\t-----------------------------------------\n");
						printf("\t|Verifique se está conectado na energia.|\n");
						printf("\t|    Problema resolvido? 1=Sim 2=Não    |\n");
						printf("\t-----------------------------------------\n");
						scanf ("%d",&tecla);
						switch (tecla){
							case 1:
								//system ("clear")comando para linux
								system("cls");//comando para windows
								printf("\t------------------------\n");
								printf("\t|Obrigado pela ligação!|\n");
								printf("\t------------------------\n");
							return 0;
							case 2:
								//system ("clear")comando para linux
								system ("cls");//comando para windows
								printf("\t--------------------------------------------------------\n");
								printf("\t|Verifique se seu Smartcard está inserido corretamente.|\n");
								printf("\t|          Problema resolvido? 1=Sim 2=Não             |\n");
								printf("\t--------------------------------------------------------\n");
								scanf("%d",&tecla);
								switch (tecla){
									case 1:
									//system("clear")comando para linux
									system("cls");//comando para windows
									printf("\t------------------------\n");
									printf("\t|Obrigado pela ligação!|\n");
									printf("\t------------------------\n");
									return 0;
									case 2:
									assistencia();
								}

						}
				}
		
		case 3://Sem sinal no telefone
			//system("clear");comando para linux
			system("cls");//comando para windows
			printf("\t----------------------------------------\n");
			printf("\t|Verifique se sua linha está conectada.|\n");
			printf("\t|   Problema resolvido? 1=Sim 2=Não    |\n");
			printf("\t----------------------------------------\n");
			scanf("%d",&tecla);
				switch (tecla){
					case 1:
						//system ("clear")comando para linux
						system("cls");//comando para windows
						printf("\t------------------------\n");
						printf("\t|Obrigado pela ligação!|\n");
						printf("\t------------------------\n");
					return 0;
					case 2:
						//system("clear")comando para linux
						system("cls");//comando para windows
						printf("\t------------------------------------------------------------------------------------------\n");
						printf("\t|Caso o senhor(a) tenha uma extenção,por gentileza verifique se possui sinal na extenção.|\n");
						printf("\t|                      Problema resolvido? 1=Sim 2=Não                                   |\n");
						printf("\t------------------------------------------------------------------------------------------\n");
						scanf("%d",&tecla);
						switch (tecla){
							case 1:
								//system ("clear")comando para linux
								system("cls");//comando para windows
								printf("\t------------------------\n");
								printf("\t|Obrigado pela ligação!|\n");
								printf("\t------------------------\n");
							return 0;
							case 2:
								//system ("clear")comando para linux
								system("cls");//comando para windows
								printf("\t--------------------------------------------------------------------------------------------\n");
								printf("\t|Caso o senhor(a) tenha um outro aparelho telefonico,por gentileza tente trocar o aparelho.|\n");
								printf("\t|                        Problema resolvido? 1=Sim 2=Não                                   |\n");
								printf("\t--------------------------------------------------------------------------------------------\n");
								scanf("%d",&tecla);
								switch (tecla){
									case 1:
									//system ("clear")comando para linux
									system("cls");//comando para windows
									printf("\t------------------------\n");
									printf("\t|Obrigado pela ligação!|\n");
									printf("\t------------------------\n");
								return 0;
									case 2:
									assistencia();
								}

						}

				}
	}
}

int atendiFinan(){
	int tecla,fatura,pagamento,restante;
	int min = 0;
	int max = 100;
	system ("clear");//comando para linux
	//system("cls");//comando para windows
	printf("\t------------------------------------------\n");
	printf("\t|                Olá senhor(a).          |\n");
	printf("\t| Qual seria o seu tipo de atendimento?  |\n");
	printf("\t|     1 = Pagamento de fatura.           |\n");
	printf("\t|     2 = Segunda via de boleto.         |\n");
	printf("\t|     3 = Promessa de pagamento.         |\n");
	printf("\t------------------------------------------\n");
	printf("\tEscolha o numero e pressione enter:");
	scanf("%d",&tecla);
		switch (tecla){
			case 1://Atendimento de pagamento de fatura
					system("clear");
					//system("cls");comando para windows
					fatura = rand()%(max-min+1)+min;
					printf("\t------------------------------------\n");
					printf("| Sua fatura em aberto é de:""%d",&fatura);
					printf("\n");
					printf("\t|Entre com o valor para pagamento: |\n");
					printf("\t------------------------------------\n");
					printf("\tColoque seu valor e aperte enter:");
					int pagamento;
					scanf ("%d",&pagamento);
					restante=fatura-pagamento;
					printf("\t----------------------------------------\n");
					printf("\t|O valor restante é:""%d",&restante);
					printf("|\n");
					printf("\t|Seu pagamento ira cair em 5 dias uteis|\n");
					printf("|\t\n-------------------------------------\n");

				return 0;
			case 2://Atendimento de segunda via
					system("clear");
					printf("\t-----------------------------------------------\n");
					printf("\t|Olá iremos gerar a sua segunda via do boleto |\n");
					printf("\t|               Fatura gerada.                |\n");
					printf("\t|           Obrigado pela ligação!            |\n");
					printf("\t-----------------------------------------------\n");
				return 0;
			case 3://Atendimento promessa de pagamento
					//system("clear");
					printf("\t-------------------------------------------------------------------------------------------------------\n");
					printf("\t|Iremos fazer a sua promessa de pagamento,ao finalizar este processo iremos ligar seu sinal novamente.|\n");
					printf("\t|                    Ligando o sinal,aguarde 5 segundos.                                              |\n");
					printf("\t|                            Processando.....                                                         |\n");
					sleep (5);
					printf("\t|                       Sinal retornado com sucesso!                                                  |\n");
					printf("\t-------------------------------------------------------------------------------------------------------\n");
				return 0;
		}			
}

int atendiCompra(){
	int tecla;
	system ("clear");//comando para linux
	//system("cls");//comando para windows
	printf("\t----------------------------\n");
	printf("\t| Escolha seu atendimento: |\n");
	printf("\t| 1 = Upgrade do pacote.   |\n");
	printf("\t| 2 = Compra de canal PPV. |\n");
	printf("\t----------------------------\n");
	scanf ("%d",&tecla);
		switch (tecla){
			case 1://Atendimento de upgrade do pacote
				system("clear");
				printf("\t---------------------------------------------------------\n");
				printf("\t|                 Upgrade de pacote                     |\n");
				printf("\t|Pacote trocado com sucesso! Obrigado pela sua ligação! |\n");
				printf("\t---------------------------------------------------------\n");
				return 0;
			case 2://Atendimento do compra de canal ppv
				system("clear");
				printf("\t---------------------------\n");
				printf("\t|   Escolha seu filme:    |\n");
				printf("\t|     1 = Filme           |\n");
				printf("\t|     2 = Desenho         |\n");
				printf("\t|     3 = PPV             |\n");
				printf("\t---------------------------\n");
				printf("\tEscolha o numero e pressione enter:");
				int filme;
				scanf("%d",&filme);

					switch (filme){
						case 1:
							system ("clear");//comando para linux
							//system("cls");//comando para windows
							printf("\t--------------------------------------\n");
							printf("\t| Parabens! Seu Filme foi registrado.|\n");
							printf("\t|      Obrigado pela ligação         |\n");
							printf("\t--------------------------------------\n");
						return 0;
						case 2:
							system ("clear");//comando para linux
							//system("cls"); //comando para windows
							printf("----------------------------------------\n");
							printf("| Parabens! Seu Desenho foi registrado |\n");
							printf("|       Obrigado pela ligação!         |\n");
							printf("----------------------------------------\n");
						return 0;
						case 3:
							system ("clear");//comando para linux
							//system("cls");//comando para windows
							printf("\t----------------------------------------\n");
							printf("\t|Parabens! Seu filme PPV foi registrado|\n");
							printf("\t|         Obrigado pela ligação        |\n");
							printf("\t----------------------------------------\n");
						return 0;
					}
	return 0;
		}
}

int main(){

	int opcao;
    unsigned long int proto;
	char cliente;
	int min = 0;
	int max = 100;

	
	system ("clear");//comando para linux
	//system ("cls");//comando para windows
	setlocale (LC_ALL,"Portuguese");
	proto = rand()%(max-min+1)+min;
	printf("\tOlá Bem vindo ao atendimento Ura 1.0\n");

	printf("\t Por gentileza,qual seria o seu primeiro nome?\n");
	printf("Digite aqui:");
	scanf("%s",&cliente);
	//printf("digitado na variavel:");codigo usado para testar a variavel char
	//printf("%s",&cliente);
	printf("\t----------------------------------------------\n");
	printf("\t|O seu protocolo de atendimento é:" "%d",&proto);
	printf("|\n");
	printf("\t----------------------------------------------\n");
	printf("\t-----------------------------------------------\n");
	printf("\t| Escolha seu atendimento e pressione enter:  |\n");
	printf("\t| 1 = Suporte técnico                         |\n");
	printf("\t| 2 = Financeiro                              |\n");
	printf("\t| 3 = Compras                                 |\n");
	printf("\t-----------------------------------------------\n");
	printf("\tEscolha o numero e pressione enter:");
	scanf ("%d",&opcao);
	switch (opcao){
		case 1:
			system("clear");
			//system("cls");comando para windows
			printf("\t-------------------------------\n");
			printf("\t|Você escolheu suporte técnico|\n");
			printf("\t-------------------------------\n");
			pausa();
			getchar();getchar();
			suporteTec();
		return suporteTec();
		case 2:	
			system("clear");
			//system("cls");comando para windows	
			printf("--------------------------\n");
			printf("|Você escolheu Financeiro|\n");
			printf("--------------------------\n");
			pausa();
			getchar();getchar();
			atendiFinan();
		return atendiFinan();
		case 3:	
			system("clear");
			//system("cls");comando para windows	
			printf("-----------------------\n");
			printf("|Você escolheu Compras|\n");
			printf("-----------------------\n");
			pausa();
			getchar();getchar();
			atendiCompra();
		return atendiCompra();
	}
}
