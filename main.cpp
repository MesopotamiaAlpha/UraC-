#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <time.h>


int pausa (){
			printf("----------------------------------------------------------------\n");
			printf("|Aguarde 5 segundos para localizar um operador...              |\n");
			sleep (1);
			printf("|4 segundos...                                                 |\n");
			sleep (1);
			printf("|3 segundos...                                                 |\n");
			sleep (1);
			printf("|2 segundos...                                                 |\n");
			sleep (1);
			printf("|1 segundo...                                                  |\n");
			sleep (1);
			printf("|Operador encontrado! Pressione enter para iniciar atendimento.|\n");
			printf("----------------------------------------------------------------\n");
}

int assistencia (){
	//system ("clear");Comando para linux
    system("cls");//comando para windows
    printf("------------------------------------------------------\n");
    printf("| Iremos marcar uma visita técnica para o senhor(a). |\n");
	printf("|            Obrigado pela sua ligação!              |\n");
	printf("------------------------------------------------------\n");
	return 0;
}

int suporteTec(){
	int tecla;

	//system ("clear")comando para linux
    system("cls");//comando para windows
	printf ("Olá senhor(a).\n\n");
	printf("--------------------------------------------------\n")
	printf("|Qual seria seu problema? Digite a opção correta:|\n");
	printf("|          1 = Sem sinal na internet.            |\n");
	printf("|          2 = Sem sinal na TV.                  |\n");
	printf("|          3 = Sem sinal no telefone.            |\n");
	printf("--------------------------------------------------\n");
	scanf("%d",&tecla);
	switch (tecla){
		case 1://Suporte Internet
			//system ("clear")comando para linux
            system("cls");//comando para windows
            printf("---------------------------------\n");
			printf("| Desligue e ligue seu modem.   |\n");
			printf("|Problema resolvido? 1=Sim 2=Não|\n");
			printf("---------------------------------\n");
			scanf("%d",&tecla);
				switch (tecla){
					case 1:
						//system("clear")comando para linux
                        system("cls");//comando para windows
                        printf("------------------------\n");
						printf("|Obrigado pela ligação!|\n");
						printf("------------------------\n");
					return 0;
					case 2:
						//system ("clear")comando para linux
                        system("cls");//comando para windows
                        printf("-----------------------------------------\n");
						printf("|Verifique se está conectado na energia.|\n");
						printf("|   Problema resolvido? 1=Sim 2=Não     |\n");
						printf("-----------------------------------------\n");
						scanf ("%d",&tecla);
						switch (tecla){
							case 1:
								//system ("clear")comando para linux
                                system("cls");//comando para windows
                                printf("------------------------\n");
								printf("|Obrigado pela ligação!|\n");
								printf("------------------------\n");
							return 0;
							case 2:
								//system ("clear")comando para linux
                                system("cls");//comando para windows
                                printf("-------------------------------------------\n");
								printf("|Verifique se esta conectado no computado.|\n");
								printf("|    Problema resolvido? 1=Sim 2=Não      |\n");
								printf("-------------------------------------------\n");
								scanf("%d",&tecla);
									switch (tecla){
										case 1:
										//system ("clear")comando para linux
                                        system("cls");//comando para windows
                                        printf("------------------------\n");
										printf("|Obrigado pela atenção!|\n");
										printf("------------------------\n");
										return 0;
										case 2:
										return assistencia();
									}
						}
				}
		case 2://Sem sinal na TV
			//system ("clear")comando para linux
            system("cls");//comando para windows
            printf("------------------------------------------------\n");
			printf("|Verifique se seu decoder esta conectado na TV.|\n");
			printf("|        Problema resolvido? 1=Sim 2=Não       |\n");
			printf("------------------------------------------------\n");
			scanf("%d",&tecla);
				switch (tecla){
					case 1:
						//system ("clear")comando para linux
                        system("cls");//comando para windows
                        printf("------------------------\n");
						printf("|Obrigado pela ligação!|\n");
						printf("------------------------\n");
					return 0;
					case 2:
						//system ("clear")comando para linux
						system("cls");//comando para windows
						printf("-----------------------------------------\n");
						printf("|Verifique se está conectado na energia.|\n");
						printf("|    Problema resolvido? 1=Sim 2=Não    |\n");
						printf("-----------------------------------------\n");
						scanf ("%d",&tecla);
						switch (tecla){
							case 1:
								//system ("clear")comando para linux
								system("cls");//comando para windows
								printf("------------------------\n");
								printf("|Obrigado pela ligação!|\n");
								printf("------------------------\n");
							return 0;
							case 2:
								//system ("clear")comando para linux
								system ("cls");//comando para windows
								printf("--------------------------------------------------------\n");
								printf("|Verifique se seu Smartcard está inserido corretamente.|\n");
								printf("|          Problema resolvido? 1=Sim 2=Não             |\n");
								printf("--------------------------------------------------------\n");
								scanf("%d",&tecla);
								switch (tecla){
									case 1:
									//system("clear")comando para linux
									system("cls");//comando para windows
									printf("------------------------\n");
									printf("|Obrigado pela ligação!|\n");
									printf("------------------------\n");
									return 0;
									case 2:
									assistencia();
								}

						}
				}
		
		case 3://Sem sinal no telefone
			//system("clear");comando para linux
			system("cls");//comando para windows
			printf("----------------------------------------\n");
			printf("|Verifique se sua linha está conectada.|\n");
			printf("|   Problema resolvido? 1=Sim 2=Não    |\n");
			printf("----------------------------------------\n");
			scanf("%d",&tecla);
				switch (tecla){
					case 1:
						//system ("clear")comando para linux
						system("cls");//comando para windows
						printf("------------------------\n");
						printf("|Obrigado pela ligação!|\n");
						printf("------------------------\n");
					return 0;
					case 2:
						//system("clear")comando para linux
						system("cls");//comando para windows
						printf("------------------------------------------------------------------------------------------\n");
						printf("|Caso o senhor(a) tenha uma extenção,por gentileza verifique se possui sinal na extenção.|\n");
						printf("|                      Problema resolvido? 1=Sim 2=Não                                   |\n");
						printf("------------------------------------------------------------------------------------------\n");
						scanf("%d",&tecla);
						switch (tecla){
							case 1:
								//system ("clear")comando para linux
								system("cls");//comando para windows
								printf("------------------------\n");
								printf("|Obrigado pela ligação!|\n");
								printf("------------------------\n");
							return 0;
							case 2:
								//system ("clear")comando para linux
								system("cls");//comando para windows
								printf("--------------------------------------------------------------------------------------------\n");
								printf("|Caso o senhor(a) tenha um outro aparelho telefonico,por gentileza tente trocar o aparelho.|\n");
								printf("|                        Problema resolvido? 1=Sim 2=Não                                   |\n");
								printf("--------------------------------------------------------------------------------------------\n");
								scanf("%d",&tecla);
								switch (tecla){
									case 1:
									//system ("clear")comando para linux
									system("cls");//comando para windows
									printf("------------------------\n");
									printf("|Obrigado pela ligação!|\n");
									printf("------------------------\n");
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
	//system ("clear")comando para linux
	system("cls");//comando para windows
	printf("------------------------------------------\n");
	printf("|                Olá senhor(a).          |\n");
	printf("| Qual seria o seu tipo de atendimento?  |\n");
	printf("|     1 = Pagamento de fatura.           |\n");
	printf("|     2 = Segunda via de boleto.         |\n");
	printf("|     3 = Promessa de pagamento.         |\n");
	printf("------------------------------------------\n");
	scanf("%d",&tecla);
		switch (tecla){
			case 1://Atendimento de pagamento de fatura
					fatura = rand()%(max-min+1)+min;
					printf("------------------------------------\n");
					printf("| Sua fatura em aberto é de:","%d  |\n",&fatura);
					printf("|%d                                |\n",&fatura);
					printf("|                                  |\n");
					printf("|Entre com o valor para pagamento: |\n");
					printf("------------------------------------\n");
					scanf ("%d",&pagamento);
					restante=fatura-pagamento;
					printf("----------------------\n");
					printf("|O valor restante é: |\n");
					printf("----------------------\n");
					printf("%d",&restante);
				return 0;
			case 2://Atendimento de segunda via
					printf("-----------------------------------------------\n");
					printf("|Olá iremos gerar a sua segunda via do boleto |\n");
					printf("|               Fatura gerada.                |\n");
					printf("|           Obrigado pela ligação!            |\n");
					printf("-----------------------------------------------\n");
				return 0;
			case 3://Atendimento promessa de pagamento
					printf("-------------------------------------------------------------------------------------------------------\n");
					printf("|Iremos fazer a sua promessa de pagamento,ao finalizar este processo iremos ligar seu sinal novamente.|\n");
					printf("|                    Ligando o sinal,aguarde 5 segundos.                                              |\n");
					printf("|                            Processando.....                                                         |\n");
					sleep (5);
					printf("|                       Sinal retornado com sucesso!                                                  |\n");
					printf("-------------------------------------------------------------------------------------------------------\n");
				return 0;
		}			
}

int atendiCompra(){
	int tecla;
	//system ("clear")comando para linux
	system("cls");//comando para windows
	printf("----------------------------\n");
	printf("| Escolha seu atendimento: |\n");
	printf("| 1 = Upgrade do pacote.   |\n");
	printf("| 2 = Compra de canal PPV. |\n");
	printf("----------------------------\n");
	scanf ("%d",&tecla);
		switch (tecla){
			case 1://Atendimento de upgrade do pacote
				printf("\n");
				printf("---------------------------------------------------------\n");
				printf("|                 Upgrade de pacote                     |\n");
				printf("|Pacote trocado com sucesso! Obrigado pela sua ligação! |\n");
				printf("---------------------------------------------------------\n");
				return 0;
			case 2://Atendimento do compra de canal ppv
				printf("---------------------------\n");
				printf("|   Escolha seu filme:    |\n");
				printf("|     1 = Filme           |\n");
				printf("|     2 = Desenho         |\n");
				printf("|     3 = PPV             |\n");
				printf("---------------------------\n");
					switch (tecla){
						case 1:
							//system ("clear")comando para linux
							system("cls");//comando para windows
							printf("--------------------------------------\n");
							printf("| Parabens! Seu Filme foi registrado.|\n");
							printf("|      Obrigado pela ligação         |\n");
							printf("--------------------------------------\n");
						return 0;
						case 2:
							//system ("clear")comando para linux
							system("cls"); //comando para windows
							printf("----------------------------------------\n");
							printf("| Parabens! Seu Desenho foi registrado |\n");
							printf("|       Obrigado pela ligação!         |\n");
							printf("----------------------------------------\n");
						return 0;
						case 3:
							//system ("clear")comando para linux
							system("cls");//comando para windows
							printf("----------------------------------------\n");
							printf("|Parabens! Seu filme PPV foi registrado|\n");
							printf("|         Obrigado pela ligação        |\n");
							printf("----------------------------------------\n");
						return 0;
					}
	return 0;
		}
}

int main(){
	int opcao,proto;
	int min = 0;
	int max = 100;
	
	//system ("clear")comando para linux
	system ("cls");//comando para windows
	setlocale (LC_ALL,"Portuguese");
	proto = rand()%(max-min+1)+min;
	printf("-----------------------------------------\n");
	printf("|Olá! O seu protocolo de atendimento é: |\n");
	printf("-----------------------------------------\n");
	printf("%d",&proto);
	printf("\n");
	printf("----------------------------\n");
	printf("| Escolha seu atendimento  |\n");
	printf("| e pressione enter:       |\n");
	printf("| 1 = Suporte técnico      |\n");
	printf("| 2 = Financeiro           |\n");
	printf("| 3 = Compras              |\n");
	printf("----------------------------\n");
	scanf ("%d",&opcao);
	switch (opcao){
		case 1:
			printf("-------------------------------\n");
			printf("|Você escolheu suporte técnico|\n");
			printf("-------------------------------\n");
			pausa();
			getchar();getchar();
			suporteTec();
		return suporteTec();
		case 2:		
			printf("--------------------------\n");
			printf("|Você escolheu Financeiro|\n");
			printf("--------------------------\n");
			pausa();
			getchar();getchar();
			atendiFinan();
		return atendiFinan();
		case 3:		
			printf("-----------------------\n");
			printf("|Você escolheu Compras|\n");
			printf("-----------------------\n");
			pausa();
			getchar();getchar();
			atendiCompra();
		return atendiCompra();
	}
}
