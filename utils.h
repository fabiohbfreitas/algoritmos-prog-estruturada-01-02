#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

int read_integer(const char text_prompt[], int should_not_be_zero, const char err_msg[])
{
    int readed_value = -1;
    do {
        system("clear");
        if (readed_value == 0) {
            printf("%s\n\n", err_msg);
        }
        printf("%s", text_prompt);
        scanf("%d", &readed_value);
    }
    while (should_not_be_zero && (readed_value == 0));

    return readed_value;
}

#endif