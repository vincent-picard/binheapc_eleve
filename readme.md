# MPI* : Implémentation des tas binomiaux en langage C

**A rendre (au format prenom_nom.zip) pour le 27 octobre**

Il s'agit d'implémenter les algorithmes expliqués lors des TD*.

Le projet est décomposé en deux modules :
1) Le module arbre qui se concentre sur l'implémentation des arbres binomiaux
2) Le module binheap qui implémente un tas binomial comme une foret d'arbres binomiaux

La description de chacune des fonctions à implémenter est donnée dans les fichiers
d'en-tête `arbre.h` et `binheap.h`.

## Récupération du projet avec `git`

Pour récupérer les fichiers du projets, placez-vous dans le répertoire de votre choix, puis taper la commande
```
git clone 'https://github.com/vincent-picard/binheapc_eleve.git'
```
Cela aura pour effet de créer un répertoire `binheapc_eleve` contenant le projet.

Pour que cette commande puisse fonctionner, `git` doit être installé sur votre ordinateur. Avec `apt`, il s'installe
avec la commande `sudo apt install git`.

## Compilation du projet

Le projet est fourni avec un fichier *Makefile* qui facilite sa compilation à l'aide des commandes suivantes :
- `make` : compile l'ensemble du projet
- `make test_arbre.exe` : compile seulement la partie arbre du projet
- `make test_binheap.exe` : compile seulement le programme de test des arbres binomiaux
- `make clean` : supprime tous les fichiers compilés
