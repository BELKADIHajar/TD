// App.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "MAD.h"
#include "date.h"
#include"Client.h"
#include "Compte.h"
#include "CompteEpargne.h"
#include "ComptePayant.h"
#include"CompteCourant.h"
#include"AppBanque.h"
int main()
{
    AppBanque* appBanque;
    appBanque = new AppBanque();
    MAD solde1(3000);
    MAD solde2(3000);
    MAD m1(100);
    MAD m2(200);
    MAD decouvert1(800);
    //solde1.afficher();
    date dt1(17, 05, 2022);
    date dt2(17, 05, 2022);
    date dt(02, 05, 2021);
    //dt1.print();
    Client client1("nom1", "prenom1");
    Client client2("nom2", "prenom2");
    Client* client3 =new Client("nom3", "prenom3");
    
    //appBanque->AddClient(client3);
     //appBanque->print();
    //client1.print();
    Compte* compte1 = new Compte(client1, dt1, solde2);
    Compte* compte2 = new Compte(client2, dt2, solde1);
    CompteEpargne  compteE1(client2, dt2, solde1,10);
    ComptePayant* compteP1 = new ComptePayant(client2, dt, solde2);//3000
    //compte1->Consulter();
    /*compteE1.Consulter();
    compteP1->Consulter();
    cout << "ReTirer : 200" << endl;
    compteP1->retirer(m2);
    compteP1->Consulter();
    cout << "Deposer : 100" << endl;
    compteP1->deposer(m1);
    compteP1->Consulter();
    cout << "ReTirer : 200" << endl;
    compteE1.retirer(m2);
    compteE1.Consulter();*/
    /*cout << "calcultINteret" << endl;
    compteE1.calculInteret();
    compteE1.Consulter();
    cout << "C1" << endl;
    compte1->Consulter();
    cout << "C2" << endl;
    compteE1.Consulter();
    compteE1.transferer(m1, *compte1);
    cout << "C1" << endl;
    compte1->Consulter();
    cout << "C2" << endl;
    compteE1.Consulter();
    cout << "ReTirer" << endl;
    compteE1.retirer(5);
    compteE1.Consulter();
    cout << "Deposer" << endl;
    compteE1.deposer(10);
    compteE1.Consulter();*/
    //800----3000
    /*MAD test(3000);
    CompteCourant* CompteC2 = new CompteCourant(client1, dt1, solde1, decouvert1);
    CompteC2->Consulter();
    CompteC2->retirer(test);
    CompteC2->Consulter();
    compte1->Consulter();
    compte1->retirer(m1);
    compte1->Consulter();*/
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
