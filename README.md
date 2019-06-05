# Indi

## Initialisation du repo

## Installer les remotes

Sur le repo epitech,

``` git remote -v ```

Si seulement 2 lignes apparaissent, ajoutez le repo Indi :

Pour utiliser le type d'authentification ssh :

 ``` git remote add Indi git.github.com:Ryzzen/Indi.git ```

 Pour utiliser le type d'authentification https :

 ``` git remote add Indi https://github.com/Ryzzen/Indi.git ```

 ## Utiliser le mode d'authentification ssh

 Par défaut, le mode d'authentification se fait en entrant ses indentifiants à chaque actions, pour utilisé sa clé ssh, il faut changé l'addresse du remote de son repo (exemple ici pour le repo Indi) :

 ``` git remote set-url origin git.github.com:Ryzzen/Indi.git ```

## Instructions de push

### Création de branche

Création d'une branche et basculement sur cette dernière dans le repo Indi :

``` git checkout -b <nom de la branche> ```

Création de cette branche dans le repo epitech :

``` git checkout -b <nom de la branche> ```

(N'oubliez pas de push pour que la branche soit bien créé)

Mise à jour des branches distantes (dans le repo epitech) :

``` git fetch Indi ```

Création du suivi de la branche distante (repo Indi) :

``` git branch --set-upstream-to=Indi/<nom de la branche> <nom de la branche> ```

### Faire un push

``` git add <nom du ficher> ```

``` git commit -m "<message>" ```

``` git push origin <branche> ```

``` git push Indi <branche> ```

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