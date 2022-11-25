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
		printf("\tAtenção! Você precisa escrever um número que faça sentido! Tente novamente!\n\n");
	}

void centralizar()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

void carregando()
{

    int i;
    system("clear"); // Limpar a tela
    centralizar();
    printf("                                                       CARREGANDO "); // Exibir a Palavra Loading na tela em branco

    for (i = 0; i < 3; i++)
    {                       // abrir um laço de repetição com for
        system("sleep 01"); // pausa de 1 segundo
        printf("o ");       // escrever 1 "." na tela
        fflush(stdout);     // atualizar a tela
        system("sleep 01");
    }
}

void nomejogo()
{
    system("clear");
    centralizar();
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

    system("sleep 05");
}


int main(void) {
	//Declaring general variables
	int choice = 0, currentLevel = 0, game = 0;
	int watchOut = 0;
	//Introduction
	while (game ==  0) {	//Keeps looping the game until the end, continuosly checking for every level
		while (currentLevel == 0) {
			nomejogo();
    		carregando();
    		system("clear");
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
				printf("1 = Iniciar o Jogo\n");
				choice = scanint();
			}
			currentLevel = 1;
		}
		while (currentLevel == 1) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
			printf("Seu objetivo é descobri quem foi o culpado deste sequestro e o próximo alvo do assasino\n");
			printf("Você está dentro da casa de da vítima que foi sequestrada, para onde deseja ir?\n\n");
			printf("1 = Vá para a sala de estar\n");
			printf("2 = Vá para o quarto da filha da vítima\n");
			printf("3 = Vá para a a cozinha\n");
			printf("4 = Se voce ja cumpriu seu objetivo\n");
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
				case 4:
					currentLevel = 9;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
		while (currentLevel == 2) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
			printf("A sala parece um pouco bagunçada e a tv ainda está ligada.\n\n");
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
            printf("Parece que um dos cadernos está faltando uma página que foi rasgada, isso pode ser útil.\n\n");
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
			printf("Oque?!, há um bilhete embaixo do sofá, deve ter sido deixado pela vítima\n\n");
            printf("Dois de março, Dois de Janeiro, Primeiro de Agosto\n");
            printf("Isso deve significar alguma coisa, você consegue descobrir oque é?\n");
            printf("1- Ana\n");
            printf("2- Iago\n");
            printf("3- Juriscreide\n");
            choice = scanint();
            switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					printf("Ana, então esse é o nome do culpado, certo vamos prosseguir...\n");
					currentLevel = 1;
					break;
				case 2:
					printf("Iago, então esse é o nome do culpado, certo vamos prosseguir...\n");
					currentLevel = 1;
					break;
				case 3:
					printf("Juriscreide, então esse é o nome do culpado, certo vamos prosseguir...\n");
					currentLevel = 1;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
		while (currentLevel == 5) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
			printf("Parece só mais um quarto de uma jovem normal, mas vale a pena investigar mais a fundo...\n\n");
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
            printf("Parece que a filha foi forçada á isso, por alguem chamado B.B, esse nome é familiar para mim...\n\n");
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
			printf("Vasculhando as roupas*, opa, parece que há um papel:\n\n");
            printf("a última vítima: quatro de janeiro, três de fevereiro, um de abril.\n");
            printf("Você consegue advinhar qual é a próxima vítima?\n");
            printf("1- Eva\n");
            printf("2- Tiaginho\n");
            printf("3- Pelé\n");
            choice = scanint();
            switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					printf("Eva, então esse é o nome da próxima vítima, certo vamos prosseguir...\n");
					currentLevel = 1;
					break;
				case 2:
					printf("Tiaginho, então esse é o nome da próxima vítima, certo vamos prosseguir...\n");
					currentLevel = 1;
					break;
				case 3:
					printf("Pelé, então esse é o nome da próxima vítima, certo vamos prosseguir...\n");
					currentLevel = 1;
				default:
					watchOut = 1;
					break;
				}
		}
		while (currentLevel == 8) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
			printf("Hmmm parece não haver nada demais, apenas uma panela com um saco vazio de chá\n\n");
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
			printf("Vamos lá então, quem é o culpado do sequestro e a próxima vítima, respectivamente?\n\n");
			printf("Selecione uma das opções \n");
			printf("1 = Renatinho15 e Luquinhas\n");
			printf("2 = Iago e Tiaginho\n");
			printf("3 = Pelé e Ronaldo\n");
			printf("4 = Caneta Azul e LuvadePedreiro\n");
			printf("5 = Ana e Eva\n");
			choice = scanint();
			switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					printf("Errou feio errou rude, tem de encontrar as pistas certas!\n");
					currentLevel = 1;
					break;
				case 2:
					printf("Errou feio errou rude, tem de encontrar as pistas certas!\n");
					currentLevel = 1;
					break;
				case 3:
					printf("Errou feio errou rude, tem de encontrar as pistas certas!\n");
					currentLevel = 1;
					break;
				case 4:
					printf("Errou feio errou rude, tem de encontrar as pistas certas!\n");
					currentLevel = 1;
					break;
				case 5:
					printf("Acertou a Mizeravi! agora prossigamos com o jogo!\n");
					currentLevel = 10;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
		while (currentLevel == 10) {
    		carregando();
    		system("clear");
    		printf("Então o culpado pelo sequestro foi Ana, a filha da vítima\n");
    		getchar();
    		printf("Mas segundo o que desbobri ela foi obrigada a fazer isso, por alguem chamado B.B\n");
    		getchar();
    		printf("B.B..., agora me lembrei, seu nome é Beyond BirthDay e ele cresceu comigo no Orfanato Wammy's House e tinhamos uma certa rivalidade\n");
    		getchar();
    		printf("Isso é um problema, B.B deve ter feito todos essas atrocidades para me desafiar...\n");
    		getchar();
    		printf("Certo então, desafio aceito!, vou encontrar B.B e impedir seus crimes de vez!\n");
    		getchar();
    		printf("Agora que sei quem é a próxima vítima, preciso saber onde ela será morta, devo continuar procurando pistas...\n");
    		getchar();
			system("clear");
			printf("A próxima vítima era um repórter freelancer e músico nas horas vagas que foi assasinado por envenenamento em casa.\n");
    		getchar();
			system("clear");
			printf("\nSe prepare para encontrar o criminoso!\nVamos continuar\n");
			printf("1 = Continuar o Jogo\n");
			choice = scanint();
			while (choice != 1) {
				printf("Preste atenção voce precisa escolher um número dentre as opções\n");
				printf("1 = Iniciar o Jogo\n");
				choice = scanint();
			}
			currentLevel = 11;
	}
	while (currentLevel == 11) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
			printf("Seu objetivo é descobri quem foi o culpado desse assasinato e onde ocorrerá o próximo assainato\n");
			printf("Você está dentro do apartamento do repórter músico, para onde deseja ir?\n\n");
			printf("1 = Vá para a sala de estar\n");
			printf("2 = Vá para estúdio de música\n");
			printf("3 = Vá para a a cozinha\n");
			printf("4 = Se voce ja cumpriu seu objetivo\n");
			choice = scanint();	//Scans the player's choice
			switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					currentLevel = 12;
					break;
				case 2:
					currentLevel = 5;
					break;
				case 3:
					currentLevel = 8;
					break;
				case 4:
					currentLevel = 9;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
		while (currentLevel == 12) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
			printf("A sala está aparentemente bem arrumada, nada fora do comum... aqui foi onde o cadáver dele foi achado jogado no chão\n\n");
			printf("Oque quer investigar?\n");
			printf("1 = Procurar na estante de discos\n");
			printf("2 = Investigar o sofá\n");
			printf("3 = Olhar o célular derrubado no chão\n");
			printf("4 = Voltar ao incício\n");
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
		while (currentLevel == 14) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
            printf("Olha só quantos discos... Nirvana, ACDC, Red Hot Chilli Peppers, Gun's Roses, é... aparentemente esse indivíduo tinha um ótimo gosto pra música.\n\n");
            printf("Parece que há um mp3 com uma música\n");
            printf("Você quer tocá-lo?\n");
            printf("1 = Tocar mp3\n");
            printf("2 = Voltar ao inicio\n"); 
			choice = scanint();	//Scans the player's choice
			switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					currentLevel = 15;
					break;
				case 2:
					currentLevel = 11;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
		while (currentLevel == 15) {	//Checks the currentLevel variable to determine what level to play next
			printObj(watchOut);
			watchOut = 0;
            printf("*Tocando Música* só escuto alguns beeps... nada de música... espera isso poderia ser código morse?\n\n");
            printf("Se eu anotar todos beeps em código morse tenho...\n");
            printf(". . . ");
            printf(".");
            printf("_ .");
            printf("_ .");
            printf(". _");
            printf("Você consegue decifrá-lo?\n");
            printf("1 = Robert\n");
            printf("2 = 40228922\n");
            printf("3 = Jessy\n");
            printf("4 = Senna\n"); 
			choice = scanint();	//Scans the player's choice
			switch(choice) {	//Sets the currentLevel variable according to where the player is supposed to go from the 'choice' variable
				case 1:
					currentLevel = 15;
					break;
				case 2:
					currentLevel = 11;
					break;
				default:
					watchOut = 1;
					break;	//Default message for when the player types in the wrong number
			}
		}
}
}
