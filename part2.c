/*
 * Ecole polytechnique de Montreal - GIGL
 * Automne  2022
 * Initlab - part2.c
 * Aurelie Nichols - 2142404
 * Leonard Pouliot - 2150965
 */
// Si besoin, ajouter ici les directives d'inclusion et les déclarations globales
// -------------------------------------------------
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
// -------------------------------------------------

void part21()
{
    const int STD_OUT = 1;
    char strToPrint[] = "77dbcb01f571f1c32e196c3a7d27f62e (printed using fprintf)";
    char strToWrite[] = "77dbcb01f571f1c32e196c3a7d27f62e (printed using write)\n";
    int lenStroPrint = 57;
    int lenStroWrite = 56;

    for (size_t i = 0; i < lenStroPrint; i++)
    {
        printf("%c", strToPrint[i]);
    }

    write(STD_OUT, strToWrite, lenStroWrite);
    printf("\n");
}

void part22()
{
    setvbuf(stdout, NULL, _IONBF, 0);
    part21();
}

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("Le programme a un seul paramètre : 1 ou 2\n");
        return 1;
    }
    switch (atoi(argv[1]))
    {
    case 1:
        part21();
        break;
    case 2:
        part22();
        break;
    default:
        printf(" Le paramètre du programme est invalide\n");
        return 1;
    }
    return 0;
}
