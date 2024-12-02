# Bellanca_Plateau
T pour avancer
 Il y a un bouton restart mais les donn es ne sont pas r initialis es (th orie) donc il marche pas

 Rappel : Ooga Boogie
 Pr sentation g n rale
Ooga Boogie est un party game o  l action se d roule durant l  ge de pierre. Quatre tribus se battent
pour obtenir le Grand Feu Sacr  et ainsi  voluer vers la nouvelle  tape de la civilisation humaine. On
incarne un des quatre champion qui devra rivaliser avec les autres.
But du jeu
Sur le chemin, les hommes des cavernes doivent r colter le plus de ressources ayant plus ou moins
de valeur, du plus commun au plus rare : Bois, Pierre, Os et Silex. On remporte des ressources en
tombant sur les cases bonus et en r ussissant des mini-jeux et des qu tes.
Une fois assez de ressources r colt es, le joueur a la possibilit  de crafter des Totems Sacr s. Ils
n cessitent seulement 3 ressources pour  tre cr  s, mais leur valeur d pend des dites ressources.
Ex : le Totem de la For t (2 bois et 1 pierre) a moins de valeur que le Totem de la Montagne (3 pierres)
qui a moins de valeur que le Totem de la Savane (1 bois et 2 os) etc. Le premier arriv  au Grand Feu
Sacr  met fin   la partie. Les Totems sont alors comptabilis s et le joueur ayant le plus de Totems de
plus haute valeur gagne.
Plateau
Le plateau comptabilise 63 cases avec des d cors qui varient (for t, savane, cavernes, toundra, rivi re
etc ), les joueurs s y d placent en lan ant   tour de r le un d  6. Ils peuvent alors tomber sur
diff rentes cases. Les ressources gagn es d pendent de la zone o  le joueur se trouve, et plus on est
proche de la fin du plateau, plus les ressources ont de la valeur.
Case Bonus : Fait gagner des ressources, fait avancer d un nombre de cases ou permet de relancer le
d . Ex : le vent vous guide vers une piste de gibier, avancez de 2 cases
Case Malus : Enl ve des ressources, fait reculer d un nombre de cases ou fait relancer le d  (le joueur
reculera selon le nombre du d ). Ex : vous  tes entr  dans la tani re d un tigre   dents de sabre, vous
prenez la fuite et reculez de 3 cases.
Case Vol : Vole les ressources d un joueur.
Case Mini-jeux : Lance un mini jeu pour tous les joueurs. Ex:
R flexion : Recomposer un fossile le plus vite possible en bougeant des plaques.
R flexe : Attraper le plus de poissons dans la rivi re en cliquant au bon moment.
M moire : M moriser la m lodie des tambours et la reproduire.
Logique : Placer des obstacles pour guider un mammouth dans un pi ge.
Rapidit  : Rattraper le dodo avant les autres.
Case  change : Reconvertir un nombre de ressources pour en acqu rir des plus rares. Ex : 10 Bois
pour 1 Silex.
Strat gies
Au fil du jeu, le joueur peut soit consommer ses ressources d s le d but pour prendre de l avance, ou
bien attendre de r cup rer des ressources plus rares afin de construire des Totems ayant plus de
valeur et ainsi changer le cours de la partie.

Plateau Principal (Map):
Orienter la caméra en maintenant clic droit, zoomer avec la molette, déplacer avec ZQSD
Dé physique avec détection des faces pour déterminer le nombre
Nombre de dés modulable (DiceNumber), calcul du résultat en conséquence
Personnages se déplacent case par case sur le plateau, peu importe la distance ou la position (y compris en reculant)
2 skins pour les personnages (Joueur 1 cheveux noir panthère jaune, Joueur 2 cheveux blonds panthère noire)
Case avance de 2
Case recule de 2
Case ajoute 2 au score
Case ouvre mini jeux (au hasard 50/50 le memory ou la collecte)
Score des joueurs affichés
Résultat du ou des dés affiché(s)
Message indiquant le type de case sur lequel on tombe
Score des joueurs affiché (Joueur 1 en noir, 2 en blanc)


Menu (MenuMap) :
Écran de démarrage du jeu
Bouton Play
Bouton Quitter
Instructions du jeu

Memory (MemoryMap) : 
Cases qui se retourne avec une animation
Caméra Top Down immobile
Changement de joueur quand un joueur se trompe
Score affiché
Joueur gagne 2 points quand il trouve une paire
Le joueur rejoue s'il a trouvé une paire
Écran de fin avec annonce du gagnant
Le premier à jouer est déterminé au hasard

Collecte (CollectMap) :
Caméra top down immobile
Personnages 3ème personne animés
2 personnages controllables en même temps (J1 ZQSD / J2 Flèches Directionelles)
Score affiché
Timer affiché (2 min)
4 Spawners de dodos
Dodos fuient le joueur quand ils s'approchent
Variant Dodo doré (DodoKing) 10% de chance de spawn
Dodo = 2 points
Dododoré = 5 points
Spawn des dodos devient de plus en plus fréquent au fil du timer
Écran de fin avec annonce du gagnant