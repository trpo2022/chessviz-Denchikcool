#include <libchess/Fill_Table.h>
#include <libchess/Input.h>
#include <libchess/Move.h>
#include <libchess/Print_Table.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 8
#define step 12

int main()
{
    int** chess;
    char* input_step;

    chess = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        chess[i] = (int*)malloc(n * sizeof(int));
    input_step = (char*)malloc(step * sizeof(char));

    Fill_Table(chess);
    PrintTable(chess);
    Input(input_step);

    printf("\n");
    for (int i = 0; i < step; i++)
        printf("%c", input_step[i]);
    Move(chess, input_step);
    printf("\n");
    PrintTable(chess);

    return 0;
}
