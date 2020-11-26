//bibliotecas
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    setlocale(LC_ALL, "portuguese");//habilita a acentuação para o português

  //variáveis
  char matriz [999][999];
  int i, j,certo,errado,caso,primeirolugar,segundolugar,terceirolugar,quartolugar,quintolugar;
  
  //frontend pra ficar bunito
  printf("🎲 🕹️ 🎮 🧩 🎲 🕹️ 🎮 🧩 🎲 🕹️ 🎮 🧩 🎲 🕹️ 🎮 🧩 \n");
  printf("-----------------------------------\n");
  printf("BEM VINDOS AO QUIZ\n");
  printf("-----------------------------------\n");
  printf("🎲 🕹️ 🎮 🧩 🎲 🕹️ 🎮 🧩 🎲 🕹️ 🎮 🧩 🎲 🕹️ 🎮 🧩 \n");
  printf("\n");
  printf("MENU\n");
  printf("\n");
  printf("1 ---- INICIAR QUIZ 🎲\n");
  printf("2 ---- RANKING 🏆\n");
  printf("3 ---- SAIR ❌\n");
  scanf("%d", &caso);

switch (caso)
{
  case 1:

  printf("BEM-VIND@ AO QUIZ DA LINGUAGEM C !\n"); 
  printf("O QUIZ TERÁ DURAÇÃO DE NO MÁXIMO 10 MINUTOS !\n"); 
  printf("COMEÇANDO..... DE AGORA!\n\n");
  
  //perguntasss
  strcpy(matriz[0],"Que símbolo é utilizado para concluir uma linha de código no c?\n\n 1.!\n2. @\n3. %\n4. ;\n5. .\n");
  
 strcpy(matriz[1],"Na linguagem C, para manipular um número real com 8 bytes de tamanho que possa assumir valores negativos, é preciso declarar uma variável do tipo\n\n 1.Long\n2. Signed float\n3. Unsigned int\n4. Double\n5. Char\n");

 strcpy(matriz[2],"Analise o código a seguir, escrito na linguagem de programação C. #include <stdio.h> void sub (int *x, int y){ *x = 3; y = *x + 1; } int main() { int a, b, z; a = 1; b = 2; sub(&a,b); z = a + b; printf (""%d,z); return 0; } O valor de Z, a ser mostrado na saída padrão, é:\n\n 1.3\n 2.4\n 3.7\n 4.5\n 5.10\n");

 strcpy(matriz[3],"Na linguagem C++, é possível substituir as funções scanf(%d, &x) e printf(%d, y) da linguagem C, respectivamente, por:\n\n 1.std::cout >> x e std::cin << y\n 2.std::cin << x e std::cout >> y\n 3.std::cout << x e std::cin >> y\n 4.std::cin >> x e std::cout << y\n 5.std::::cout << x e std::cin >> y\n");

 strcpy(matriz[4],"Qual das alternativas a seguir apresenta somente tipos de dados básicos da linguagem C?:\n\n 1.boolean, string e float.\n 2.string, double e int\n 3.char, boolean e int.\n 4.char, int e float.\n 5.string, float e int.\n");

 strcpy(matriz[5],"Em relação às principais caraterísticas da linguagem C, assinale a alternativa correta.\n\n 1.Por ser uma linguagem de alto nível, não permite a manipulação de bits, bytes e endereços.\n 2.Os códigos em C desenvolvidos para um determinado tipo de sistema operacional não são portáveis para outro sistema. Em outras palavras, a linguagem C não possui portabilidade.\n 3.A linguagem C é estruturada em blocos, de modo que permite a criação de funções dentro de funções.\n 4.A linguagem C permite a compartimentalização de código, escondendo do resto do programa as informações necessárias para realizar uma tarefa específica.\n 5.É uma linguagem orientada a objeto.\n");

 strcpy(matriz[6],"Na linguagem de programação em C, as funções permitem a criação de programas em módulos, em que todas as variáveis, que são descritas nas definições de função, são locais, pois são conhecidas apenas na função em que são definidas. Cada biblioteca‐padrão tem um cabeçalho que contém os protótipos de função para todas as funções nessa biblioteca, assim como definições de vários tipos de dados e constantes que são necessárias para estas funções. Uma dessas bibliotecas tem a seguinte explicação: contém as definições comuns de tipo usadas pela C para realizar cálculos. Assinale‐a:\n\n 1.<math.h>\n 2.<locale.h>\n 3.<assert.h>\n 4.<stddef.h>\n 5.<string.h>\n");

  strcpy(matriz[7],"As linguagens de programação: \n\n 1.do tipo script como VBScript e Lua são utilizadas em aplicações web. No caso de sites do WordPress, por exemplo, os desenvolvedores criam plug-ins e usam o VB para solicitar o conteúdo. O código é executado como HTML, permitindo que os visitantes do site visualizem o conteúdo em seus navegadores.\n 2.como C e Ruby são compiladas estaticamente e seus códigos-fontes são transformados diretamente em linguagem de montagem ou assembler.\n 3.orientadas a objeto são todas compiladas e não interpretadas, por isso são consideradas de baixo nível, sendo as mais utilizadas para programação de sistemas embarcados ou aplicações que exijam acesso direto a registros da memória.\n 4.como Java e C# têm seus códigos fontes transformados em uma linguagem intermediária (específica de cada linguagem), que será interpretada pela máquina virtual da linguagem quando o programa for executado.\n 5.interpretadas têm seu código-fonte traduzido por um programa tradutor ou assembly, que em seguida é executado pelo sistema operacional. Um exemplo disso é o Bytecode, que é uma linguagem que passa pelo processo de interpretação e, em seguida, é executada por um compilador.\n");

  strcpy(matriz[8],"Quem é o 'pai' da linguagem C?:\n\n 1.Adam Sandler\n 2.Kurt Cobain\n 3.Steve Jobs.\n 4.Dennis Ritchie.\n 5.Henry Cavill\n");

  strcpy(matriz[9],"Quando a linguagem C foi criada?\n\n 1.2020\n 2.1980\n 3.1960.\n 4.1972\n 5.26 a.c\n");

  strcpy(matriz[10],"Considere as afirmações sobre a linguagem C.\n\n I - É considerada uma linguagem fortemente tipada.\n\n II - É uma linguagem orientada a objetos.\n\n III - A função scanf é utilizada para ler dados da entrada padrão.\n\n 1.Apenas I.\n 2.Apenas II.\n 3.Apenas II e III..\n 4.Apenas I e III.\n I, II e III.\n");


 //onde o voodoo acontece
   srand(time(NULL));
  for (int i=0; i<10;i++){
    int num=rand()%3;
      printf("%c", matriz[i][j]);
      
       for(int j=0; j<=500;j++){
      printf("%c", matriz[num][j]);
  }
   scanf("%s", &matriz[i][j]);
  if (matriz[i][j] == '4') {
    printf("Resposta correta!\n");
    certo++; //soma +1 para variável
    }
    else {
      printf("Resposta errada!\n");
      errado++; //soma +1 para variável
    }
    printf("Até o momento você possui %d acertos\n", certo);
    printf("Até o momento você possui %d erros\n", errado);
    getchar();printf ("Pressione \"enter\" para continuar...");
    getchar();system("clear"); //limpa tela
  }
    printf("Fim de jogo!\n Sua pontuação foi: %d acertos\n\n", certo);
     if (certo > 6) {
       printf("Você foi aprovado! Parabéns!\n");
     } else {
       printf ("Você não foi aprovado, tente novamente\n");
     }
   break;

   case 2: 
    printf(" ======= RANKING DOS MELHORES COLOCADOS ======\n");
    (certo = primeirolugar);
    printf("1º Primeiro Lugar: %d\n", primeirolugar);
    printf("2º Segundo Lugar: %d\n", segundolugar);
    printf("3º Terceiro Lugar: %d\n", terceirolugar);
    printf("4º Quarto Lugar: %d\n", quartolugar);
    printf("5º Quinto Lugar: %d\n", quintolugar);
    break;

  case 3:
    printf("Saindo..\n");
    break;
}
}
