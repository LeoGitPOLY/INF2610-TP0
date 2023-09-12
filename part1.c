/*
 * Ecole polytechnique de Montreal - GIGL
 * Automne  2022
 * Initlab - part1.c
 * Aurelie Nichols - 2142404
 * ajoutez vos noms, prénoms, matricules et votre section de laboratoire
 */

// TODO
// Si besoin, ajouter ici les directives d'inclusion et les déclarations globales
// -------------------------------------------------

   
// -------------------------------------------------
#include <fcntl.h>
#include <unistd.h>


int main () {
    // TODO
    char docPath[] = "./output2.txt";
    int fd = open(docPath, O_TRUNC);
    return 0;
}
    
