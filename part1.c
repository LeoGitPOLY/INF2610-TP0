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
#include <stdio.h>

int main () {
    // TODO
    char text;
    char docPath[] = "./output2.txt";
    int fd = open(docPath, O_WRONLY | O_TRUNC);

    printf("Saisissez votre texte suivi de CTRL-D :\n");
    
    while (read(0, &text, 1)){
        write(fd, &text, 1);
    }
    close(fd);
    return 0;
}
    
