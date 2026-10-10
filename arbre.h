#ifndef ARBRE_H
#define ARBRE_H

/* On implémente des arbres généraux
 * (nombre quelqueconque de fils)
 * Chaque noeud possède un lien vers son
 * premier fils et un lien vers son frère suivant
 */

struct noeud_s {
    int val; // Etiquette du noeud
    int ordre; // Ordre de l'arbre binomial
    struct noeud_s *fils;
    struct noeud_s *frere;
};

typedef struct noeud_s Noeud;

typedef Noeud* Arbre;

/* Fonction d'affichage */
void print_arbre(Arbre a);

/* Fonctions usuelles sur les arbres généraux */
int hauteur(Arbre a);
int taille(Arbre a);

/* Vérification que chaque fils a une plus grande
 * étiquette que son père
 */
bool est_tasmin(Arbre a);

/* Créé un arbre binomial d'ordre 0 */
/* Cette fonction alloue de la mémoire sur le tas */
Arbre nouveau_noeud(int val);

/* Libère la mémoire allouée pour l'ensemble des noeuds
 * d'un arbre */
void detruire_arbre(Arbre a);

/* Réalise la fusion des arbres a1 et a2
 * en modifiant a1 pour que a2 soit son premier fils
 * aucune allocation mémoire n'est effectuée
 *
 * Préconditions : a1 et a2 deux arbres binomiaux
 * de même ordre
 */
void fusion(Arbre a1, Arbre a2);

/* Réalise la fusion des arbres a1 et a2 de manière
 * à obtenir un arbre binomial qui est un tas min
 * en sortie.
 * Cette fonction modifie a1 ou a2.
 * Aucune allocation mémoire n'est effectuée.
 *
 * Préconditions : a1 et a2 deux arbres binomiaux
 * de même ordre qui sont des tas min.
 */
Arbre fusion_tasmin(Arbre a1, Arbre a2);

#endif
