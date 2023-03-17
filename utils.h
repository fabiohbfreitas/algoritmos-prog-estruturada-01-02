#include <stdio.h>
#include <stdlib.h>
#ifndef UTILS__H
#define UTILS__H

int read_positive_integer(const char text_prompt[],const char error_msg[])
{
    system("clear");
    int readed_value = 0;
    do
    {
        printf("%s", text_prompt);
        scanf("%d", &readed_value);
        if (readed_value < 0) {
            system("clear");
            printf("[ERRO] %s\n", error_msg);
        }
    }
    while (readed_value < 0);

    return readed_value;
}
#endif