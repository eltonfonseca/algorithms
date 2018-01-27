/*************************************************************************
*                   The Problem Solved Kings in C                        *
* ---------------------------------------------------------------------- *
*                                                                        *
* POC: $ ./kings <number of rows> <number of columns>                    *
* Help: $ ./kings -h                                                     *
*                                                                        *
* Autor: Elton Fonseca                                                   *
* http://www.fb.com/elton.junior6                                        *
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int king, i, j, rows, columns;
    void help();

    if(argv[2] == NULL || argc < 2 || argc > 3)
    {
        printf("Error! for more informations, use: -h\n");
    }
    else if(strcmp(argv[1], "-h") == 0)
    {
        help();
    }
    else
    {
        rows = atoi(argv[1]);
        columns = atoi(argv[2]);
        i = 1;
        while(i <= rows)
        {
            j = 1;
            while(j <= columns)
            {
                king++;
                j += 2;
            }
            i += 2;
        }
        printf("Kings: %d\n", king);
    }

}
void help()
{
    printf("+---------------------------------------------------------+\n");
    printf("+                The Problem Solved Kings in C            +\n");
    printf("+                                                         +\n");
    printf("+ Use: $ ./kings <number of rows> <number of columns>     +\n");
    printf("+---------------------------------------------------------+\n");
}