#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#ifndef UTILS__H
#define UTILS__H

void clear_terminal()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
}

int read_positive_integer(const char text_prompt[],const char error_msg[])
{
    clear_terminal();
    int readed_value = 0;
    do
    {
        printf("%s", text_prompt);
        scanf("%d", &readed_value);
        if (readed_value < 0) {
            clear_terminal();
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
        clear_terminal();
        if (readed_value == 0) {
            printf("%s\n\n", err_msg);
        }
        printf("%s", text_prompt);
        scanf("%d", &readed_value);
    }
    while (should_not_be_zero && (readed_value == 0));

    return readed_value;
}

float read_percentual(const char text_prompt[],const char error_msg[])
{
    clear_terminal();
    float readed_value = 0;
    do
    {
        printf("%s", text_prompt);
        scanf("%f", &readed_value);
        if (
            readed_value < 0.01 ||
            readed_value > 1
        ) {
            clear_terminal();
            printf("[ERRO] %s\n", error_msg);
        }
    }
    while (
        readed_value < 0.01 ||
        readed_value > 1
    );

    return readed_value;
}

float read_positive_float(const char text_prompt[],const char error_msg[])
{
    clear_terminal();
    float readed_value = 0;
    do
    {
        printf("%s", text_prompt);
        scanf("%f", &readed_value);
        if (readed_value < 0) {
            clear_terminal();
            printf("[ERRO] %s\n", error_msg);
        }
    }
    while (readed_value < 0);

    return readed_value;
}



#endif