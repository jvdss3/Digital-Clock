#include <stdio.h>
#include <windows.h>



int main()
{
    int h,m,s;
    int d = 1000; //* Adiciona delay de 1000milisegundos e usa a função sleep
    printf("Set time : \n");
    scanf("%d%d%d", &h,&m,&s);
    if (h > 12 || m > 60 || s > 60)
    {
        printf("ERROR !\n");
    }
    while (1)
    {
        s++;
        if (s > 59) //** Quando Segundo atingir 59, acrescenta +1min e reseta os sencds
        {
            m++;
            s = 0;
        }
        if (m > 59) //* Quando min atingir 59, acrescenta +1h e reseta os min.
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d", h,m,s); //* Escreve nossa hora em formato 00:00:00
        Sleep(d); //* Essa função atrasa o loop while e faz parecer mais real.
        system("cls"); //* Limpa a tela toda vez que tudo acontece.
    }    
}
