/*
 * ALPHONSE WOLFENSPERGER
 * TP4 
 * 
 * 
 */

#include <iostream>
#include "utilitaire_generation.h"
#include "utilitaire.h"
#include "type_def.h"
#include "repertoire.h"
using namespace std;


int main(){
  
    T_personne *Random;
    Random = new T_personne;
    genererPersonne(Random);
    //affichagePersonne(Random);

    T_personne *Random2;
    Random2 = new T_personne;
    genererPersonne(Random2);
    //affichagePersonne(Random);

    /*bool egalitecomp1 =egalitePersonne(Random2,Random2);
    cout<<egalitecomp1<<endl;*/


    T_elementListe *rep;
    rep = new T_elementListe;
    rep = creerElementListe(Random);

    T_elementListe *rep2;
    rep2 = new T_elementListe;
    rep2 = creerElementListe(Random2);

    rep=ajouter(rep, Random2);
    affichage_liste(rep);
    
    int Var_finder= rechercher(rep, Random);
    cout<<Var_finder<<endl;


    int Var_delete= supprimer(rep, Random2);
    cout<<Var_delete<<endl;

    affichage_liste(rep);


    //affichagePersonne(Random2);

    /*T_elementListe *rep;
    rep = new T_elementListe;
    rep = creerElementListe(Random);

    //ajouter(rep, Random2);
    affichage_liste(rep);


    //T_personne *Random2 = genererPersonne();
   // affichagePersonne(Random2);

    //T_personne *pointeurRandom=&Random;
    //T_elementListe *rep = creerElementListe(Random);

    T_elementListe *debut = ajouter(rep, Random2);*/

    //affichagePersonne(rep->Pers);
    //affichagePersonne(rep->suivant->Pers);
    //ajouter(T_personne *Personne, T_elementListe *ptrDebut);
    //ajouter(pointeurRandom, rep);
    //affichage_liste(debut);
    
    
    //Question 1 )à 7
    /*
    T_personne Random = genererPersonne();
    affichagePersonne(Random);

    T_personne Random2 = genererPersonne();
    affichagePersonne(Random2);

    T_personne Random3=Random2;
    affichagePersonne(Random3);

    bool egalitecomp1 =comparerPersonne(Random,Random2);
    cout<<egalitecomp1<<endl;

    bool egalitecomp2 =comparerPersonne(Random3,Random2);
    cout<<egalitecomp2<<endl;
    */
    

    //T_elementListe element = creerElementListe(ptrRandom);

    /*T_personne Random3 = Random2;
    bool egalite1 = egalitePersonne(Random, Random2);
    cout<<egalite1<<endl;

    bool egalite2 = egalitePersonne(Random3, Random2);
    cout<<egalite2<<endl;*/

    return 0;
}