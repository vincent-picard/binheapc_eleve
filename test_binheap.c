#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "binheap.h"

int main() {
    printf("Création de t et t2\n");
    Tasbinomial t = tasbinomial_vide();
    Tasbinomial t2 = tasbinomial_vide();
    assert(est_vide(t));
    assert(est_vide(t2));

    printf("Insertions dans t de : 18, 42, 98, 17, 50, 70\n");
    t = inserer(t, 18);
    t = inserer(t, 42);
    t = inserer(t, 98);
    t = inserer(t, 17);
    t = inserer(t, 50);
    t = inserer(t, 70);
    assert(nb_val(t) == 6);
    print_tasbinomial(t);
    printf("Insertions dans t2 de : 44, 71, 6, 31, 61, 30\n");
    t2 = inserer(t2, 44);
    t2 = inserer(t2, 71);
    t2 = inserer(t2, 6);
    t2 = inserer(t2, 31);
    t2 = inserer(t2, 61);
    t2 = inserer(t2, 30);
    assert(nb_val(t2) == 6);
    print_tasbinomial(t2);
    printf("t3 = fusion de t et t2\n");
    Tasbinomial t3 = fusion_tasbinomial(t, t2);
    assert(nb_val(t3) == 12);
    print_tasbinomial(t3);
    printf("Tri des 12 valeurs par extractions succesives :\n");
    for (int k = 0; k < 12; k++) {
        printf("extraction : %d\n", valmin(t3));
        t3 = supprimer(t3);
    }
}
