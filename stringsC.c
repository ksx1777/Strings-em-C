#include "stringsC.h"

int strCmp(char firstStr[], char secStr[]){
    int len = slen(firstStr);
    if(len != slen(secStr)){
        return 1;
    }
    for(int i = 0; i < len; i++){
        if(firstStr[i] != secStr[i]){
            return 1;
        }
    }
    return 0;
    /* RETORNA "1" CASO AS STRINGS SEJAM DIFERENTES, E "0" SE FOREM IGUAIS*/
}

int slen(char string[]){
    int i = 0;
    for(;; i++){
        if(string[i] == TERMINADOR){
            break;
        }
    }
    return i;
}

int stoint(char string[]){
    int p = 0, num = 0, len = slen(string), digitos = len;
    for(int i = 0; i < len; i++){
        for(int c = 0; c < 10; c ++){
            if((string[i] == nums[c]) && (digitos > 0)){
                digitos--;
                num = c;
                for(int i = 0; i < digitos; i++){
                    num *= 10;
                }
                p += num;
            }
        }
    }
    return p;
}

int addstr(char strTo[], char strFrom[]){
    int strPos = slen(strTo),
    len = slen(strFrom);
    for(int i = 0; i < len; i++){
        strTo[(i+strPos)] = strFrom[i];
    }
    return 0;
}

void *memSet (void *dest, int val, int len){
   unsigned char *ptr = dest;
   for(; len > 0; len --){
     *ptr++ = val;
   }
   return dest;
}

int toUpperCase(char string[], int from, int to){
    int len = slen(string);
    if(to > len){
        to = len;
    }
    for(int i = from; i < to; i++){
        for(int c = 0; c < 26; c++){
            if(string[i] == MINUSCULA[c]){
                string[i] = MAIUSCULA[c];
            }
        }
    }
    return 0;
}

int toLowerCase(char string[], int from, int to){
    int len = slen(string);
    if(to > len){
        to = len;
    }
    for(int i = from; i < to; i++){
        for(int c = 0; c < 26; c++){
            if(string[i] == MAIUSCULA[c]){
                string[i] = MINUSCULA[c];
            }
        }
    }
    return 0;
}
