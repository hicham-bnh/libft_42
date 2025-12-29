# Libft

## Description

Libft est le premier projet de l'école 42. Il consiste à recréer une bibliothèque de fonctions C standard et à y ajouter des fonctions utilitaires. Ce projet permet de mieux comprendre le fonctionnement des fonctions de la libc et de développer ses propres outils pour les projets futurs.

## Objectifs

- Recoder des fonctions de la bibliothèque standard C
- Créer des fonctions utilitaires supplémentaires
- Apprendre la gestion de la mémoire en C
- Maîtriser les pointeurs et les structures de données

## Compilation

Pour compiler la bibliothèque, utilisez la commande suivante :

```bash
make
```

Autres commandes disponibles :
- `make clean` : supprime les fichiers objets
- `make fclean` : supprime les fichiers objets et la bibliothèque
- `make re` : recompile entièrement la bibliothèque

## Utilisation

Pour utiliser libft dans vos projets :

1. Incluez le header dans votre fichier source :
```c
#include "libft.h"
```

2. Compilez votre programme avec la bibliothèque :
```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o programme
```

## Fonctions implémentées

### Partie 1 - Fonctions de la libc

**Manipulation de chaînes :**
- `ft_strlen` - calcule la longueur d'une chaîne
- `ft_strchr` - recherche un caractère dans une chaîne
- `ft_strrchr` - recherche un caractère depuis la fin
- `ft_strncmp` - compare deux chaînes
- `ft_strlcpy` - copie une chaîne avec protection de buffer
- `ft_strlcat` - concatène des chaînes avec protection
- `ft_strnstr` - recherche une sous-chaîne

**Manipulation de caractères :**
- `ft_isalpha` - vérifie si c'est une lettre
- `ft_isdigit` - vérifie si c'est un chiffre
- `ft_isalnum` - vérifie si c'est alphanumérique
- `ft_isascii` - vérifie si c'est un caractère ASCII
- `ft_isprint` - vérifie si c'est imprimable
- `ft_toupper` - convertit en majuscule
- `ft_tolower` - convertit en minuscule

**Manipulation de mémoire :**
- `ft_memset` - remplit une zone mémoire
- `ft_bzero` - met des zéros dans une zone mémoire
- `ft_memcpy` - copie une zone mémoire
- `ft_memmove` - copie avec gestion du chevauchement
- `ft_memchr` - recherche un octet en mémoire
- `ft_memcmp` - compare deux zones mémoires

**Conversion et allocation :**
- `ft_atoi` - convertit une chaîne en entier
- `ft_calloc` - alloue et initialise de la mémoire
- `ft_strdup` - duplique une chaîne

### Partie 2 - Fonctions supplémentaires

- `ft_substr` - extrait une sous-chaîne
- `ft_strjoin` - concatène deux chaînes
- `ft_strtrim` - supprime des caractères aux extrémités
- `ft_split` - découpe une chaîne selon un délimiteur
- `ft_itoa` - convertit un entier en chaîne
- `ft_strmapi` - applique une fonction à chaque caractère
- `ft_striteri` - itère sur une chaîne avec une fonction
- `ft_putchar_fd` - écrit un caractère sur un fd
- `ft_putstr_fd` - écrit une chaîne sur un fd
- `ft_putendl_fd` - écrit une chaîne suivie d'un retour à la ligne
- `ft_putnbr_fd` - écrit un nombre sur un fd

### Bonus - Listes chaînées

- `ft_lstnew` - crée un nouvel élément
- `ft_lstadd_front` - ajoute un élément au début
- `ft_lstsize` - compte les éléments
- `ft_lstlast` - retourne le dernier élément
- `ft_lstadd_back` - ajoute un élément à la fin
- `ft_lstdelone` - supprime un élément
- `ft_lstclear` - supprime et libère tous les éléments
- `ft_lstiter` - applique une fonction à chaque élément
- `ft_lstmap` - applique une fonction et crée une nouvelle liste

## Structure du projet

```
libft/
├── Makefile
├── libft.h
├── ft_*.c (fichiers sources)
└── README.md
```

## Normes

Ce projet respecte la Norme de 42 :
- Pas plus de 25 lignes par fonction
- Maximum 5 fonctions par fichier
- Pas de for, do while, switch, case ou goto
- Variables déclarées en début de fonction

## Auteur

mobenhab - École 42

## Licence

Ce projet est réalisé dans le cadre du cursus de l'école 42.
