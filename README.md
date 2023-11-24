# <p align="center">Projet : Printf</p>

Coder une fonction semblable à la commande printf de la librairie standard.

## Table des matières

- Fonctionnement
- Commande de compilation
- Pré-requis
- Exemples d'utilisation
- Man page
- Tests effectués
- Flowchar
## Fonctionnement

- Il utilise une fonction _putchar
- Vérifie si il y a une chaine de caractères dans une boucle
	* ⇒ si oui = vérifier la présence d’un %
	* ⇒ si non = il constate l'absence de caractère et retourne - 1
- Si un s, c, d, i, % est présent il  appelle la fonction correspondante aux caractères (s => appelle la fonction print_string)

## Commande de compilation

`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c`

## Pré-requis

- Les fichiers doivent être compilés sous Ubuntu 20.04 LTS
- Le code doit respecter le format Betty
- Les variables globales ne sont pas autorisées
- Chaque fichier doit comporter 5 fonctions au maximum
- Le main.c ne doit pas figurer dans le répertoire github
- Les prototypes des fonctions doivent être répertoriés dans un fichier d'en tête nommé, "main.h". Ce fichier doit inclure un "guarded"

## Man page
![Image](https://raw.githubusercontent.com/Dloyr/holbertonschool-printf/Readme/man%20printf1.png)
![Image](https://raw.githubusercontent.com/Dloyr/holbertonschool-printf/Readme/man%20printf2.png)

## Utilisation

- `_printf("Ceci est un texte"` => imprime "Ceci est un texte"
- `_printf("%s", nom de variable)` => imprime la chaine de caractères contenue dans la variable
- `_printf("%c", nom de variable)` => imprime un caractère contenu dans la variable
- `_printf("%d", nom de variable)` => imprime le nombre décimal contenu dans la variable
- `_printf("%i", nom de variable)` => imprime le nombre entier contenu dans la variable
- `_printf("%%")` => imprime un pourcentage

## Test
- Ecrire avec _printf
* `_printf("Let's try to printf a simple sentence.\n");`
	*  => Let's try to printf a  simple sentence.
----------
- Afficher la taille d'une chaine de caractère avec, %d et %i
- ` _printf("Length:[%d, %i]\n", len, len);`
	* => Length:[46, 46]
- Afficher un nombre stocké dans une variable, avec %d
- `_printf("Negative:[%d]\n", -762534);`
	* => Negative:[-762534]
----------
- Afficher une chaine de caractère contenue dans une variable, avec %s
- `len = _printf("Let's try to printf a %s simple sentence.\n", "coucou");`
	* => Let's try to printf a coucou simple sentence.
----------
- Afficher un caractère contenu dans une variable, avec %c
- `_printf("Character:[%c]\n",'H');`
	* => Character:[H]
----------
- Afficher un pourcentage
- `len = _printf("Percent:[%%]\n");`
	* => Percent:[%]
----------
- Afficher un pourcentage + caractère, si il est non reconnu comme une sous fonction du _printf
- `_printf("Unknown:[%r]\n");`
	* => Unknown:[%r]

## Flowchar
![Image](https://raw.githubusercontent.com/Dloyr/holbertonschool-printf/Readme/flowchar_printf.drawio.png)

## Author
#### Dimitri Loyer
- Github: [@Dloyr](https://github.com/Dloyr)

#### Alexis Billemont
- Github: [@git-alexis](https://github.com/git-alexis)
