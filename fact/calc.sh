
#!/bin/bash

#A quoi sert ce truc sur la ligne du dessus?
#On appelle ça un shebang (prononcé chibangue) cela permet de préciser au systeme que tu utilises le bash pour scrypter

#Pourquoi les lignes commencent-elles par '#'?
#Le '#' en bash et dans d'autre langage permettent de faire des commentaires et donc non interprété lors de l'exécution de script


#Comment éditer un fichier? psk franchement redirigé avec '>' (moitié de koeur pour les kikou) ça va 5 min!
#Avec un éditeur de Texte, il en existe plusieurs et souvent les développeurs bataillent entre 'vim' et 'emacs' mais sincèrement la team vim est plus stylé
#Tu utiliseras donc un éditeur que tu auras choisis (vim évidement) par préférence.



###################################
#	Utilisation de vim	  #
###################################
#
# Pour utiliser vim il faut d'abord lancer la commande vim <filename>
# cela ouvre le fichier <filename> avec l'éditeur vim (#thank_captain_obvious)
# Vim possède plusieurs mode: Visual,Insertion,Recording  etc...
# Insertion pour écrire celui qui nous intéresse, après l'ouverture du fichier appuyer sur 'i'( en bas a gauche on voit insertion)
# tu peux écrire ce que tu veux. Une fois fini tu fais 'echap' puis ':wq + entrée'
# echap te ramene au 'menu',  ':' pour indiquer à l'editeur que tu rentres des instructions; 'wq' (Write & Quit) 'entrée' pour exécuter 
# La souris n'existe pas, mais vim est un outils très puissant et tu peux te déplacer assez rapidement (ctrl+ fleche) une fois que tu maitrises (google est ton amie)
#
###################################




####Astuce####

# variable
#pour stocker une variable a:  a=variable.
#utiliser une variable -> $a
#exemple
#a="toto"
#echo $a affiche toto


# $(<commande>)    permet d'éxécuter une commande dans un sous shell, tres utile pour enregistre le resultat d'une commande dans une variable
# $((<opération>)) permet d'éxécuter une opération mathématique









########Exercice addition
#nom: add
#objectif: additoner les deux premiers argument du script stocker dans 'a' et 'b'

add(){

  a=$1
  b=$2
  echo $a+$b= $(($a+$b)) 
}



########Exercier Power
#objectif: afficher a^b (a puissance b)
power(){
  a=$1
  b=$2
res=1

while [ $b -gt 0 ]
do
  res=$(($res*$a))
  b=$(($b-1))
done

echo $1^$2 = $res
}

#Exercice factoriel
#nom du script: fact
#Objectif: renvoyer le factoriel du  premier nombre passer en argument (factoriel 5 = 1*2*3*4*5=120)
#exécution du script: ./fact 5


fact(){
  n=$1
  #/*FIXME*/

}

add $1 $2
power $1 $2
echo fact 5=
fact 5








