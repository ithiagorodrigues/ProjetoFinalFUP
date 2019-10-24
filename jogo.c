#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//-------------------------VARIAVEIS DO AMBIENTE - COMEÇO
int escolha;
//-------------------------VARIAVEIS DO AMBIENTE - FIM

//-------------------------"TRADUZIR O CODIGO PODER USAR Ç ~ ´ ` E ETC E LIMPAR A TELA" - COMEÇO
void traducaoelimpeza() {
  system("clear");
  setlocale(LC_ALL, "portuguese");
}
//-------------------------"TRADUZIR O CODIGO PODER USAR Ç ~ ´ ` E ETC E LIMPAR A TELA" - FIM

//-------------------------MENU NO CASO DE ERRO DO USER - COMEÇO
void menu2() {
  traducaoelimpeza();
  printf("\n----------------------------------------------------------------------\n");
  printf("\n                          SEJA BEM VINDO AO");
  printf("\n                          CALABOUÇO DA MORTE");
  printf("\n           Aventuras Fantásticas – Vol 5 – Ian Livingstone");
  printf("\n                    Adaptação: Thiago Rodrigues");
  printf("\n\n                        ESCOLHA UMA OPÇÃO");
  printf("\n                               1º JOGAR");
  printf("\n                               2º AJUDA");
  printf("\n                               3º SAIR");
  printf("\n\n----------------------------------------------------------------------");
  printf("\n                            Opção Inválida\n");
  printf("                      Escolha uma opção valida\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    historia();
    break;
  case 2:
    printf("2");
    break;
  case 3:
    system("exit");
    break;

  default:
    menu2();
    break;
  }
}
//-------------------------MENU NO CASO DE ERRO DO USER - FIM

//-------------------------MENU PRINCIPAL - COMEÇO
void menu() {
  traducaoelimpeza();
  printf("\n----------------------------------------------------------------------\n");
  printf("\n                          SEJA BEM VINDO AO");
  printf("\n                          CALABOUÇO DA MORTE");
  printf("\n           Aventuras Fantásticas – Vol 5 – Ian Livingstone");
  printf("\n                    Adaptação: Thiago Rodrigues");
  printf("\n\n                        ESCOLHA UMA OPÇÃO");
  printf("\n                               1º JOGAR");
  printf("\n                               2º AJUDA");
  printf("\n                               3º SAIR");
  printf("\n\n----------------------------------------------------------------------\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    historia();
    break;
  case 2:
    printf("2");
    break;
  case 3:
    system("exit");
    break;

  default:
    menu2();
    break;
  }
}
//-------------------------MENU PRINCIPAL - FIM

//-------------------------HISTORIA INTRODUTORIA - COMEÇO
void historia() {
  traducaoelimpeza();
  printf("\n\n ----------------------------------------------------------------------\n\n");
  printf("                               HISTÓRIA\n\n");
  printf("  Fang era uma cidade pequena e comum na província setentrional de\n  Chiang Mai. Situada às margens do rio Kok, constituía-se num ponto de \n  parada conveniente para os comerciantes e passageiros que se\n  deslocavam pelo rio durante a maior parte do ano. Umas poucas barcaças,\n  jangadas e, às vezes, um grande barco a vela podiam ser encontrados no\n  atracadouro de Fang. Mas tudo isso foi há muito tempo, antes da criação\n  da Prova dos Campeões. Agora, uma vez por ano, o rio fica apinhado de\n  barcos, trazendo as pessoas que chegam de centenas de quilômetros ao\n  redor, na esperança de testemunhara quebra de uma antiga tradição em\n  Fang e ver alguém vitorioso na Prova dos Campeões.\n\n");
  printf("  Todo ano, no dia 10 de maio, guerreiros e heróis vêm para Fang, a fim\n  de enfrentar a prova mais importante de suas vidas. A sobrevivência é\n  improvável, todavia muitos correm o risco, pois o prêmio é excelente –\n  uma bolsa de 10 mil Peças de Ouro e a libertação de Chiang Mai.\n  Contudo, tornar-se Campeão não é tarefa simples. Há alguns anos, um\n  poderoso barão de Fang, chamado Sukumvit, resolveu chamar a atenção\n  geral para a sua cidade, criando um campeonato sem igual. Com a ajuda\n  dos habitantes, construiu um labirinto nas profundezas da encosta\n  atrás de Fang, do qual só havia um modo de sair. O labirinto foi\n  povoado com todos os tipos de monstros pavorosos, além de armadilhas e\n  ardis mortais. Sukumvit o havia desenhado com detalhes meticulosos, de\n  modo que quem quer que se dispusesse a enfrentar o desafio teria que\n  usar tanto a inteligência quanto a habilidade com as armas. Quando\n  finalmente ficou certo de que tudo estava pronto, resolveu testar o\n  labirinto. Escolheu 10 de seus melhores guardas e mandou-os, muito bem\n  armados, para o interior do labirinto. Nunca mais foram vistos. A\n  história do infeliz destino dos guardas logo correu mundo.\n\n");
  printf("  Então, Sukumvit anunciou a primeira Prova dos Campeões. Emissários e\n  editais divulgaram o desafio: 10 mil Peças de Ouro, e a libertação de\n  Chiang Mai, para qualquer pessoa que sobrevivesse aos perigos do\n  labirinto de Fang. No primeiro ano, 17 bravos guerreiros tentaram\n  "
    "A Caminhada"
    ", como ficou mais tarde conhecida a prova. Ninguém\n  retornou. Com o passar dos anos, a Prova dos Campeões atraía mais e\n  mais desafiantes e espectadores. Fang prosperou e se preparava com\n  meses de antecedência para o espetáculo que patrocinava a cada mês de\n  maio. Acidade era decorada, contratavam-se músicos, dançarinos,\n  comedores de fogo, ilusionistas e todo tipo de artistas, e se\n  registravam as inscrições de indivíduos esperançosos que pretendiam\n  realizar "
    "A Caminhada"
    ". Na última semana de abril, as pessoas de\n  Fang e seus visitantes iniciavam uma desvairada comemoração. Cantavam,\n  bebiam, dançavam e riam até o raiar do dia 12 de maio, quando a cidade\n  se amontoava nos portões do labirinto para ver o primeiro desafiante\n  do ano avançar para enfrentar a Prova dos Campeões.\n\n");
  printf("  Tendo visto um dos comunicados de Sukumvit pregado em uma árvore, você\n  resolve que este ano tentará "
    "A Caminhada"
    ". Durante os últimos cinco\n  anos, você tem-se sentido atraído, não pelas recompensas, mas pelo\n  simples fato de que ninguém até hoje conseguiu emergir vitorioso do\n  labirinto. Você pretende fazer com que este seja o ano no qual um\n  Campeão será coroado! Reunindo uns poucos pertences, você parte\n  imediatamente. Dois dias de caminhada para o oeste levam-no à costa,\n  onde você entra na maldita Port Blacksand. Sem perder tempo nessa\n  cidade de ladrões, você compra sua passagem em um pequeno barco que\n  veleja em direção ao norte, para a foz do rio Kok; de lá, você sobe o\n  rio de jangada por quatro dias, até finalmente chegar a Fang.\n\n");
  printf("  A Prova começa dentro de três dias, e a cidade está num clima quase\n  histérico de excitação. Você faz sua inscrição e recebe um lenço roxo\n  para amarrar em volta do braço, o qual informa a todos sua condição de\n  candidato. Durante três dias, você goza da melhor hospitalidade de\n  Fang, sendo tratado como um semideus. Durante a longa celebração,\n  quase esquece seu propósito; mas, na noite anterior à Prova, a\n  magnitude da tarefa à sua frente começadominar-lhe os pensamentos.\n  Mais tarde, você é levado para um alojamento especialconduzido a seu\n  quarto. Há uma esplêndida cama de quatro colunas com lençóis de cetim\n  para ajudá-lo a repousar. Mas há pouco tempo para dormir. \n\n");
  printf("  Logo antes da aurora, um toque de clarim o desperta de seus vívidos\n  sonhos povoados de poços flamejantes e aranhas negras gigantescas.\n  Minutos depois alguém bate à porta, e soa uma voz de homem que diz:\n  "
    "Seu desafio começará em breve. Por favor, esteja pronto para partir em\n  10 minutos."
    " Você sai da cama, caminha até a janela e abre os\n  postigos. Pessoas já se acotovelam nas ruas, deslocando-se\n  silenciosamente na bruma da manhã - espectadores a caminho do\n  labirinto, sem dúvida, esperando garantir bons lugares para observar\n  aos competidores. Você se afasta e caminha até uma mesa de madeira, onde\n  está sua espada de confiança. Apanhando-a, golpeia o ar com um giro\n  poderoso, imaginando que feras sua lâmina afiada poderá ter que\n  enfrentar em breve. Em seguida, abre a porta que dá para o corredor.\n  Um homem pequeno de olhos puxados o saúda, inclinando-se até o chão,\n  quando você sai de seu quarto. "
    "Por favor, siga-me"
    ", ele diz. Ele\n  vira para a esquerda e caminha rapidamente na direção das escadas no\n  fim do corredor.\n\n");
  printf("  Saindo do alojamento, ele dispara por alamedas estreitas entre as\n  casas, e você tem que andar depressa para acompanhá-lo. Logo chegam a\n  uma estrada larga de terra batida, ladeada por multidões que vibram.\n  Ao verem seu lenço roxo, eles gritam ainda mais alto e atiram-lhe\n  flores. As sombras compridas lançadas pelas pessoas à sua frente vão\n  diminuindo à medida que o brilhante sol dourado sobe no céu da manhã.\n  Ali, diante da multidão ruidosa e vibrante, você se sente\n  estranhamente solitário, consciente das provações que o esperam. De\n  repente, você sente um puxão na camisa e vê seu pequeno guia acenando\n  freneticamente para que o siga. Adiante, vê a encosta que se ergue e a\n  entrada escura de um túnel que desaparece nas profundezas de seu\n  interior. Ao se aproximar, repara em dois grandes pilares de pedra em\n  cada um dos lados da entrada do túnel. Os pilares estão cobertos de\n  entalhes ornamentados: serpentes que se contorcem, demônios,\n  divindades, cada um deles parecendo gritar uma advertência silenciosa\n  para aqueles que passam.\n\n");
  printf("  Você vê o próprio Barão Sukumvit de pé na entrada, esperando para\n  cumprimentar os concorrentes da Prova dos Campeões. Você conta cinco\n  outros fazendo fila orgulhosamente, seus lenços roxos visíveis para\n  que todos os notem. Há dois bárbaros de peito nu, vestidos com peles.\n  Eles estão completamente imóveis, as pernas retas e levemente\n  afastadas, os braços esticados para frente, pousados no cabo de suas\n  longas achas de guerra de dois gumes. \n\n");
  printf("  Uma mulher-elfo esguia, de cabelos dourados e olhos verdes de felino,\n  ajusta o cinturão de través, cheio de punhais, que lhe envolve a\n  túnica de couro. Dos outros dois homens restantes, um está coberto da\n  cabeça aos pés por uma armadura de chapas de ferro com um elmo\n  emplumado e um escudo que exibe um timbre; o outro está envolto em\n  vestes negras, somente seus olhos escuros aparecendo em meio aos panos\n  pretos que lhe envolvem o rosto. Facas longas, um garrote de fio de\n  aço e outras armas mortais silenciosas pendem-lhe do cinto. Os cinco\n  concorrentes demonstram ter notado sua chegada com movimentos\n  quase imperceptíveis de cabeça, e você se volta para olhar de frente,\n  pela última vez, a multidão exultante. Subitamente, um silêncio cai\n  sobre a multidão, quando o Barão Sukumvit dá um passo adiante,\n  segurando seis varas de bambu. Você tira uma delas da mão estendida e\n  lê a palavra "
    "Quinto"
    ". Então, a Prova começa. \n\n");
  printf("  O cavaleiro é o primeiro. Ele saúda a multidão antes de desaparecer no\n  túnel; meia hora depois é seguido pela mulher-elfo. Em seguida, vai um\n  dos bárbaros; depois, o assassino negro. Agora é a sua vez de saudar a\n  multidão. Segurando o lenço roxo bem alto, você enche os pulmões de ar\n  fresco e puro uma última vez antes de se virar para passar entre os\n  pilares de pedra e penetrar no labirinto do poderoso Barão Sukumvit, a\n  fim de enfrentar perigos desconhecidos na "
    "Caminhada"
    " pelo Calabouço\n  da Morte. \n\n");
  printf("                     BOA SORTE QUE O JOGO COMECE\n\n");
  printf(" Digite qualquer número para começar o jogo depois pressione enter!");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    escolha1();
    break;

  default:
    escolha1();
    break;
  }
  printf("\n\n ----------------------------------------------------------------------\n\n");
}
//-------------------------HISTORIA INTRODUTORIA - FIM

//-------------------------FASES DO JOGO - ESCOLHAS - COMEÇO
void escolha1() {
  traducaoelimpeza();
  printf("\n\n ----------------------------------------------------------------------\n\n");
  printf("  O clamor dos espectadores excitados some gradualmente atrás de você,\n  que se aventura cada vez mais fundo na penumbra do túnel da caverna.\n\n");
  printf("  Grandes cristais pendem do teto do túnel a intervalos de 20 metros,\n  irradiando uma luz suave, apenas suficiente para que se veja por onde\n  anda. À medida que seus olhos vão pouco a pouco se acostumando à quase\n  escuridão, você começa a ver movimentos à sua volta. Aranhas e\n  besouros sobem e descem pelas paredes entalhadas, desaparecendo em\n  frestas e gretas ao sentir sua aproximação; ratazanas e ratos correm\n  pelo chão à sua frente. Pingos de água caem em pequenas poças com um\n  sinistro som gotejante que ecoa pelo túnel. O ar é frio, úmido e\n  pesado. Depois de caminhar lentamente pelo túnel por uns cinco minutos,\n  você chega a uma mesa de pedra encostada contra a parede à sua\n  esquerda. Nela há seis caixas, uma das quais tem o seu nome pintado na\n  tampa. \n\n");
  printf("                            ESCOLHA UMA OPÇÃO\n");
  printf("\n                          1º Abrir a caixa");
  printf("\n                    2º Continuar andando para o norte\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    //fase2();
    break;
  case 2:
    //fase3();
    break;

  default:
    escolha1();
    break;
  }
}

//-------------------------FASES DO JOGO - ESCOLHAS - FIM

//-------------------------MAIN - COMEÇO
void main() {
  menu();
}
//-------------------------MAIN - FIM