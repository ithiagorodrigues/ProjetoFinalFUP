    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    //-------------------------VARIAVEIS DO AMBIENTE - COMEÇO
    int escolha, habilidade, sorte, energia, valordodado1, valordodado2;
    //-------------------------VARIAVEIS DO AMBIENTE - FIM

    //-------------------------"TRADUZIR O CODIGO PODER USAR Ç ~ ´ ` E ETC E LIMPAR A TELA" - COMEÇO
    void traducaoelimpeza() {
      system("clear");
      setlocale(LC_ALL, "portuguese");
    }
    //-------------------------"TRADUZIR O CODIGO PODER USAR Ç ~ ´ ` E ETC E LIMPAR A TELA" - FIM

    //-------------------------DADO - COMEÇO

    void dado() {
      srand((unsigned) time(NULL));
      valordodado1 = (rand() % 6) + 1;

      srand((unsigned) time(NULL));
      valordodado2 = (rand() % 6) + 1;

      while (valordodado1 == valordodado2) {
        srand((unsigned) time(NULL));
        valordodado2 = (rand() % 6) + 1;
      }

    }
    //-------------------------DADO - FIM

    //-------------------------Habilidade, Sorte e Energia - Começo
    void hablidade_energia_sorte() {
      dado();
      habilidade = valordodado1 + 6;
      dado();
      energia = valordodado1 + valordodado2 + 12;
      dado();
      sorte = valordodado1 + 6;
    }
    void valor_HSE() {

      printf("\n              |--------------------------------------------|");
      printf("\n                 Habilidade: %d | Energia: %d | Sorte: %d", habilidade, energia, sorte);
      printf("\n              |--------------------------------------------|\n\n");
    }

    //-------------------------Habilidade, Sorte e Energia - Fim

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
        menu();
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
    printf("  Então, Sukumvit anunciou a primeira Prova dos Campeões. Emissários e\n  editais divulgaram o desafio: 10 mil Peças de Ouro, e a libertação de\n  Chiang Mai, para qualquer pessoa que sobrevivesse aos perigos do\n  labirinto de Fang. No primeiro ano, 17 bravos guerreiros tentaram\n  ""A Caminhada"", como ficou mais tarde conhecida a prova. Ninguém\n  retornou. Com o passar dos anos, a Prova dos Campeões atraía mais e\n  mais desafiantes e espectadores. Fang prosperou e se preparava com\n  meses de antecedência para o espetáculo que patrocinava a cada mês de\n  maio. Acidade era decorada, contratavam-se músicos, dançarinos,\n  comedores de fogo, ilusionistas e todo tipo de artistas, e se\n  registravam as inscrições de indivíduos esperançosos que pretendiam\n  realizar ""A Caminhada"". Na última semana de abril, as pessoas de\n  Fang e seus visitantes iniciavam uma desvairada comemoração. Cantavam,\n  bebiam, dançavam e riam até o raiar do dia 12 de maio, quando a cidade\n  se amontoava nos portões do labirinto para ver o primeiro desafiante\n  do ano avançar para enfrentar a Prova dos Campeões.\n\n");
    printf("  Tendo visto um dos comunicados de Sukumvit pregado em uma árvore, você\n  resolve que este ano tentará ""A Caminhada"". Durante os últimos cinco\n  anos, você tem-se sentido atraído, não pelas recompensas, mas pelo\n  simples fato de que ninguém até hoje conseguiu emergir vitorioso do\n  labirinto. Você pretende fazer com que este seja o ano no qual um\n  Campeão será coroado! Reunindo uns poucos pertences, você parte\n  imediatamente. Dois dias de caminhada para o oeste levam-no à costa,\n  onde você entra na maldita Port Blacksand. Sem perder tempo nessa\n  cidade de ladrões, você compra sua passagem em um pequeno barco que\n  veleja em direção ao norte, para a foz do rio Kok; de lá, você sobe o\n  rio de jangada por quatro dias, até finalmente chegar a Fang.\n\n");
    printf("  A Prova começa dentro de três dias, e a cidade está num clima quase\n  histérico de excitação. Você faz sua inscrição e recebe um lenço roxo\n  para amarrar em volta do braço, o qual informa a todos sua condição de\n  candidato. Durante três dias, você goza da melhor hospitalidade de\n  Fang, sendo tratado como um semideus. Durante a longa celebração,\n  quase esquece seu propósito; mas, na noite anterior à Prova, a\n  magnitude da tarefa à sua frente começadominar-lhe os pensamentos.\n  Mais tarde, você é levado para um alojamento especialconduzido a seu\n  quarto. Há uma esplêndida cama de quatro colunas com lençóis de cetim\n  para ajudá-lo a repousar. Mas há pouco tempo para dormir. \n\n");
    printf("  Logo antes da aurora, um toque de clarim o desperta de seus vívidos\n  sonhos povoados de poços flamejantes e aranhas negras gigantescas.\n  Minutos depois alguém bate à porta, e soa uma voz de homem que diz:\n  ""Seu desafio começará em breve. Por favor, esteja pronto para partir em\n  10 minutos."" Você sai da cama, caminha até a janela e abre os\n  postigos. Pessoas já se acotovelam nas ruas, deslocando-se\n  silenciosamente na bruma da manhã - espectadores a caminho do\n  labirinto, sem dúvida, esperando garantir bons lugares para observar\n  aos competidores. Você se afasta e caminha até uma mesa de madeira, onde\n  está sua espada de confiança. Apanhando-a, golpeia o ar com um giro\n  poderoso, imaginando que feras sua lâmina afiada poderá ter que\n  enfrentar em breve. Em seguida, abre a porta que dá para o corredor.\n  Um homem pequeno de olhos puxados o saúda, inclinando-se até o chão,\n  quando você sai de seu quarto. ""Por favor, siga-me"", ele diz. Ele\n  vira para a esquerda e caminha rapidamente na direção das escadas no\n  fim do corredor.\n\n");
    printf("  Saindo do alojamento, ele dispara por alamedas estreitas entre as\n  casas, e você tem que andar depressa para acompanhá-lo. Logo chegam a\n  uma estrada larga de terra batida, ladeada por multidões que vibram.\n  Ao verem seu lenço roxo, eles gritam ainda mais alto e atiram-lhe\n  flores. As sombras compridas lançadas pelas pessoas à sua frente vão\n  diminuindo à medida que o brilhante sol dourado sobe no céu da manhã.\n  Ali, diante da multidão ruidosa e vibrante, você se sente\n  estranhamente solitário, consciente das provações que o esperam. De\n  repente, você sente um puxão na camisa e vê seu pequeno guia acenando\n  freneticamente para que o siga. Adiante, vê a encosta que se ergue e a\n  entrada escura de um túnel que desaparece nas profundezas de seu\n  interior. Ao se aproximar, repara em dois grandes pilares de pedra em\n  cada um dos lados da entrada do túnel. Os pilares estão cobertos de\n  entalhes ornamentados: serpentes que se contorcem, demônios,\n  divindades, cada um deles parecendo gritar uma advertência silenciosa\n  para aqueles que passam.\n\n");
    printf("  Você vê o próprio Barão Sukumvit de pé na entrada, esperando para\n  cumprimentar os concorrentes da Prova dos Campeões. Você conta cinco\n  outros fazendo fila orgulhosamente, seus lenços roxos visíveis para\n  que todos os notem. Há dois bárbaros de peito nu, vestidos com peles.\n  Eles estão completamente imóveis, as pernas retas e levemente\n  afastadas, os braços esticados para frente, pousados no cabo de suas\n  longas achas de guerra de dois gumes. \n\n");
    printf("  Uma mulher-elfo esguia, de cabelos dourados e olhos verdes de felino,\n  ajusta o cinturão de través, cheio de punhais, que lhe envolve a\n  túnica de couro. Dos outros dois homens restantes, um está coberto da\n  cabeça aos pés por uma armadura de chapas de ferro com um elmo\n  emplumado e um escudo que exibe um timbre; o outro está envolto em\n  vestes negras, somente seus olhos escuros aparecendo em meio aos panos\n  pretos que lhe envolvem o rosto. Facas longas, um garrote de fio de\n  aço e outras armas mortais silenciosas pendem-lhe do cinto. Os cinco\n  concorrentes demonstram ter notado sua chegada com movimentos\n  quase imperceptíveis de cabeça, e você se volta para olhar de frente,\n  pela última vez, a multidão exultante. Subitamente, um silêncio cai\n  sobre a multidão, quando o Barão Sukumvit dá um passo adiante,\n  segurando seis varas de bambu. Você tira uma delas da mão estendida e\n  lê a palavra ""Quinto"". Então, a Prova começa. \n\n");
    printf("  O cavaleiro é o primeiro. Ele saúda a multidão antes de desaparecer no\n  túnel; meia hora depois é seguido pela mulher-elfo. Em seguida, vai um\n  dos bárbaros; depois, o assassino negro. Agora é a sua vez de saudar a\n  multidão. Segurando o lenço roxo bem alto, você enche os pulmões de ar\n  fresco e puro uma última vez antes de se virar para passar entre os\n  pilares de pedra e penetrar no labirinto do poderoso Barão Sukumvit, a\n  fim de enfrentar perigos desconhecidos na ""Caminhada"" pelo Calabouço\n  da Morte. \n\n");
    printf("                     BOA SORTE QUE O JOGO COMECE\n\n");
    hablidade_energia_sorte();
    printf(" Digite qualquer número para começar o jogo, depois pressione enter!\n");
    printf("\n\n ----------------------------------------------------------------------\n\n");
    scanf("%d", & escolha);
    switch (escolha) {
    case 1:
        escolha1();
        break;

    default:
        escolha1();
        break;
    }
    }
    //-------------------------HISTORIA INTRODUTORIA - FIM

    //-------------------------FASES DO JOGO - ESCOLHAS - COMEÇO
void escolha1() {
  traducaoelimpeza();
  printf("\n\n ----------------------------------------------------------------------\n\n");
  printf("  O clamor dos espectadores excitados some gradualmente atrás de você,\n  que se aventura cada vez mais fundo na penumbra do túnel da caverna.");
  printf("\n\n  Grandes cristais pendem do teto do túnel a intervalos de 20 metros,\n  irradiando uma luz suave, apenas suficiente para que se veja por onde\n  anda. À medida que seus olhos vão pouco a pouco se acostumando à quase\n  escuridão, você começa a ver movimentos à sua volta. Aranhas e\n  besouros sobem e descem pelas paredes entalhadas, desaparecendo em\n  frestas e gretas ao sentir sua aproximação; ratazanas e ratos correm\n  pelo chão à sua frente. Pingos de água caem em pequenas poças com um\n  sinistro som gotejante que ecoa pelo túnel. O ar é frio, úmido e\n  pesado. Depois de caminhar lentamente pelo túnel por uns cinco minutos,\n  você chega a uma mesa de pedra encostada contra a parede à sua\n  esquerda. Nela há seis caixas, uma das quais tem o seu nome pintado na\n  tampa.");
  printf("\n\n ----------------------------------------------------------------------");
  valor_HSE();
  printf("                          ESCOLHA UMA OPÇÃO");
  printf("\n                           1º Abrir a caixa");
  printf("\n                 2º Continuar caminhando para o norte");
  printf("\n\n ----------------------------------------------------------------------\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    escolha270();
    break;

  case 2:
    escolha66();
    break;

  default:
    escolha1();
    break;
  }

}

void escolha56() {
  traducaoelimpeza();
  printf("\n\n ----------------------------------------------------------------------\n\n");
  printf("                 (Você continuou caminhando para o leste)\n\n");
  printf("  Você vê que a obstrução é causada por um objeto grande e marrom,\n  parecendo um rochedo. Você o toca com a mão e fica surpreso ao\n  descobrir que é macio e esponjoso.");
  printf("\n\n ----------------------------------------------------------------------\n");
  valor_HSE();
  printf("                          ESCOLHA UMA OPÇÃO");
  printf("\n                      1º Tentar subir por cima dele");
  printf("\n                    2º Cortá-lo ao meio com sua espada");
  printf("\n ----------------------------------------------------------------------\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    escolha373();
    break;
  case 2:
    escolha215();
    break;
  default:
    escolha56();
    break;
  }

}

void escolha66() {
  traducaoelimpeza();
  printf("\n\n ----------------------------------------------------------------------\n\n");
  printf("                 (Você continuar caminhando para o norte)\n\n");
  printf("  Depois de caminhar pelo túnel por alguns minutos, você chega a uma\n  encruzilhada. Uma seta branca pintada na parede aponta para o oeste.\n  No chão, você vê pegadas molhadas, feitas por aqueles que entraram\n  antes de você. É difícil ter certeza, mas parece que três deles\n  seguiram a direção da seta, enquanto um resolveu ir para o leste.");
  printf("\n\n ----------------------------------------------------------------------\n");
  valor_HSE();
  printf("                          ESCOLHA UMA OPÇÃO");
  printf("\n                          1º Ir para o oeste");
  printf("\n                          2º Ir para o leste");
  printf("\n ----------------------------------------------------------------------\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    escolha293();
    break;
  case 2:
    escolha119();
    break;
  default:
    escolha66;
    break;
  }
}

void escolha119() {
  traducaoelimpeza();
  printf("\n\n ----------------------------------------------------------------------\n\n");
  printf("                          (Você foi para o leste)\n\n");
  printf("  Adiante, você pode ver um grande obstáculo no chão do túnel, embora\n  esteja escuro demais para saber exatamente o que é. As pegadas\n  molhadas que você vem seguindo continuam até a obstrução.");
  printf("\n\n ----------------------------------------------------------------------\n");
  valor_HSE();
  printf("                          ESCOLHA UMA OPÇÃO");
  printf("\n                      1º Continuar indo para o leste");
  printf("\n             2º Ir para a encruzilhada e seguir para o oeste");
  printf("\n ----------------------------------------------------------------------\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    escolha56();
    break;
  case 2:
    escolha293();
    break;
  default:
    escolha119;
    break;
  }

}

void escolha137() {
  traducaoelimpeza();
  printf("\n\n -----------------------------------------------------------------------\n\n");
  printf("      (Você continuou indo para o oeste, seguindo dois pares de pegadas)\n\n");
  printf("  Caminhando pelo túnel, você se surpreende com um grande sino de ferro pendurado no teto.");
  printf("\n\n -----------------------------------------------------------------------\n");
  valor_HSE();
  printf("                          ESCOLHA UMA OPÇÃO");
  printf("\n                             1º Tocar o sino");
  printf("\n                 2º Contorná-lo e prosseguir para o oeste");
  printf("\n -----------------------------------------------------------------------\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    escolha220();
    break;
  case 2:
    escolha362();
    break;

  default:
    escolha137();
    break;
  }
}

void escolha215() {
  traducaoelimpeza();
  printf("\n\n -----------------------------------------------------------------------\n\n");
  printf("                           (Você cortou ao meio)\n\n");
  printf("  Sua espada arrebenta facilmente a fina casca externa da gigantesca\n  bola de esporos. Uma espessa nuvem de esporos saída da bola se espalha\n  e o envolve. Alguns dos esporos grudam- se à sua pele, que começa a\n  coçar terrivelmente. Aparecem grandes caroços no seu rosto e braços, e\n  sua pele parece estar em fogo. Você perde 2 pontos de ENERGIA. Coçando\n  freneticamente os caroços, você passa por cima da bola de esporos,\n  agora murcha, e segue para o oeste.");
  printf("\n\n -----------------------------------------------------------------------\n");
  valor_HSE();
  energia = energia - 2;
  printf("\n                                   ATUALIZADO");
  printf("\n              |--------------------------------------------|");
  printf("\n                 Habilidade: %d | Energia: %d | Sorte: %d", habilidade, energia, sorte);
  printf("\n              |--------------------------------------------|\n\n");

  printf("  Digite qualquer número para continuar o jogo, depois pressione enter!");
  printf("\n -----------------------------------------------------------------------\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    //escolha13();
    break;

  default:
    //escolha13();
    break;
  }
}

void escolha220() {
  traducaoelimpeza();
  printf("\n\n -----------------------------------------------------------------------\n\n");
  printf("                           (Você tocou o sino)\n\n");
  printf("  Um "
    "bong"
    " sombrio soa como um toque de sino fúnebre. Tudo vibra à\n  sua volta, e você aperta os dentes quando sua cabeça também estremece.\n  Todo seu corpo está tremendo, e você cai. Você tirita e tem calafrios,\n  contorcendo-se convulsivamente no chão, à medida que as vibrações se\n  intensificam. Procura desesperadamente uma maneira de parar o sino.");
  printf("\n\n -----------------------------------------------------------------------\n");
  valor_HSE();
  printf("                          ESCOLHA UMA OPÇÃO");
  printf("\n                      1º Gritar o mais alto possível");
  printf("\n                   2º Tentar abafa o sino com sua bota");
  printf("\n -----------------------------------------------------------------------\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    //escolha61();
    break;
  case 2:
    //escolha346();
    break;

  default:
    escolha220();
    break;
  }
}

void escolha270() {
  traducaoelimpeza();
  printf("\n\n -----------------------------------------------------------------------\n\n");
  printf("                           (Você abriu a caixa)\n\n");
  printf("  A tampa da caixa sai facilmente. Dentro, você acha duas Peças de Ouro\n  e um bilhete, escrito num pequeno pedaço de pergaminho, endereçado a\n  você. Depois de colocar o ouro no bolso, você lê a mensagem: Muito bem.\n  Pelo menos você tem o bom senso de parar e tirar proveito da ajuda\n  simbólica que lhe é dada. Agora, posso avisá-lo da necessidade de\n  encontrar e usar diversos itens, se espera sair-se bem no meu\n  Calabouço da Morte. Assinado “Sukumvit.” Guardando de cor o aviso do\n  bilhete, você o rasga em pequenos pedaços e continua para o norte pelo\n  túnel.");
  printf("\n\n -----------------------------------------------------------------------\n");
  valor_HSE();
  printf("  Digite qualquer número para continuar o jogo, depois pressione enter!");
  printf("\n -----------------------------------------------------------------------\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    escolha66();
    break;

  default:
    escolha66();
    break;
  }
}

void escolha293() {
  traducaoelimpeza();
  printf("\n\n -----------------------------------------------------------------------\n\n");
  printf("                      (Você chegou na encruzilhada)\n\n");
  printf("  Seguindo os três pares de pegadas molhadas pela passagem oeste do\n  túnel, você logo chega a uma encruzilhada.");
  printf("\n\n -----------------------------------------------------------------------\n");
  valor_HSE();
  printf("                          ESCOLHA UMA OPÇÃO");
  printf("\n        1º Continuar para o oeste, seguindo dois pares de pegadas");
  printf("\n      2º Se dirigir para o norte, seguindo o terceiro par de pegadas");
  printf("\n -----------------------------------------------------------------------\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    escolha137();
    break;
  case 2:
    //escolha387();
    break;

  default:
    escolha293();
    break;
  }

}

void escolha362() {
  traducaoelimpeza();
  printf("\n\n -----------------------------------------------------------------------\n\n");
  printf("                (Você continuou sua jornada para o oeste)\n\n");
  printf("  O túnel dá uma guinada acentuada para a direita e continua para o\n  norte até onde a vista alcança. A distância, você ouve uma tremenda\n  comoção: grunhidos, rosnados, uivos. Você desembainha a espada e parte\n  na direção do tumulto.");
  printf("\n\n -----------------------------------------------------------------------\n");
  valor_HSE();
  printf("  Digite qualquer número para continuar o jogo, depois pressione enter!");
  printf("\n -----------------------------------------------------------------------\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    //escolha264();
    break;

  default:
    //escolha264();
    break;
  }

}

void escolha373() {
  traducaoelimpeza();
  printf("\n\n -----------------------------------------------------------------------\n\n");
  printf("                         (Você tentou subir sobre ele)\n\n");
  printf("  Você sobe pelo rochedo macio, temendo ser absorvido por ele a qualquer\n  momento. É difícil passar por cima da coisa, pois seus membros afundam\n  na casca mole, mas, por fim, você consegue chegar ao outro lado.\n  Aliviado por estar de novo em terreno firme, você se dirige para o\n  leste.");
  printf("\n\n -----------------------------------------------------------------------\n");
  valor_HSE();
  printf("  Digite qualquer número para continuar o jogo, depois pressione enter!");
  printf("\n -----------------------------------------------------------------------\n\n");
  scanf("%d", & escolha);
  switch (escolha) {
  case 1:
    //escolha13();
    break;

  default:
    //escolha13();
    break;
  }
}

//-------------------------FASES DO JOGO - ESCOLHAS - FIM

//-------------------------MAIN - COMEÇO
void main() {
  menu();
}
//-------------------------MAIN - FIM