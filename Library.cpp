#include "Library.h"
#include<iostream>
using namespace std;
    void Library::addLivre(std::string titre, std::string nom,
        std::string prenom, std::string id, std::string langue,
         std::string type,Date publication,std::string isbn,
         Date datedenaissance,std::vector <std::string> list){
            Book b(titre,nom,prenom,id,langue,type,publication,isbn,datedenaissance,list);
             _livres.push_back(b);
    }
    void Library::afficherLivres(){
        std::cout<<_livres.size()<<std::endl;
        
        for (int i=0; i< _livres.size(); i++)
        {
            cout << i+1 << ": ";
            std::cout<<_livres[i].afficherTitre() << std::endl;
            //pourquoi il affiche que le cas i=0??
        }
    }
    /*bool Library::livreEstPresent(Book const& l){
        for (int i=0 ; i<_livres.size();i++)
        {
            if (_livres[i]==l)
            {
                cout<<"le livre est present dans la bibliotheque"<<endl;
                return true;
            
            }
            else{
                _livres.push_back(l);
                cout << "Le livre a bien ete ajoute a la bibliotheque" << endl;
                return false;
            }
        }
    
    }*/
    void Library::addLecteur(std::string nom, std::string prenom,std::string idLecteur,std::vector<std::string> idlivres){
        Lecteur L(nom,prenom,idLecteur,idlivres);
           _lecteurs.push_back(L);

    }
    /*bool Library::lecteurEstPresent(Lecteur const& l){
         for (int i=0 ; i<_lecteurs.size();i++)
        {
            if (_lecteurs[i]==l)
            {
                cout<<"le lecteur est present "<<endl;
                return true;
            
            }
            else
            {
                _lecteurs.push_back(l);
                cout << "Le nouveau lecteur a bien ete ajoute a la bibliotheque" << endl;
                return false;
            }
        }

    }*/
    void Library::afficherLecteurs(){
        for(int i=0;i<_lecteurs.size();i++)
        {
           cout<<_lecteurs[i].afficherNom() << " ";
           cout<<_lecteurs[i].afficherPrenom();
        }
        cout << endl;
    }
    void Library::addAuteur(std::string id,std::string nom, std::string prenom,Date datedenaissance){
        Author a(id,nom,prenom,datedenaissance);
         _auteurs.push_back(a);
    }
    /*bool Library::auteurEstPresent(Author const& l){
         for (int i=0 ; i<_auteurs.size();i++)
        {
            if (_auteurs[i]==l)
            {
                cout<<"l'auteur est present "<<endl;
                return true;
            
            }
            else
            {
                _auteurs.push_back(l);
                cout << "Le nouveau auteur a bien ete ajoute a la bibliotheque" << endl;
                return false;
            }
        }
    }*/
    void Library::afficherAuteur(){
         for(int i=0;i<_auteurs.size();i++)
        {
           cout<<_auteurs[i].afficherNom() << " ";
           cout<<_auteurs[i].afficherPrenom();
        }
        cout << endl;

    }
    /*void Library::emprunt(string isbnLivre,string idLecteur,Date datedemprunt){
          for (int i=0 ; i<_livres.size();i++)
          {
            if (_livres[i].getISBN()==isbnLivre)
            {
                 _lecteurs.addlivres(idLecteur);
            }
          }
    }*/
    /*void Library::emprunterLivre()
{
    string Livre;
    string Lecteur;
    string idLivre;
    string idLecteur;
    cout << "Saisir l'id du livre a emprunter" << endl;
    getline(cin, Livre);
    idLivre= Livre;
    cout << "Saisir l'id du lecteur qui emprunte" << endl;
    getline(cin, Lecteur);
    idLecteur= Lecteur;

    if(_livres[idLivre-1].estEmprunter())
    {
        cout << "Le livre est déja emprunte par quelqu'un d'autre" << endl;
    }
    else
    {
        m_livres[idLivre-1].emprunter(idLecteur);
        m_lecteurs[idLecteur-1].addIdLivre(idLivre);
        cout << "Le livre ";
        m_livres[idLivre-1].afficherTitre();
        cout  << "a bien ete emprunter par " << m_lecteurs[idLecteur-1] << endl;
    }*/

