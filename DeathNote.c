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
  
    system("sleep 03");
}

void message() {
    system("clear");
    printf("                                            Parte One: Message \n\n");
    printf("Agosto 14, 2002 às 8:15 am\n");
    printf("A agente do FBI Naomi Misora acorda de uma noite extremamente cansativa onde havia passado horas de rodagem em movimento, em uma vã tentativa de eliminar o stress.\n");getchar();
    printf("“Misora lentamente se levantou da cama”\n");getchar();
    printf("Com a intenção de se lavar para retirar o suor da noite anterior, mas depois observou que o laptop na mesa dela estava, por algum motivo, ligado. Ela não se lembrava do fato de ter ou não ligado seu laptop na noite passada. Mas a proteção de tela estava correndo, não tinha outra explicação para isso.\n");getchar();
    printf("“Misora sentou-se na mesa e de esquerda sacudiu o mouse”\n");getchar();
    printf("     ,.\n");
    printf(" __.'_\n");
    printf("|__|__|\n");
    printf("|     |  >>>>>\n");
    printf("|-___-|  >>>>>\n");
    printf("'.___.'\n");getchar();
    printf("“Proteção de Tela Removida”\n");getchar(); // Colocar Charada para desbloquear a tela
    printf("Misora se sente ainda mais confusa, o principal programa de e-mail foi usado e sinalizava uma mensagem\n\n");getchar();
    printf("             ________________________________________________\n");
    printf("            /                                                \n");   
    printf("           |    _________________________________________     |\n");   
    printf("           |   |                                         |    |\n");   
    printf("           |   |  Novos Emails Recebidos!                |    |\n");   
    printf("           |   |                                         |    |\n");   
    printf("           |   |                                         |    |\n");   
    printf("           |   |                                         |    |\n");   
    printf("           |   |                                         |    |\n");   
    printf("           |   |                                         |    |\n");   
    printf("           |   |                                         |    |\n");   
    printf("           |   |                                         |    |\n");   
    printf("           |   |                                         |    |\n");   
    printf("           |   |                                         |    |\n");   
    printf("           |   |                                         |    |\n");   
    printf("           |   |                                         |    |\n");   
    printf("           |   |_________________________________________|    |\n");   
    printf("           |                                                  |\n");   
    printf("             _________________________________________________/\n");   
    printf("                    ___________________________________/\n");   
    printf("                ___________________________________________\n");   
    printf("             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_\n");   
    printf("          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_\n");   
    printf("       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_\n");   
    printf("    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_\n");   
    printf(" _-'.-.-.-.-.-. .---.-. .-------------------------. .-.---. .---.-.-.-.`-_\n");   
    printf(":-------------------------------------------------------------------------:\n");   
    printf("`---._.-------------------------------------------------------------._.---'\n");   
    printf("\n");   
    printf("\n");   
    printf("\n");   

    printf(" - É possível que eu estivesse dormindo com meu computador ligado, mas também dormi no meio do controle de e-mail?\n");getchar();
    printf("“Nova caixa de entrada de correio. Nova Mensagem, por Raye Penber.”\n");getchar();
    printf("Este era o nome do namorado de Misora, logo sem excitação ela abriu a mensagem…\n");getchar();
    printf("Naomi Misora.\n\n");
    printf("Peço desculpas por tê-la contatado desta maneira.\n\n");
    printf("Gostaria de pedir a sua ajuda para resolver um caso.\n");
    printf("Se você quiser me ajudar, por favor conecte-se no terceiro bloco da terceira sessão do servidor “Funny Disk”, 14 de agosto, às nove horas da manhã. A linha será aberta exatamente por cinco minutos (por favor, interrompa o firewall você mesmo)\n\n");
    printf("L\n\n");    
    printf("Ps: Para contatos, tomei a liberdade de pedir o endereço de seu amigo. Esta foi a mais fácil e mais segura forma de contato com você, me perdoe. Qualquer decisão que você faça, eu preciso que você destrua esta máquina dentro de vinte e quatro horas depois de ler esta mensagem.\n\n");
    printf("...\n");getchar();
    printf("Após ler e reler a mensagem inteira Misora, verificou o nome do remetente, uma vez mais.\n");
    printf("L\n");getchar();
    printf("Ela cogitou a possibilidade de ser uma pegadinha entre os agentes do FBI, mas logo se lembrou de ter ouvido coisas horríveis sobre oque havia acontecido com os detetives que tentavam se passar por L. Era melhor dizer que ninguém se atreveria a usar seu nome, mesmo em tom de brincadeira. Por isso.\n");getchar();
    printf(" - Porque (murmurando)\n");getchar();
    printf("Logo ela vai tomar banho, lavando o cansaço da noite anterior. Enxuga os cabelos longos negros e bebe um copo de café quente.\n");getchar();
    printf("Nenhum agente do FBI jamais consideraria recusar um pedido de L. Mas neste momento Misora não tinha opinião particularmente positiva ao grande detetive, então ela teve que fingir a hesitar, mesmo se fazendo sentir-se melhor. Considerando a personalidade dela, a razão para isso é clara. Parece óbvio a razão pela qual seu laptop estava ligado, era porque L havia hackeado, e era mais do que provável que estava nem um pouco deprimida com o fato de que teria que destruir por alguma razão, no caso o seu computador, o'que tinha comprado apenas um mês antes.\n");getchar();
    printf(" - Não vou cuidar… quero dizer,  eu quero, mas…\n");getchar();
    printf("Ela não tinha escolha.\n");getchar();
    printf("8: 50\n");getchar();
    printf("Misora estava sentada na frente de seu laptop, que agora tinha menos de 23 horas de vida, e começou a seguir as instruções de L. Ela tinha aprendido o básico de computação como parte de seu treinamento para o FBI.\n");getchar();
    //minigame para acessar o servidor de L
    printf("“Acesso ao servidor Concedido”\n");getchar();
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⣀⣴⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣤⣤⣀⣀⡀⠀⠀⠀⣀⣀⣤⣴⠞⠁⠀⠀⠀⠀⣀⣤⣴⣶⣾⣿⠿⠛⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⣠⣴⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⠋⠀⠀⠀⢀⣴⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⢀⣿⣿⠟⠉⠁⠀⠈⠉⠉⠛⠛⠻⠿⠿⠿⠿⠿⠟⠛⠉⢁⣼⣿⣿⣿⠃⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⣼⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⣿⠃⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⡇⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⣤⣤⣤⣼⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠛⠛⠛⠛⠛⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣶⣶⣶⣦⣤⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠙⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⣾⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⢸⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⢠⣿⣿⣿⣿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⠃⠀⠀⠀⣠⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠃⠀⠀⢀⣴⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⠃⠀⠀⣠⣾⡿⠛⠁⠀⠀⢀⣀⣀⣠⣤⣤⣤⣤⣤⣤⣤⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⡿⠃⠀⣠⣾⣟⣋⣤⣤⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⡿⠁⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣀⠀⠀⣠⣴⣷⡄\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣟⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⣿⣿⣿⠿⠿⠟⠛⠛⠛⠛⠉⠉⠉⠙⠛⠛⠛⠻⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⠿⠛⠋⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠠⣶⠿⠛⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀\n");
    printf("            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");getchar();
    printf(" - Naomi Misora\n");getchar();
    printf("    Uma voz sintetizada que veio das caixas de som do laptop, mas essa era a voz identificada como sendo a de L em cada departamento investigativo no mundo. Misora já tinha a ouvido várias vezes antes, mas esta foi a primeira vez que foi dirigida diretamente a ela.  Ela sentiu uma sensação estranha como se o sentimento de seu nome fosse para uma TV - não que ela nunca tivesse tentado a experiência, mas esta era a forma como imaginava.\n");getchar();
    printf(" - Eu sou L.\n");getchar();
    printf(" - Olá\n");getchar();
    printf(" Misora logo percebeu que era inútil pois seu laptop não tinha microfone instalado, e não havia como ele ouvir, então, ela começou a escrever:\n");getchar();
    printf("“Sou Naomi Misora. É uma honra falar com você, L”.\n");getchar();
    printf("    Se a conexão foi estabelecida, então ele deve ter recebido a mensagem.\n");getchar();
    printf(" - Naomi Misora, você está muito familiarizada com o caso dos assassinatos em Los Angeles, sabe do que eu estou falando?\n");getchar();
    printf("    L foi direto ao ponto, sem atender às suas palavras. Presumivelmente porque ele queria completar a notificação antes das 9:05, mas esta maneira e essa atitude incomodou a Misora. Como se fosse assumido  que iria cooperar com ele, não pareceu mostrar respeito por seu orgulho. Assim, a Misora estaria autorizada a responder com um tom igualmente desdenhoso.\n");getchar();
    printf("“Eu não sou tão esperta para acompanhar todo o caso de homicídios em Los Angeles.”\n");getchar();
    printf(" - Ah, é? Eu faço.\n");getchar();
    printf("    Ele respondeu com um sarcasmo mas com certo orgulho.\n");getchar();
    printf(" - Refiro-me à série de assassinatos, a terceira vítima foi encontrada ontem. Acho que vai haver outras vítimas. A HNN News chama o caso com o nome de “Os assassinatos de Wara Ningyo.”\n");getchar();
    printf(" - Os assassinatos de Wara Ningyo?\n");getchar();
    printf("    Ela não tinha ouvido falar. Estava de férias e havia deliberadamente evitado o tipo de notícia. A Misora viveu no Japão até o diploma de ensino médio e, em seguida, o termo era familiar, mas ouvi-lo dizer essas palavras em Inglês, deu uma sensação de estranheza.\n");getchar();
    printf(" - Eu gostaria de resolver o caso. Eu preciso parar o assassino. Mas a sua ajuda para esta situação é vital, Naomi Misora.\n");getchar();
    printf(" “Porque eu?”\n");getchar();
    printf("    Isto poderia significar “Por que você precisa da minha ajuda” ou “Por que devo ajudar você?”. Mas L, sem hesitação, considerou o primeiro significado. O sarcasmo pareceu desaparecer de suas palavras.\n");getchar();
    printf(" Naturalmente, porque você é uma pesquisadora qualificada, Naomi Misora.\n");getchar();
    printf(" “Eu estou de licença…”\n");getchar();
    printf(" - Eu sei. Não Acha apropiado?\n");getchar();
    printf(" - Três vítimas\n");getchar();
    printf("    Claro, depende da vítima, mas o'que L tinha dito, este caso ainda não havia alcançado  os níveis necessários para solicitar a intervenção do FBI. Ela queria simplesmente assumir que foi por isso que ele tinha chegado por sua vez de ir para o diretor do FBI, mas tudo aconteceu muito de repente, Não havia tempo suficiente para descobrir por que L teria que envolvê-la em um caso tão pouco para chegar ao FBI. Enfim imaginou que ele não responderia a esta questão através do computador.\n");getchar();
    printf(" “Misora olha para seu relógio, ainda faltava um minuto”\n");getchar();
    printf(" “Ok, vou ajudar da maneira que eu puder”\n");getchar();
    printf("        Suas palavras soaram com um tom muito grato. Mas talvez a culpa poderia ser invocada para a natureza artificial da sua voz.\n");getchar();
    printf(" - Deixe-me explicar como você entrará em contato no futuro. Não temos tempo, vou ser breve. Então…\n");getchar();
    printf("    Primeiro Ela foi informada dos detalhes básicos do Los Angeles B.B Murder Cases.\n");getchar();
    printf("    Em 31 de Julho de 2002, no quarto de uma casa pequena em Hollywood 's Insist Street, um homem chamado Believe Bridesmaid foi morto. Foi estrangulado. Primeiro ficou inconsciente com alguma droga e logo estrangulado por trás, com um tipo de corda. Havia sinais de luta, apesar de tudo, um crime bem executado.\n");getchar();
    printf("    Em 4 de agosto de 2002, no centro, em um apartamento na Terceira Avenida, a vítima foi uma menina, chamada Quarter Queen. Foi espancada até a morte, seu crânio tinha sido cedido na testa por algo longo e duro. A segunda vítima também havia sido drogada, rendida inconsciente, até o momento da morte.\n");getchar();
    printf("    A relação dos dois crimes era evidente nas cenas do crime. Havia bonecos vodu de palha pregados nas paredes em ambos os lugares. Esses bonecos eram especificamente conhecidos como Wara Ningyo. Quatro deles na Insist Street, três deles na Terceira Avenida, pregados nas paredes. O problema é que não havia nada que relacionasse as duas vítimas dos assassinatos. Um elo perdido.\n");getchar();
    printf("    Nove dias mais tarde, 13 de Agosto de 2002, ocorreu o terceiro assasinato, com dois Wara Ningyo na parede. Havia um boneco sobre cada assasinato. O terceiro assasinato ocorreu em West Los Angeles, em uma cidade perto do Metro Glass. Estação de Comboios, e o nome da vítima era Backyard Bottom Lash. A vítima era outra mulher e mais uma vez não houve ligações entre Believe Bridesmaid e de Quater Queen depois de tudo. Também não é provável que eles encontrariam de qualquer forma. ela morreu sangrando, hemorragia maciça. Estrangulamento, espancamento e finalmente esfaqueamento, cada tempo um método diferente de matar, dando a impressão que ele estava procurando  novamente algo antinatural com cada assasinato. E não deixando pistas em cada cena do Crime. O assassino era muito melhor do que a polícia.\n");getchar();
    printf("    Além dos Wara Ningyo havia outra semelhança entre as cenas - todas foram a portas fechadas. Os detetives que investigaram o caso não deram importância a este aspecto particular do caso… mas foi a primeira coisa que chamou a atenção de Naomi Misora.\n");getchar();
    printf("    Quando Misora começou a investigar o caso estava sem distintivo  e sua arma havia sido levada embora, ela estava não como um agente, mas de forma individual. Semelhante a L, ela não era boa em trabalhar em grupo, suas habilidades foram mais bem sucedidas quando fugiu das limitações da organização e trabalho - tal fato que poderia explicar por que ela tinha uma pitada de ressentimento com seus sentimentos em relação a L.\n");getchar();
    system("clear");
    printf("Em 15 de agosto, após o meio-dia, Naomi Misora estava em Hollywood 's Insist Street, a cena do primeiro assasinato.\n");getchar();
    printf("“Misora tirou o celular de sua bolsa e liga para o número que lhe foi dado”\n");getchar();
    //minigame pra desbloquear o celular e ligar
    printf("   _\n");
    printf("  | |\n");
    printf("  |_|\n");
    printf("  /_     | /\n");
    printf(".-""""-----.----.\n");
    printf("|          U    |\n");
    printf("|               |\n");
    printf("| ====o======== |\n");
    printf("| ============= |\n");
    printf("|               |\n");
    printf("|_______________|\n");
    printf("| ________GF337 |\n");
    printf("||   Calling   ||\n");
    printf("||             ||\n");
    printf("||_____________||\n");
    printf("|__.---""""---._|\n");
    printf("|---------------|\n");
    printf("|[Yes][(|)][ No]|\n");
    printf("| ___  ___  ___ |\n");
    printf("|[<-'][CLR][.->]|\n");
    printf("| ___  ___  ___ |\n");
    printf("|[1__][2__][3__]|\n");
    printf("| ___  ___  ___ |\n");
    printf("|[4__][5__][6__]|\n");
    printf("| ___  ___  ___ |\n");
    printf("|[7__][8__][9__]|\n");
    printf("| ___  ___  ___ |\n");
    printf("|[*__][0__][#__]|\n");
    printf("`--------------'\n");
    printf("{__|""|_______'-\n");
    printf("`---------------'\n");getchar();
    printf("Ela foi informada que foi cinco vezes criptografado e completamente seguro.\n");getchar();
    printf(" - L, cheguei a cena do crime\n");getchar();
    printf(" - Bem.\n");getchar();
    printf("    como se esperasse alguma coisa dela\n");getchar();
    printf(" - O'Que devo fazer?\n");getchar();
    printf(" - Naomi Misora você está dentro ou fora do prédio?\n");getchar();
    printf(" - Fora. Cheguei ao local do crime, mas ainda não entrei.\n");getchar();
    printf(" - Então, por favor entre. Devo informá-la que está aberta. Eu preparei a situação.\n");getchar();
    printf(" - Obrigada\n");getchar();
    printf("Ela abriu a porta e entrou na casa.\n");getchar();
    printf("                           ====\n");
    printf("                           !!!!\n");
    printf("      ==========================\n");
    printf("    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("  ||      _____          _____    ||\n");
    printf("  ||      | | |          | | |    ||\n");
    printf("  ||      |-|-|          |-|-|    ||\n");
    printf("  ||      #####          #####    ||\n");
    printf("  ||                              ||\n");
    printf("  ||      _____   ____   _____    ||\n");
    printf("  ||      | | |   @@@@   | | |    ||\n");
    printf("  ||      |-|-|   @@@@   |-|-|    ||\n");
    printf("  ||      #####   @@*@   #####    ||\n");
    printf("  ||              @@@@            ||\n");
    printf("******************____****************\n");
    printf("**************************************\n");getchar();
    printf("                 .\n");
    printf("               .' `.\n");
    printf("             .' .'. `.\n");
    printf("           .' .'   `. `. \n");
    printf("         .' .'       `. `.\n");
    printf("       .' .'           `. `.\n");
    printf("     .' .'|  _________  |`. `.\n");
    printf("      `'| | |         | | |`'\n");
    printf("        | | |   _ _   | | |\n");
    printf("        | | |  ( | )  } | |\n");
    printf("        | | |     /   | | |\n");
    printf("        | | |         | | |\n");
    printf("        | | |         | | |\n");
    printf("        | |,+'        | | |\n");
    printf("        | | |         | | |\n");
    printf("        | | |         | | |\n");
    printf("        | | |         | | |\n");
    printf("        | | |         | | |\n");
    printf("        | | |         | | |\n");
    printf("        | | |         | | |\n");
    printf("        | | |         } | |\n");
    printf("        | | |         | | |\n");
    printf(",,,,,,,,|,|,|,,,,,,,,,|,|,|,,,,,,,,,,,,,,\n");getchar();
    //talvez um minigame pra abrir a porta
    printf(" - Mas, L…\n");getchar();
    printf(" - O'Que?\n");getchar();
    printf(" - De acordo com os documentos que recebi ontem - não que não esteja claro, mas a polícia já havia examinado a cena?\n");getchar();
    printf(" - Sim\n");getchar();
    printf(" - Eu não sei como você fez, mas você já tem os relatórios da polícia, a este respeito?\n");getchar();
    printf(" - Sim.\n");getchar();
    printf("“...”\n");getchar();
    printf(" - Não foi muito útil\n");getchar();
    printf(" - Assim, não há nenhuma razão para eu estar aqui?\n");getchar();
    printf(" - Não. Eu espero que você seja capaz de encontrar oque a polícia não conseguiu encontrar.\n");getchar();
    printf(" - Bem… é bastante claro. Ou pelo menos um pouco óbvio. Mas não explica nada.\n");getchar();
    printf(" – Eles dizem que você deve visitar a cena do crime uma centena de vezes, por isso é praticamente inútil. Isso foi ao mesmo tempo uma perda de tempo, assim que é possível uma coisa que vem à tona. Naomi Misora, a primeira coisa que devemos pensar sobre este caso é a conexão entre as vítimas. O que se assemelha entre Believe Bridesmaid, Quarter Queen, e a nova vítima, Backyard Bottomslash? Ou não há nenhuma ligação e os assassinatos estão completamente ao acaso? Mas mesmo se eles eram aleatórios, deve haver algo lógico para que o assassino escolhesse suas vítimas. O que eu estou pedindo, Misora, é encontrar esse elo perdido.\n");getchar();
    printf(" - Eu entendi…\n");getchar();
    printf(" Não era verdade, mas ela tinha começado a entender que a discussão com ele não iria parar de ser evasiva e dizer a ela o que ele queria saber, no momento, então ela decidiu não fazer perguntas demais. Além disso, ela encontrou o quarto. A porta estava aberta para dentro e, no momento da primeira visita da polícia, havia sido trancado.\n");getchar();
    printf(" Um quarto fechado.\n");getchar();
    printf(" Não era um quarto muito grande, mas não havia muita mobília. Havia uma grande cama no centro do espaço, mas havia apenas uma mobília presente que era uma biblioteca. As prateleiras preenchidas principalmente com livros de bricolage, com diferentes atividades de tempos e famosos quadrinhos japoneses, sugerindo que ele usasse este quarto exclusivamente para relaxamento. Parecia ser o cara que separa o trabalho meticuloso da privacidade - um tipo raro de se encontrar entre os escritores freelance. Presumo que há algum tipo de estudo no segundo andar, pensou Misora, Olhando para o teto, Vou lá depois.\n");getchar();
    //talvez criar uma ascii art do quarto do livro
    printf(" - No entanto, Naomi Misora. O que você acha sobre o culpado dos assassinatos? Gostaria muito de ouvir seus pensamentos pessoais sobre ele.\n");getchar();
    printf(" - Duvido que meus pensamentos possam ajudar você de alguma maneira, L…\n");getchar();
    printf(" - Todos os pensamentos são úteis.\n");getchar();
    printf("“...”\n");getchar();
    printf("Oh?  Misora pensou por um momento.\n");getchar();
    printf(" - É anormal.\n");getchar();
    printf("    Esta foi a principal impressão que ela tinha no dia anterior, após a leitura do arquivo.\n");getchar();
    printf(" - Não só porque ele matou 3 pessoas, mas todas as coisas que ele fez levou a essa impressão.\n");getchar();
    printf(" - Por exemplo?\n");getchar();
    printf(" - Por exemplo… impressões digitais. Não encontrei uma pegada única em qualquer local do crime.  Foram cuidadosamente limpos.\n");getchar();
    printf(" - Verdade… mas Naomi Misora, certamente, não deixa impressões digitais são as técnicas mais básicas de criminosos.\n");getchar();
    printf(" -  Não nesta situação.\n");getchar();
    printf("    Disse Misora irritada, ela sabia que ele entendia onde ela queria chegar e estava certa de que ele estava testando suas habilidades, mas de forma alguma, dizia. Um teste para ver se ela poderia ser útil para a cena do crime.\n");getchar();
    printf(" - Se você não quer deixar impressões digitais, a maioria das pessoas usam luvas - ou simplesmente ele não havia tocado… mas esse cara tem aparentemente limpo cada impressão digital em casa. Em todas as três cenas. Inicialmente eu pensei que, se ele foi à casa da vítima por diversas vezes, não teria ideia qual as coisas havia tocado e o que não havia, mas depois de ler que ele desaparafusou as lâmpadas e limpava as maçanetas, vira uma história completamente diferente. Quanto mais você pode chamá-lo, se não anormal?\n");getchar();
    printf(" - Eu concordo. \n");getchar();
    printf("“...”\n");getchar();
    printf("    Entendeu agora?\n");getchar();
    printf(" - L, se ele tomou tais precauções extremas, então duvido que eu seria capaz de encontrar algo novo aqui, Alguém como ele não deve ter cometido um erro.\n");getchar();
    printf(" - Normalmente, esse tipo de investigação começa por encontrar o erro do criminoso, em seguida preencher o puzzle a partir desse ponto, mas neste caso, eu duvido que vamos encontrar alguma coisa.\n");getchar();
    printf(" - Sim… algo deliberadamente deixado para trás. E se os detetives da polícia simplesmente não perceberam isso, então podemos ter uma chance.\n");getchar();
    printf("    Os Wara Ningyo deixados na parede e as portas fechadas… não foram erros, mas sim vestígios deixados pelo assassino. As portas fechadas geralmente indicam suiçidio, mas nenhuma das vítimas jamais poderia ser uma situação que indicasse suiçidio. O'Que significa que não havia nada a ganhar com a criação de quartos fechados. Quanto aos Wara Ningyo ela não tinha ideia do que significava. eles haviam sido usados para amaldiçoar o Japão, mas não havia relação aos crimes.\n");getchar();
    printf("    Misora fechou a porta atrás dela e olhou para cada posição em que os bonecos foram pregados nas paredes. Havia quatro. Um em cada uma das quatro paredes da sala quadrada. Era possível dizer aonde estavam pois haviam buracos nas paredes. Ela tirou seis fotografias do saco. Uma de cada uma das quatro paredes. Um mostrando a vítima, Believe Bridesmaid, deitado de costas sobre a cama. Esta imagem mostrou claramente os sinais da corda no pescoço.\n");getchar();
    printf("    E finalmente, uma última foto.\n");getchar();
    printf("    Esta não pertencia a cena, uma fotografia do peito nu de Believe Bridesmaid, tirada durante a necropsia. Havia um grande número de cortes sobre ele, que pareceu ser esculpido na sua carne com uma faca. Não foram profundas, mas foram em todas as direções. Segundo o relatório havia sido feita após a morte da vítima.\n");getchar();
    printf(" - Falando em geral, quando o assassino se envolve neste tipo de desfiguração do corpo inexplicável significa que ele têm um profundo ressentimento contra a vítima…\n");getchar();
    printf(" - Mas Misora, isso não explica a ligação com o segundo e terceiro assasinato. Ambos os outros órgãos também foram danificados em um caminho que não tem ligações diretas com a causa da morte, de fato, o dano parece ter se intensificado a cada assasinato.\n");getchar();
    printf(" - É possível que Bridesmaid foi o único por quem ele teve rancor e os outros dois assassinatos foram projetados para mascarar isso. Ou talvez não era Bridesmaid, mas um dos outros dois... ou dois dos três, e o terceiro foi uma camuflagem. A desfiguração poderia aumentar gradualmente, pois a camuflagem, o...\n");getchar();
    printf(" - Você acha que o assassino está apenas fingindo matar indiscriminadamente?\n");getchar();
    printf(" - Não. Esta é apenas uma hipótese que eu levo em consideração. Esta ideia explicaria os Wara Ningyo. Quer dizer, talvez ele tenha deliberadamente deixado lá para provar que os três haviam sido mortos pelo mesmo homem, e as portas poderiam ter sido bloqueadas por alguma razão. Nesse caso, o movimento de Hollywood para o centro, e depois para o oeste, poderia ser visto como um meio para confundir a investigação. Quanto mais pessoas ligadas ao caso, mais caótico fica o inquérito... e a escolha de uma menina como uma segunda vítima pode ter sido feito deliberadamente para fazê-lo parecer um psicopata\n");getchar();
    printf(" - Partindo do princípio de que é anormal… bem, já a ideia de fazer isso é muito comum.\n");getchar();
    printf("    Misora ficou surpresa ao ouvi-lo expressar sentimentos humanos. A emoção que sentia era muito similar.\n");getchar();
    printf(" - Assim, L, sinto-me ridícula em tentar imaginar uma ligação entre as vítimas. Acho que a polícia está fazendo um bom trabalho e, francamente, considero que alguém conhecia cada um deles parece mais útil. Quer dizer, a terceira vítima, Backyard Bottom Lash, deve estar envolvida em qualquer tipo de negócio com o banco.\n");getchar();
    printf("\n");getchar();
    printf("\n");getchar();
    printf("\n");getchar();
    printf("\n");getchar();
    printf("\n");getchar();
    printf("\n");getchar();

}

int main () {
    nomejogo();
    carregando();
    prologo();
    carregando();
    parteone();
    message();
}