# Indi

## Instructions de push

### Création de branche

Création d'une branche et basculement sur cette dernière dans le repo Indi :

``` git checkout -b <nom de la branche> ```

Création de cette branche dans le repo epitech :

``` git checkout -b <nom de la branche> ```

Mise à jour des branches distantes (dans le repo epitech) :

``` git fetch Indi ```

Création du suivi de la branche distante (repo Indi) :

``` git branch --set-upstream-to=Indi/<nom de la branche> <nom de la branche> ```

## Norme de commit

[ACTION] : Description

## Compilation cmake

Le dossier build devrait être vide sur le repository.

### Rajouter des sources

Aller dans CMakeLists.txt à la racine et ajouter le path de la source dans la fonction "add_executable()" de la même manière que les autres sources.

### Modifier le nom de l'exécutable

Aller dans CMakeLists.txt à la racine et changer le premier parametre de "add_executable()".

### Compiler sous Linux :

Aller dans le dossier `./build/`

``` cmake ./../ ```

``` cmake --build ./ ```

L'exécutable se trouve à la racine de ./build/

### Compiler sous Windows :

Ouvrir le repository sur Visual Studio

Cliquer sur le bouton 'Play' en vert en haut du logiciel, un terminal s'ouvre et exécute le programme.