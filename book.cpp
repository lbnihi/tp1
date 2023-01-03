#include <string.h>
#include <vector>
#include "book.h"
#include <iostream>
#include <assert.h>
using namespace std;
Book::Book(std::string title,
    std::string nom,
    std::string prénom,
    string id,
    std::string language,
    std::string type,
    Date publication,
    std::string isbn,
    Date datedenaissance,
    std::vector <std::string> list):
           _title(title),_auteur(id,nom,prénom,datedenaissance),_language(language),
           _type(type),_publication(publication),_isbn(isbn),_list(list){

              bool status = isISBN(isbn);
              assert(status && "ISBN is not valid");
    };
void Book::getAuthor(){
       _auteur.afficherAuthor();
}


std::string Book::afficherTitre() {
       return _title;
}    

std::string Book::getLanguage() {
       return _language;
}    

std::string Book::getISBN() {
       return _isbn;
}    

void Book::getList() {
    for ( auto it = _list.begin(); it != _list.end(); ++it)
    std::cout << *it << " ";
}    

std::string Book::getType() {
       return _type;
}    

Date Book::getPublication() {
       return _publication;
}

bool isISBN(std::string isbn){
       int a = isbn.size();
       if(a<10 || a>13)return false;
       return true;
}    
bool operator==(Book const& a, Book const& b)
{
    return a.estEgal(b);
}
bool Book::estEgal(Book const& b) const
{
    return (_title==b._title && _auteur==b._auteur && _language==b._language && _isbn==b._isbn);
}
/*bool Book::estEmprunter(){
       return _emprunt.getStatus();
}*/
  /*void emprunter(std::string idLecteur){
       Emprunt e(isbn)
       return  _emprunt.emprunter(idLecteur,datedemprunt);*/
  
  void rendreLivre();

