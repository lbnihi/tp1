#include "Author.h"
#include<iostream>
using namespace std;
    Author::Author(std::string id,std::string nom,std::string prenom,Date datedenaissance):
      _id(id),_nom(nom),_prenom(prenom),_datedenaissance(datedenaissance){
    };
    Author::Author():
      _id("1234567"),_nom("hugo"),_prenom("victor"),_datedenaissance(10/12/2018){

    };
    void Author::afficherAuthor(){
      cout<<_nom<<" "<<_prenom;
     }
    std::string Author::getId(){
      return _id;
    }
    string Author::afficherNom(){
        return _nom;
    }
    string Author::afficherPrenom(){
        return _prenom;
    }
    bool operator==(Author const& a, Author const& b)
    {
    if (a._nom==b._nom && a._prenom==b._prenom) 
    {
        return true;
    }
    return false;
    }
    ostream& operator<<(ostream& os, Author const& A)
    {
       os << A._nom << " " << A._prenom << " " << A._id;
       return os;
    }
