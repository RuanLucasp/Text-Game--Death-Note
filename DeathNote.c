#include <stdio.h>
#include <stdlib.h>

void centralizar () {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

void carregando() {

       int i;
       system("clear"); // Limpar a tela
       centralizar(); 
       printf("                                                       CARREGANDO "); // Exibir a Palavra Loading na tela em branco

       for(i=0;i < 3; i++){ // abrir um laço de repetição com for
       system("sleep 01"); // pausa de 1 segundo
       printf("o "); // escrever 1 "." na tela
       fflush(stdout); // atualizar a tela
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

void prologo () {
    system("clear");
    printf("                                            PRÓLOGO: \n\n");
    printf("Há um serial killer à solta em Los Angeles e as autoridades locais precisam de ajuda rápida. Por alguma razão, o assassino foi deixando uma série de pistas em cada cena do crime.\n");getchar();
    printf("Cada um desses indícios parece um roteiro indecifrável para o próximo assasinato.\n");getchar();
    printf("Na cena vem L, um detetive misterioso que nunca mostrou seu rosto em público. Nunca foi abordado um caso onde ele não foi capaz de resolvê-lo.\n");getchar();
    printf("Mas desta vez ele precisa de ajuda.\n");getchar();
    printf("Utilizando os serviços de uma agente do FBI chamada Naomi Misora, L inicia uma busca por vestígios em toda Califórnia. Pra ela logo se torna evidente que a matança é um enigma\n");getchar();
    printf("psicótico projetado especificamente para engajar L em uma batalha de inteligência. Uma verdadeira batalha de raciocínio entre assassino e investigador, onde Misora se encontra\n");getchar();
    printf("entre eles, e, onde Misora começa a navegar entre os corpos e as pistas para resolver o caso de homicídios B.B de Los Angeles.\n\n");getchar();

}

void parteone()
{
    system("clear");
    centralizar();
    printf("         ██▓███   ▄▄▄       ██▀███  ▄▄▄█████▓    ▒█████   ███▄    █ ▓█████     ███▄ ▄███▓▓█████   ██████   ██████  ▄▄▄        ▄████ ▓█████ \n");
    printf("        ▓██░  ██▒▒████▄    ▓██ ▒ ██▒▓  ██▒ ▓▒   ▒██▒  ██▒ ██ ▀█   █ ▓█   ▀    ▓██▒▀█▀ ██▒▓█   ▀ ▒██    ▒ ▒██    ▒ ▒████▄     ██▒ ▀█▒▓█   ▀ \n");
    printf("        ▓██░ ██▓▒▒██  ▀█▄  ▓██ ░▄█ ▒▒ ▓██░ ▒░   ▒██░  ██▒▓██  ▀█ ██▒▒███      ▓██    ▓██░▒███   ░ ▓██▄   ░ ▓██▄   ▒██  ▀█▄  ▒██░▄▄▄░▒███   \n");
    printf("        ▒██▄█▓▒ ▒░██▄▄▄▄██ ▒██▀▀█▄  ░ ▓██▓ ░    ▒██   ██░▓██▒  ▐▌██▒▒▓█  ▄    ▒██    ▒██ ▒▓█  ▄   ▒   ██▒  ▒   ██▒░██▄▄▄▄██ ░▓█  ██▓▒▓█  ▄ \n");
    printf("        ▒██▒ ░  ░ ▓█   ▓██▒░██▓ ▒██▒  ▒██▒ ░    ░ ████▓▒░▒██░   ▓██░░▒████▒   ▒██▒   ░██▒░▒████▒▒██████▒▒▒██████▒▒ ▓█   ▓██▒░▒▓███▀▒░▒████▒\n");
    printf("        ▒▓▒░ ░  ░ ▒▒   ▓▒█░░ ▒▓ ░▒▓░  ▒ ░░      ░ ▒░▒░▒░ ░ ▒░   ▒ ▒ ░░ ▒░ ░   ░ ▒░   ░  ░░░ ▒░ ░▒ ▒▓▒ ▒ ░▒ ▒▓▒ ▒ ░ ▒▒   ▓▒█░ ░▒   ▒ ░░ ▒░ ░\n");
    printf("        ░▒ ░       ▒   ▒▒ ░  ░▒ ░ ▒░    ░         ░ ▒ ▒░ ░ ░░   ░ ▒░ ░ ░  ░   ░  ░      ░ ░ ░  ░░ ░▒  ░ ░░ ░▒  ░ ░  ▒   ▒▒ ░  ░   ░  ░ ░  ░\n");
    printf("        ░░         ░   ▒     ░░   ░   ░         ░ ░ ░ ▒     ░   ░ ░    ░      ░      ░      ░   ░  ░  ░  ░  ░  ░    ░   ▒   ░ ░   ░    ░   \n");
    printf("                       ░  ░   ░                     ░ ░           ░    ░  ░          ░      ░  ░      ░        ░        ░  ░      ░    ░  ░\n");
    printf("                                                                                                                                           \n");
  
    system("sleep 05");
}

int main () {
    nomejogo();
    carregando();
    prologo();
    parteone();
}
