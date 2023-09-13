/*
 * Ecole polytechnique de Montreal - GIGL
 * Automne  2022
 * Initlab - part1.c
 * Aurelie Nichols - 2142404
 * Leonard Pouliot - 2150965
 * ajoutez vos noms, prénoms, matricules et votre section de laboratoire
 */
// Si besoin, ajouter ici les directives d'inclusion et les déclarations globales
// -------------------------------------------------
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
// -------------------------------------------------

int main () {
    char textInFile;
    char docPath[] = "output2.txt";
    int userInputDescriptor = 0;
    int numberCharacter = 1;

    int fd = open(docPath, O_WRONLY | O_TRUNC);
    if(fd == -1){
        printf("Appel système open a échoué\n");
        return 0;
    }
    
    printf("Saisissez votre texte suivi de CTRL-D :\n");
    
    while (read(userInputDescriptor, &textInFile, numberCharacter)){
        write(fd, &textInFile, numberCharacter);
    }
    close(fd);
    return 0;
}
    
