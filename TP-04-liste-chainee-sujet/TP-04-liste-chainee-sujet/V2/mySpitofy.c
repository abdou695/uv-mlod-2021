// gcc -W -Wall -std=c99 linkedListOfMusic.c mySpitofy.c -o mySpitofy
// ./mySpitofy < music.csv > out.csv
// diff music.csv out.csv
// valgrind --leak-check=yes --leak-check=full --show-leak-kinds=all --show-reachable=no ./mySpitofy < music.csv > out.csv

#include "linkedListOfMusic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// ============
// Definitions of external functions
// ============

void afficheMusic(Music m) {
    Music mus = (Music)m;
	printf("Nom: %s ", mus->name);
    printf("Artiste: %s ", mus->artist);
    printf("Album: %s ", mus->album);
    printf("Genre: %s ", mus->genre);
    printf("Numéro CD: %s ", mus->discNumber);
    printf("Numéro piste: %s ", mus->trackNumber);
    printf("Année: %s ", mus->year);
}

void detruireMusic(Music e) {}

// compare deux Musics
bool equalsMusic(Music e1, Music e2){
}

// ============
// main
// ============

int main(void){
	

	return EXIT_SUCCESS;
}