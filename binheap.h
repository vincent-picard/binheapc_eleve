#ifndef BINHEAP_H
#define BINHEAP_H

#include <stdbool.h>
#include "arbre.h"

// Tas binomial implémenté à l'aide d'un tableau de taille N
// Le tas ne pourra pas contenir plus de 2^N noeuds
// La case d'indice k du tableau contient un arbre binomial d'ordre k (ou NULL)

#define N 32 // Ce qui donne de l'ordre de 4 milliards de valeurs possibles 
typedef Arbre* Tasbinomial; // Tableau d'arbres binomiaux

/* Créé un tas binomial ne contenant aucun arbre */
Tasbinomial tasbinomial_vide();

/* Renvoie le nombre de valeurs (noeuds) d'un tas binomial */
int nb_val(Tasbinomial t);

/* Teste si un tas binomial est vide */
bool est_vide(Tasbinomial t); 

/* Fonction d'affichage d'un tas binomial */
void print_tasbinomial(Tasbinomial t);

/* Renvoie la valeur minimale d'un tas binomial sans rien modifier */
int valmin(Tasbinomial t); 

/* Fusionne deux tas binomiaux à l'aide de l'algorithme d'addition vu en cours */
/* Cette fonction renvoie un nouveau tableau, alloué sur le tas, pour stocker la foret
 * obtenue en résultat.
 * La mémoire allouée pour les deux tableaux d'entrée t1 et t2  est libérée.
 * t1 et t2 ne doivent donc plus être utilisés après l'appel à cette fonction.
 * Attention, les noeuds de t1 et t2 servent à former le résultat et ne sont donc
 * pas désalloués.
 */ 
Tasbinomial fusion_tasbinomial(Tasbinomial t1, Tasbinomial t2);

/* Insere une nouvelle valeur dans le tas binomial */
/* Cette fonction renvoie un nouveau tableau, alloué sur le tas, pour stocker la foret
 * obtenue en résultat.
 * La mémoire allouée pour le tableau d'entrée t est libérée. 
 * t ne doit plus être utilisé après l'appel à cette fonction */ 
Tasbinomial inserer(Tasbinomial t, int val);

/* Supprime la valeur minimale du tas binomial */
/* Cette fonction renvoie un nouveau tableau, alloué sur le tas, pour stocker la foret
 * obtenue en résultat.
 * La mémoire allouée pour le tableau d'entrée t est libérée. 
 * t ne doit plus être utilisé après l'appel à cette fonction */ 
Tasbinomial supprimer(Tasbinomial t); 

#endif
