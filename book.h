#include <string.h>
#include <vector>
#include "date.h"
#include "Author.h"
#include "Emprunt.h"
#ifndef _BOOK
#define _BOOK

class Book {
private:
    /* data */
    std::string _title;
    std::string _language;
    std::string _type;
    Date _publication;
    std::string _isbn;
    std::vector <std::string> _list;
    Author _auteur;
public:
   //Contructor
    Book(std::string title,
    std::string nom,
    std::string prénom,
    std::string id,
    std::string language,
    std::string type,
    Date publication,
    std::string isbn,
    Date datedenaissance,
    std::vector <std::string> list);
  
  //methods
  
  std::string afficherTitre() ;
  void getAuthor() ;
  std::string getLanguage() ;
  std::string getType() ;
  std::string getISBN() ;
  void getList() ;
  Date getPublication() ;
  bool estEmprunter();
  //void rendreLivre();
  bool estEgal(Book const& b) const ;

};

//functions
 bool isISBN(std::string isbn);
 bool operator==(Book const& a, Book const& b);


#endif //BOOK_H