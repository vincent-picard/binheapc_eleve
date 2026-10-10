#include <assert.h>
#include <stdio.h>

#include "arbre.h"

int main() {
    printf("Création de l'arbre binomial a3 contenant : 12, 14\n");
    Arbre a1 = nouveau_noeud(12);
    Arbre a2 = nouveau_noeud(14);
    Arbre a3 = fusion_tasmin(a1, a2);
    assert(taille(a3) == 2);
    assert(hauteur(a3) == 1);

    printf("Création de l'arbre binomial a6 contenant : 15, 7\n");
    Arbre a4 = nouveau_noeud(15);
    Arbre a5 = nouveau_noeud(7);
    Arbre a6 = fusion_tasmin(a4, a5);

    printf("a7 = fusion(a3, a6)\n");
    Arbre a7 = fusion_tasmin(a3, a6);
    assert(taille(a7) == 4);
    assert(hauteur(a7) == 2);
    print_arbre(a7);
    detruire_arbre(a7);
}
