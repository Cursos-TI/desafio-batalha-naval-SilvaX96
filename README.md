#  Batalha Naval (Versão Básica em C)

Este projeto é uma versão simplificada do clássico jogo **Batalha Naval**, desenvolvida em linguagem C, voltada para iniciantes. Ele simula um tabuleiro 10x10 com dois navios posicionados automaticamente (um na horizontal e outro na vertical).

##  Objetivos

- Praticar arrays bidimensionais (matriz) para representar o tabuleiro.
- Usar arrays unidimensionais e lógica de posicionamento para os navios.
- Reforçar estruturas de controle como loops e condicionais.
- Trabalhar com funções e organização de código.

##  O que o programa faz

- Cria um tabuleiro 10x10 preenchido com `0` (representando água).
- Posiciona dois navios de tamanho 3:
  - Um navio **horizontal**.
  - Um navio **vertical**.
- Valida se os navios:
  - Estão dentro dos limites do tabuleiro.
  - Não se sobrepõem.
- Exibe o tabuleiro no console com os navios posicionados.

##  Exemplo de Saída

```
Tabuleiro:

0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 3 3 3 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 3 0 0 
0 0 0 0 0 0 0 3 0 0 
0 0 0 0 0 0 0 3 0 0 
0 0 0 0 0 0 0 0 0 0 
```

##  Como compilar e executar

### Linux / WSL / MacOS:

```bash
gcc batalha_naval.c -o batalha_naval
./batalha_naval
```

### Windows:

Abra o código em uma IDE como **Dev-C++** ou **Code::Blocks**, compile e execute.

##  Regras simplificadas

- Tabuleiro fixo: 10x10.
- Dois navios fixos com tamanho 3.
- Posições definidas diretamente no código.
- Sem interação do usuário, ataques ou pontuação (versão básica).

##  Aprendizados

- Uso de matrizes para representar estruturas complexas.
- Lógica condicional para evitar sobreposição e saídas dos limites.
- Organização e clareza no código com funções reutilizáveis.

##  Próximos Passos

- Permitir que o usuário posicione navios.
- Adicionar jogadas e registrar acertos/erros.
- Criar uma interface simples de ataque.
