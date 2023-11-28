//numero random en c
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    char pausa = ' ';

    srand(time(NULL));

    int i, a;

    for (i = 0 ; i <= 10 ; i++)
    {
        a = rand()%11;//valor entre [0,10]
        printf("valor: %d\n",a);
    }

    pausa = getchar();
    return 0;
}