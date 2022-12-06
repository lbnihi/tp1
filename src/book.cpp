#include "book.h"
#include"Date.h"
#include"iostream"
using namespace std;
Book::Book(std::string titre,std::string auteur,std::string langue, std::string genre ,string ISBN ,Date date,std::vector<string> liste ){
    _titre=titre;
    _auteur=auteur;
    _langue=langue;
    _genre=genre;
    _date=date;
    _liste=liste;
    int a=ISBN.size();
    if ((10<=a)   && (a<=13)){
        _ISBN=ISBN;
    }
    else {
    cout<<"veuillez entrer un ISBN valide";
    }
}

void Book::afficherliste() {
    cout << "hello world";
}
