# Sistema Bancario em C

Projeto desenvolvido em linguagem C para a disciplina de Algoritmos e Pensamento Computacional. O programa simula operações bancárias simples por meio de um menu interativo no terminal.

## Funcionalidades

- Consultar o saldo atual;
- Realizar depósitos;
- Realizar saques;
- Impedir saques com saldo insuficiente;
- Validar opções não suportadas e valores inválidos;
- Exibir o saldo final ao encerrar o sistema.

## Conceitos aplicados

- Estruturas de repetição com `do...while`;
- Estruturas condicionais com `if`, `else if` e `switch`;
- Leitura de dados com `scanf`;
- Tratamento de entradas incorretas com `getchar`;
- Controle de saldo usando variáveis do tipo `float`.

## Como executar

É necessário ter um compilador C instalado, como o GCC.

No Prompt de Comando ou no terminal, entre na pasta do projeto e execute:

```cmd
gcc sistema_bancario.c -o sistema_bancario.exe
sistema_bancario.exe
```

Caso utilize o GCC instalado pelo MSYS2 no Windows, configure o PATH temporariamente antes de compilar:

```cmd
set PATH=C:\msys64\ucrt64\bin;%PATH%
gcc sistema_bancario.c -o sistema_bancario.exe
sistema_bancario.exe
```

## Menu

```text
1 - Consultar saldo
2 - Realizar deposito
3 - Realizar saque
4 - Encerrar sistema
```

Ao encerrar, o programa informa o saldo final e apresenta uma mensagem de despedida.
