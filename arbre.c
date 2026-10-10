#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "arbre.h"

void print_arbre_indent(Arbre a, int indent_level) {
    if (a == NULL) {
        for (int k = 0; k < indent_level; k++) {
            printf("\t");
        }
        printf("vide\n");
    } else {
        for (int k = 0; k < indent_level; k++) {
            printf("\t");
        }
        printf("Noeud : %d\n", a->val);
        Noeud* actuel = a->fils;
        while (actuel != NULL) {
            print_arbre_indent(actuel, indent_level + 1);
            actuel = actuel->frere;
        }
    }
}

void print_arbre(Arbre a) {
    print_arbre_indent(a, 0);
}

int hauteur(Arbre arbre) {
    /* TODO */
}

int taille(Arbre arbre) {
    /* TODO */
}

bool est_tasmin(Arbre arbre) {
    /* TODO */
}

Arbre nouveau_noeud(int val) {
    /* TODO */
}

void detruire_arbre(Arbre a) {
    /* TODO */
}


void fusion(Arbre a1, Arbre a2) {
    /* TODO */
}

Arbre fusion_tasmin(Arbre a1, Arbre a2) {
    /* TODO */
}
