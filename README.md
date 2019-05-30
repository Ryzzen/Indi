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