
# BPC THEME 1 SEMAINE 1

## 1.1 : Un shell
### Exercice 1
- man putchar

## 1.2 : Un editeur, Emacs
### Exercice 2
- alt x : M-x emacs-version
GNU Emacs 29.1 (...) of 2023-08-02

- ctrl h : C-h i
GNU Emacs manuel

### Exercice 3
- <C-> représente la touche Control (CTRL).
- <M-> représente la touche Meta, (Alt).

## 1.4 : Un compilateur
### Exercice 7
- gcc -Wall exo7.c -o test (cette commande permet de compiler le fichier)
- ./test (permet d'exécuter le fichier compiler) 

## 2 : Premier pas en C
### Exercice 9
- Emacs : C-x h (sélectionne tout le code), M-x indent-region (réindente le code)

### Exercice 10
- Emacs : C-space (pour créer un point de départ) puis m-; (Alt + ;) pour commenter; (refaire la meme chose pour décommenter)
- Emacs : C-x C-s pour sauvegarder

### Exercice 11
-  HI!\n : 72, 105, 33, 10
-  gcc prog1.c -o prog1 puis ./prog1 (compiler puis lancer le programme)

### Exercice 12
- ls (afficher le répértoire courant), gcc prog1.c -o prog1 (compile le programme)
- gcc prog1.c -o prog1 (compile le programme), ls (affiche le repertoire) : on apperçoit aprés avoir compiler le fichier qui a été compiler en vert

### Exercice 13
- ./prog1 (lance le programme compiler)
- La sortie devrait être "HI!\n" comme prédit dans l'exercice 11, car le programme affiche les caractères correspondants aux valeurs ASCII 72, 105, 33 et 10

## 3 : Exercice de préparation 
### Exercice 14
- gcc exo14.c -o exo14 puis ./exo14

### Exercice 15
- gcc -o0 -g -o exo15 exo15.c puis gdb ./exo15
- break main, run, next, print a, print b (répéter les commandes next, print pour parcourir le programme), quand terminer : quit

### Exercice 16
- gcc -o exo16 exo16.c -lm puis ./exo16

### Exercice 17 / 18 / 19
- gcc -o numbers-test numbers-test.c puis ./numbers-test


- Exercice 19 : La fonction putdec prend en argument un entier d et affiche sa représentation décimale 

- Exercice 20 : 1. on initialise la variable int i = -2147483648, 2. on passe l'argument dans putdec(-i) dans le cas ou i = -2147483648 il ne peut être representée dans un entier signé 32 bits car cela dépasse la plage maximal possible

- Exercice 21 : 
