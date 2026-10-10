#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

#include "binheap.h"
#include "arbre.h"

Tasbinomial tasbinomial_vide() {
    /* TODO */
}

int nb_val(Tasbinomial t) {
    /* TODO */
}

bool est_vide(Tasbinomial t) {
    /* TODO */
}

void print_tasbinomial(Tasbinomial t) {
    for (int i = 0; i < N; i++) {
         printf("Begin Arbre %d\n", i);
         print_arbre(t[i]);
         printf("End Arbre %d\n", i);
    }
}

int valmin(Tasbinomial t) {
    /* TODO */
}

Tasbinomial fusion_tasbinomial(Tasbinomial t1, Tasbinomial t2) {
    /* TODO */
}

/* Insere une nouvelle valeur, la mémoire de t est libérée */
Tasbinomial inserer(Tasbinomial t, int val) {
    /* TODO */
}

/* Supprime la valeur minimale, la mémoire de t est libérée */
Tasbinomial supprimer(Tasbinomial t) {
    /* TODO */
}
