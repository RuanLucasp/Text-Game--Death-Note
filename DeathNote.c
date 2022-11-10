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
    int testeUm = 0; //declarando e inicializando a variável de controle
  	while (testeUm != 2) // Testando a condição
  {
  	printf("PARA REMOVER A PROTEÇAO DE TELA. RESOLVA O TESTE:\n\n");
    printf("Examinando o padrão da série: 33, 31, 27, 25, 21; que número virá a seguir?\n"); 
    printf("Digite a resposta:\n");
    printf(" (1) - 24 | (2) - 19 | (3) - 17 | (4) - 16 | (5) - 20\n");
    scanf("%d", &testeUm);
  }  
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
   	printf(" - Não, eu não acho que nós vamos encontrá-lo. O que você acha se não foi um erro? Naomi Misora- Se não fosse um erro?\n");getchar();
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
    printf(" - Mas Misora – L interrompeu – Este não é o momento para discussões inúteis. Creio que em um futuro não muito distante haverá um quarto homicídio\n");getchar();
    printf(" - Mmm...\n");getchar();
    printf("	Tinha dito algo semelhante no dia anterior. Que haveria mais vítimas. Mas baseado em que? Com o assassino ainda longe, era uma possibilidade óbvia, mas quase parecia como se os assassinatos terminariam no terceiro. Tudo depende do capricho do assassino e qualquer detetive acharia difícil estabelecer uma probabilidade maior de cinqüenta-e-cinqüenta.\n");getchar();
    printf(" - O número de Wara Ningyo - disse L - Quatro onde está você, três no centro da cidade com a segunda vítima, e dois na terceira cena, a oeste de LA - um a menos em cada cena do crime.\n");getchar();
    printf(" - Sim, o'quê que tem?\n");getchar();
    printf("  - O número de bonecas está seguindo uma diminuição para um \n");getchar();
    printf("“...”\n");getchar();
    printf(" - Portanto, L… você acha que haverá dois outros assassinatos?\n");getchar();
    printf(" - Há mais de noventa por cento de chance. Eu diria que uma centena, mas há uma pequena chance de que alguma coisa aconteça com o assassino, que o impeça de continuar. Então eu diria que noventa e dois por cento. Mas Misora, se algo vier a acontecer, não haverá dois apenas um. Há apenas trinta por cento de chance de acontecer um quinto homicídio.\n");getchar();
    printf(" - Trinta por cento?  Quase uma gota. Porque? há ainda dois Wara Ningyo… se ele está usando para representar as suas vítimas…\n");getchar();
    printf(" - Mas nesse caso, ele não seria capaz de deixar um Wara Ningyo na quinta cena do crime. Ele vai passar de dois para um quando matar a quarta vítima. A boneca vai deixar claro que essa será a obra do mesmo assassino, mas…\n");getchar();
    printf(" - Oh! Eu compreendi – disse Misora, tremendo através da sua própria estupidez. Obviamente, qualquer que seja o motivo do assassino, deixar Wara Ningyo na cena do crime fazia parte das regras. Ele dificilmente teria matado uma quinta vítima, quando o número de bonecas teria atingido zero. \n");getchar();
    printf(" - Há uma chance de trinta por cento que o assassino não pense nesta possibilidade, mas é muito incerto. Afinal, ele limpou os soquetes das lâmpadas…\n");getchar();
    printf(" - Assim, haverá apenas quatro vítimas no total. O próximo é o último.\n");getchar();
    printf(" – Não. O terceiro foi o último – L disse com firmeza, apesar de ser uma voz artificial – Não haverá outro. Não comigo envolvido. \n");getchar();
    printf("“...”\n");getchar();
    printf("Confiança? Ou presunção? As duas últimas soaram como um sentimento em particular. Confiança? Orgulho? Não sei mais.\n");getchar();
    printf(" - Mas eu preciso de sua ajuda, Naomi Misora. Eu espero grandes coisas de sua investigação.\n");getchar();
    printf(" - Sério?\n");getchar();
    printf(" - Sim, por favor, mantenha seu coração frio com o trabalho. Na minha experiência, um caso como este exige uma mente que não pode ser abalada por qualquer coisa. Comporte-se como se estivesse jogando xadrez no gelo.\n");getchar();
    printf("“...” Isso é algo fluente \n");getchar();
    printf(" - L , você sabe que eu estou de licença?\n");getchar();
    printf(" - Sim, é por isso que pedi a sua ajuda. Para este caso, eu preciso de um indivíduo qualificado que possa trabalhar em paz.\n");getchar();
    printf(" - Então, eu acho que você sabe porque eu estou de licença? \n");getchar();
    printf(" -  Não - disse ele, para a maravilha de Misora – Eu não sei. – \n");getchar();
    printf(" - Você não tem ciência de tal fato? \n");getchar();
    printf(" - Eu não estou interessado. Você é inteligente e estava atualmente disponível e isso era tudo de que eu me importei a menos que haja alguma coisa que eu deveria saber? Nesse caso eu poderia encontrar em um minuto.\n");getchar();
    printf("  - Não... - disse ela, fazendo careta. Sentiu como se o mundo inteiro soubesse de seu erro, mas nem mesmo o melhor detetive do mundo sabia. E ele descreveu a demissão ou suspensão de Misora, apenas como um “tornar disponível.” Nunca tinha pensado para imaginar, mas parecia que L tinha um senso de humor.\n");getchar();
    printf(" - Ok, L, se quisermos parar o quarto assassinato, devemos começar. O que devo fazer primeiro?\n");getchar();
    printf(" - O quê por exemplo?\n");getchar();
    printf(" - Eu posso fazer o que eu posso fazer – disse Misora – Eu sei que já perguntei, mas se eu estou investigando a cena mais uma vez... procurando por algo que ele deixou fora os Wara Ningyo... exatamente o que estou procurando?\n");getchar();
    printf(" - Qualquer tipo de mensagem.\n");getchar();
    printf(" - Mensagem?\n");getchar();
    printf(" - Sim, isto não foi escrito nos dados que você forneceu, mas nove dias antes de 31 de julho, antes do primeiro assassinato, 22 de julho, o LAPD recebeu uma carta.\n");getchar();
    printf(" - Uma carta? Ele estava avisando? A polícia de Los Angeles…? - Ligado ao caso?\n");getchar();
    printf("	No momento, nenhum dos envolvidos encontraram uma ligação. Eu não sei ao certo se realmente existe uma, mas eu penso que sim.\n");getchar();
 	printf(" - Qual chance?\n");getchar();
 	printf(" - de 80 porcento\n");getchar();   
 	printf("	Resposta instantânea\n");getchar();
 	printf(" - O remetente é desconhecido – foi utilizado um sistema de revezamento na transferência e não há maneira de dizer de onde veio. Dentro do envelope estava um pedaço de papel que parecia um jogo de palavras cruzadas.\n");getchar(); 
 	printf(" - Palavras cruzadas? Hum…\n");getchar();
 	printf(" - Não seja apressada. Era um enigma muito difícil, e ninguém foi capaz de resolvê-lo. Obviamente podemos considerar também que ninguém o levou implementavelmente a sério, mas parece razoável supor que vários policiais que trabalharam no setor não foram capazes de resolvê-lo.\n");getchar(); 
 	printf(" - Eu entendi. E então?\n");getchar();
 	printf(" - Talvez tenham decidido que o enigma era apenas uma piada e tenha sido postado de lado... mas ontem a minha rede recolheu informações que tenha obtido uma cópia através de outros canais.\n");getchar(); 
 	printf(" - Ontem... \n");getchar();
 	printf("	Então foi por isso que ele não estava no arquivo. Mesmo quando eu estava me preparando para a investigação, L continuava no caso de um ângulo diferente.\n");getchar(); 
  	printf(" - Eu já o resolvi\n");getchar();
  	//Talvez criar um enigma que resulte no endereço do primeiro assasinato
 	printf(" Aparentemente, a hipótese sobre a dificuldade do enigma havia sido apenas para se vangloriar, pensou Misora.\n");getchar();   
 	printf(" - Se eu estou enganado, então a resposta para o enigma é o lugar onde você está – o local do primeiro assassinato \n");getchar();
 	printf(" - 221 Insist St., Hollywood? Onde estou agora? Mas isso significa que...\n");getchar(); 
 	printf(" - Exatamente. Ele havia dito que estava prestes a cometer os assassinatos. Mas o enigma era tão difícil que ninguém pôde resolvê-lo, havia uma possibilidade realista de que serviria para esse fim...\n");getchar();
 	printf(" - A LAPD recebeu mais cartas como essa? Indicando o endereço para o assassinato, segundo e terceiro?\n");getchar(); 
 	printf(" - Não. Eu chequei todo o estado da Califórnia, só para ter certeza. Eu descobri outras cartas ou e-mail semelhantes. Eu acho que vai continuar a acompanhar, mas...\n");getchar();
 	printf(" - Então, pode ser simplesmente uma coincidência? Não, é impossível. Se ele escreveu o endereço exatamente deveria ser assim... mas por nove dias?\n");getchar(); 
 	printf(" - O tempo entre o segundo e terceiro homicídio foi de nove dias. De 4 de agosto a 13 de agosto. É possível que o assassino prefira o número nove.\n");getchar();
 	printf(" - Mas há apenas quatro dias entre o primeiro e o segundo assassinato... apenas um acaso?\n");getchar(); 
 	printf(" - Interpretação razoável. Mas parece ter em mente o tempo que decorre. Nove dias, quatro dias, nove dias. Em ambos os casos, o assassino é o cara que observa as suas ações entre a polícia. Embora estivesse apenas fingindo ser esse tipo de assassino, continua a ser uma boa possibilidade de que haja algum tipo de mensagem no quarto, algo fora do Wara Ningyo.\n");getchar();
 	printf("	Uma mensagem mais difícil de entender que o Wara Ningyo Wara... algo como um jogo difícil de palavras cruzadas. A Misora sentiu como se ela finalmente começasse a entender por que ele precisava de sua ajuda. Não havia nenhuma maneira que um detetive fosse capaz de encontrar propriamente algo dentro de um quarto. Você vê a cena com seus olhos, ser capaz de chegar e tocar as coisas... e que exige uma qualidade sobre a quantidade. Alguém que possa observar a cena de sua perspectiva, com a sua própria maneira de pensar... Mas também era de se colocar-se muito dela. Se era para ser os olhos de L... então era demais para suportar por uma agente ordinária do FBI.\n");getchar();   
 	printf(" - Algo errado, Misora?\n");getchar();
 	printf(" - Não… apenas pensando \n");getchar(); 
 	printf(" - Tudo bem. Atualmente, a perda de comunicação. Tenho muitas coisas que eu espero. Certamente.\n");getchar();
 	printf(" - Espero ouvir boas notícias de você. A próxima vez que você me ligar, por favor, use o número na quinta linha, Naomi Misora. – disse L, e desligou\n");getchar(); 
 	printf("	Misora fechou o telefone e colocou-o na bolsa. Em seguida, mudou-se para a mesa para começar a investigação. Não havia nada no quarto, exceto a cama e a mesa, de modo que não havia nada para investigar.\n");getchar();
 	printf("	Misora verificou os livros das prateleiras, pensou em verificar a cama mas imaginou que a polícia já havia feito tudo isso.\n");getchar(); 
 	// Ascii art de uma prateleira de livros
 	printf(" - Debaixo do tapete, por trás da tapeçaria... não, não, por que esconder a mensagem? Ele quer que ela seja encontrada. Não é uma mensagem se não for encontrada. Ele enviou o enigma das palavras cruzadas para a polícia... muito egoísta. Ele quer que o enigma seja difícil apenas para provar que nós somos estúpidos. Ele não estava tentando vencê-los em esperteza. Ele queria brincadeira.\n");getchar();
 	printf(" - Você está abaixo de mim, Você nunca poderá me derrotar, isto é o que diz a mensagem... o que significa que ele não está tentando fazer tudo ir a um caminho certo e evitar ser capturado, à procura de algo além do seu objetivo... ou zombar de nós é o seu propósito? Mas quem é “nós”? Polícia? A polícia de Los Angeles? Sociedade? Ou U.S.A.? Mundo? Não... a meta deve ser menor... algo mais pessoal. Portanto, esta mensagem... ou algo como uma mensagem... deve haver um lugar neste quarto... ou, espere... \n");getchar(); 
 	printf(" - Não deve ser... \n");getchar();
 	printf("	Está errado. Talvez não houvesse.\n");getchar();   
 	printf(" - Algo que deveria ter estado lá, mas... falta alguma coisa que estava aqui primeiro... o Wara Ningyo? Não, esses eram um símbolo para as vítimas, e não uma mensagem... o quarto... oh, achei! O inquilino! O habitante do quarto não está aqui. Faltando alguma coisa, que não está mais aqui. Como o proprietário do quarto, Believe Bridesmaid.\n");getchar();
 	printf("	Misora novamente olhou atentamente para as fotografias do corpo de Bridesmaid, Se o assassino deixou uma mensagem obviamente não era o sinais de corda no pescoço e sim os cortes em seu peito, Na foto do crime o corpo estava vestindo uma camiseta, o'que indica que o assassino teve o cuidado de despojar a vítima antes de fazer os cortes, o'que deletaria a possibilidade de ter sido um ataque de raiva pois a camiseta estava intacta, mas parecia que ele não se importava em se lambuzar de sangue…\n");getchar(); 
 	printf(" - Se você olhar com atenção… os sinais parecem letras… uma espécie de… Você tem que girar muito a imagem, ela pensou.\n");getchar();
 	printf(" - V… V… I? Não, M… Talvez V… X? D… e esses são três I em uma linha… L? Parece um L… hmm… eu sinto como se estivesse forçando…\n");getchar(); 
 	printf(" - Acho que devo verificar em outros cômodos... parece um pouco inútil. Mas se ele limpou todas as impressões digitais da casa..– ela murmurou, e virou-se para sair do quarto. \n");getchar();
 	printf(" Mas então ela percebeu que havia um lugar que não tinha verificado. Debaixo da cama. Poderia haver algo de novo que ela podia ver de lá de baixo. Por esta razão, Misora agachou-se para a cama…\n");getchar(); 
 	// Ascii art de uma cama, talvez com uma mão saindo de baixo?
 	printf("“...?!”\n");getchar();
 	printf("“Uma mão estendeu por baixo dela”\n");getchar(); 
 	printf("	Misora imediatamente pulou para trás e puxou os punhos. Não havia uma arma com ela- Sem arma, não haveria como se defender.\n");getchar();
 	printf(" - O que … não, quem é você?\n");getchar();   
 	printf("	Ela gritou, tentando soar intimidadora, mas a mão foi atingida por uma segunda mão, como sua voz era somente o vento soprando, um corpo surgiu. Um homem rastejou debaixo da cama.\n");getchar();
 	printf("	Quanto tempo… ele estava lá…? Ele estava debaixo da cama esse tempo todo? Ele ouviu falar com L? Todo tipo de pergunta foi surgindo na cabeça de Misora.\n");getchar(); 
 	printf(" - Responda. Quem é você?\n");getchar();
 	printf("	Pôs a mão em seu casaco, fingindo ter uma arma. O homem levantou a cabeça. E, lentamente, se levantou. Cabelos intensamente negros. Uma camisa simples, calça jeans desbotada. Era um rapaz, com linhas sob seus olhos grandes e salientes. Magro e aparentemente muito alto, mas suas costas estavam curvadas, trazendo o seu olhar mais baixo do que o de Misora, de modo que parecia olhar de baixo.\n");getchar(); 
 	printf(" - Prazer em conhecê-la\n");getchar();
 	printf("	disse ele completamente imperturbável. Curvou-se ainda mais baixo. \n");getchar(); 
 	printf(" - Por favor me chame de Ryuzaki.\n");getchar();
 	//Talvez colocar uma ascii art de riuuzaki


}

int main () {
    nomejogo();
    carregando();
    prologo();
    carregando();
    parteone();
    message();
}