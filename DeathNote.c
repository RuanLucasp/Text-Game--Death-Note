#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int scanint(void) {
	char in[60];
	scanf("%s", in);
	if(isdigit(in[0]))
		return in[0]-48;
	else
		return 0;
}

void printObj(int watchOut) {
	system("clear");	//clears the screen
	if(watchOut)
		printf("\tWatch out! You need to write a number that makes sense! Try again!\n\n");
	}

int main(void) {
	//Declaring general variables
	int choice = 0, currentLevel = 0, game = 0;
	int watchOut = 0;
	//Introduction
	while (game ==  0) {	//Keeps looping the game until the end, continuosly checking for every level
		while (currentLevel == 0) {
			system("clear");
   			printf("                    ▓█████▄ ▓█████ ▄▄▄     ▄▄▄█████▓ ██░ ██     ███▄    █  ▒█████  ▄▄▄█████▓▓█████ \n");
    		printf("                    ▒██▀ ██▌▓█   ▀▒████▄   ▓  ██▒ ▓▒▓██░ ██▒    ██ ▀█   █ ▒██▒  ██▒▓  ██▒ ▓▒▓█   ▀ \n");
    		printf("                    ░██   █▌▒███  ▒██  ▀█▄ ▒ ▓██░ ▒░▒██▀▀██░   ▓██  ▀█ ██▒▒██░  ██▒▒ ▓██░ ▒░▒███   \n");
    		printf("                    ░▓█▄   ▌▒▓█  ▄░██▄▄▄▄██░ ▓██▓ ░ ░▓█ ░██    ▓██▒  ▐▌██▒▒██   ██░░ ▓██▓ ░ ▒▓█  ▄ \n");
    		printf("                    ░▒████▓ ░▒████▒▓█   ▓██▒ ▒██▒ ░ ░▓█▒░██▓   ▒██░   ▓██░░ ████▓▒░  ▒██▒ ░ ░▒████▒\n");
    		printf("                     ▒▒▓  ▒ ░░ ▒░ ░▒▒   ▓▒█░ ▒ ░░    ▒ ░░▒░▒   ░ ▒░   ▒ ▒ ░ ▒░▒░▒░   ▒ ░░   ░░ ▒░ ░\n");
    		printf("                     ░ ▒  ▒  ░ ░  ░ ▒   ▒▒ ░   ░     ▒ ░▒░ ░   ░ ░░   ░ ▒░  ░ ▒ ▒░     ░     ░ ░  ░\n");
    		printf("                       ░       ░  ░     ░  ░         ░  ░  ░            ░     ░ ░              ░  ░\n\n");

    		printf("               +-++-++-++-++-++-++-+ +-++-++-++-++-+ +-++-++-+ +-++-++-+ +-++-++-++-++-++-++-+ +-++-+ +-++-++-++-++-++-+ +-++-++-++-++-+\n");
    		printf("               |A||n||o||t||h||e||r| |N||o||t||e||:| |T||h||e| |L||o||s| |A||n||g||e||l||e||s| |B||B| |M||u||r||d||e||r| |C||a||s||e||s|\n");
    		printf("               +-++-++-++-++-++-++-+ +-++-++-++-++-+ +-++-++-+ +-++-++-+ +-++-++-++-++-++-++-+ +-++-+ +-++-++-++-++-++-+ +-++-++-++-++-+\n");

    		printf("                                            PRÓLOGO: \n\n");
    		printf("Há um serial killer à solta em Los Angeles e as autoridades locais precisam de ajuda rápida. Por alguma razão, o assassino foi deixando uma série de pistas em cada cena do crime.\n");
    		getchar();
    		printf("Na cena vem L, um detetive misterioso que nunca mostrou seu rosto em público. Nunca foi abordado um caso onde ele não foi capaz de resolvê-lo.\n");
    		getchar();
    		printf("L inicia uma busca por vestígios em toda Califórnia. Ele começa a navegar entre as pistas para resolver o caso de homicídios B.B de Los Angeles\n");
    		getchar();
    		printf("Mais um dia comum para L, resolvendo casos que lhe chamam atenção\n");
    		getchar();
    		printf("Dessa vez ocorreu uma série de assasinatos em Los Angeles, que parecem converger para um único evento\n");
    		getchar();
    		printf("Para Resolver o enigma que todos os assasinatos apontam, L decide resolver cada um dos casos e procurar pistas\n");
    		getchar();
			system("clear");
			printf("\nSe prepare para encontrar o criminoso!\nVamos Começar\n");
			printf("1 = Iniciar o Jogo\n");
			choice = scanint();
			while (choice != 1) {
				printf("Preste atenção voce precisa escolher um número dentre as opções\n");
				printf("1 = Start the game\n");
				choice = scanint();
			}
			currentLevel = 1;
		}
		while (currentLevel == 1) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
			printf("Você está dentro da casa de da vítima, para onde deseja ir?\n");
			printf("1 = Vá para a sala de estar\n");
			printf("2 = Vá para o quarto da filha da vítima\n");
			printf("3 = Vá para a a cozinha\n");
			choice = scanint();	//Scans the player's choice
			switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					currentLevel = 2;
					break;
				case 2:
					currentLevel = 5;
					break;
				case 3:
					currentLevel = 8;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
		while (currentLevel == 2) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
			printf("A sala parece um pouco bagunçada e a tv ainda está ligada.\n");
			printf("Oque quer investigar?\n");
			printf("1 = Olhar entre os cadernos caídos no chão\n");
			printf("2 = Olhar embaixo do sofá\n");
			printf("3 = Voltar ao incício\n");
			choice = scanint();	//Scans the player's choice
			switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					currentLevel = 3;
					break;
				case 2:
					currentLevel = 4;
					break;
				case 3:
					currentLevel = 1;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
		while (currentLevel == 3) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
            printf("Parece que um dos cadernos está faltando uma página que foi rasgada, isso pode ser útil.\n");
            printf("Oque quer fazer a seguir?\n");
            printf("1 = Olhar embaixo do sofá\n");
            printf("2 = Voltar ao inicio\n"); 
			choice = scanint();	//Scans the player's choice
			switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					currentLevel = 4;
					break;
				case 2:
					currentLevel = 1;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
		while (currentLevel == 4) {	//Checks the currentLevel variable to determine what level to play next
			printf("Oque?!, há um bilhete embaixo do sofá, deve ter sido deixado pela vítima\n");
            printf("Dois de março, Dois de Janeiro, Primeiro de Agosto\n");
            printf("Isso deve significar alguma coisa, você consegue descobrir oque é?\n");
            printf("1- ana\n");
            printf("2- iago\n");
            printf("3- juriscreide\n");
            choice = scanint();
            switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					currentLevel = 9;
					break;
				case 2:
					printf("Você errou infelizmente\n");
					currentLevel = 4;
					break;
				case 3:
					printf("Você errou infelizmente\n");
					currentLevel = 4;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
            /*char *fala;
            scanf("%s", fala);
            if(fala="ana"){
            	printf("Parabéns você acertou\n");
            	currentLevel = 1;
            }
            else{
            	printf("Não é isso, deve ser o nome de uma pessoa com 3 letras..., vamos tente mais uma vez\n");
                scanf("%s", fala); 
            }
        while (fala!="ana"){
                printf("Não é isso, deve ser o nome de uma pessoa com 3 letras..., vamos tente mais uma vez\n");
                scanf("%s", fala); 
            }
                printf("Parabéns você acertou\n");
                currentLevel = 2;
                break; 
*/
		}
		while (currentLevel == 5) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
			printf("Parece só mais um quarto de uma jovem normal, mas vale a pena investigar mais a fundo...\n");
            printf("Oque você quer fazer?\n");
            printf("1 = Olhar o computador\n");
            printf("2 = Olhar o armário\n");
            printf("3 = Voltar para o início\n");
			choice = scanint();	//Scans the player's choice
			switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					currentLevel = 6;
					break;
				case 2:
					currentLevel = 7;
					break;
				case 3:
					currentLevel = 1;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
		while (currentLevel == 6) {	//Checks the currentLevel variable to determine what level to play next
			printf("Email recebido: Está na hora, faça ou sofrerá as consequências!.\n");
            printf("Ass. B.B\n");
            printf("Parece que a filha foi forçada á isso, por alguem chamado B.B, esse nome é familiar para mim...\n");
            printf("Oque você quer fazer a seguir?\n");
            printf("1 = olhar o armário\n");
            printf("2 = Voltar para o início\n");
			choice = scanint();	//Scans the player's choice
			switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					currentLevel = 7;
					break;
				case 2:
					currentLevel = 1;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
		while (currentLevel == 7) {	//Checks the currentLevel variable to determine what level to play next
			printf("Vasculhando as roupas*, opa, parece que há um papel:\n");
            printf("a última vítima: quatro de janeiro, três de fevereiro, um de abril.\n");
            printf("Você consegue advinhar qual é a próxima vítima?\n");
            printf("1- eva\n");
            printf("2- iago\n");
            printf("3- juriscreide\n");
            choice = scanint();
            switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					printf("Parabéns você acertou\n");
					currentLevel = 9;
					break;
				case 2:
					printf("Você errou infelizmente\n");
					currentLevel = 7;
					break;
				case 3:
					printf("Você errou infelizmente\n");
					currentLevel = 7;
				default:
					watchOut = 1;
					break;
				}
           /* char *vitima;
            scanf("%s", vitima);
            while (vitima!="eva"){
                printf("Não é isso, deve ser o nome de uma pessoa com 3 letras..., vamos tente mais uma vez\n");
                scanf("%s", vitima); 
            }
            if (vitima="eva");
                printf("Parabéns você acertou\n");
                currentLevel = 2;
                break;
			}*/
		}
		while (currentLevel == 8) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
			printf("Hmmm parece não haver nada demais, apenas uma panela com um saco vazio de chá\n");
            printf("Oque você quer fazer?\n");
            printf("1 = Voltar ao início.\n");
			choice = scanint();	//Scans the player's choice
			switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					currentLevel = 1;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
		while (currentLevel == 9){
			printObj(watchOut);
			watchOut = 0;
			printf("Parabéns Você acertou\n");
			printf("Oque você quer fazer?\n");
			printf("1 = Voltar ao início.\n");
			choice = scanint();
			switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					currentLevel = 1;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
	}
}
