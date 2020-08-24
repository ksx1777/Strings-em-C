#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
DEFINA O TERMINADOR PARA '\0' CASO SEU SISTEMA SEJA WINDOW
OU '0x0' CASO SEJA LINUX
*/

#define TERMINADOR '\0'

/* obter tamanho de string */
int slen(char string[]);

/* comparar string com outra */
int strCmp(char firstStr[], char secStr[]);

/* string para int */
int stoint(char string[]);
#define nums "0123456789"

/* concatena uma string com outra */
int addstr(char strTo[], char strFrom[]);

/* limpar uma string */
int strClear(char string[], int from, int to);

/* deixar um caracter em letra maiuscula/minuscula */
int toUpperCase(char string[], int from, int to);
int toLowerCase(char string[], int from, int to);
#define MAIUSCULA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define MINUSCULA "abcdefghijklmnopqrstuvwxyz"

/* */
