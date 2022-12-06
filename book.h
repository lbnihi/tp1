#include <string.h>
#include <vector>
#include "date.h"

#ifndef _BOOK
#define _BOOK

class Book {
private:
    /* data */
    std::string _title;
    std::string _author;
    std::string _language;
    std::string _type;
    Date _publication;
    std::string _isbn;
    std::vector <std::string> _list;

public:
   //Contructor
    Book(std::string title ="the",
    std::string author ="me",
    std::string language ="english",
    std::string type ="action",
    Date publication=Date(),
    std::string isbn = "05678379293",
    std::vector <std::string> list ={"jaja"});
  
  //methods
 
  std::string getTitle() const;
  std::string getAuthor() const;
  std::string getLanguage() const;
  std::string getType() const;
  std::string getISBN() const;
  void getList() const;
  Date getPublication() const;

};

//functions
 bool isISBN(std::string isbn);

#endif //BOOK_H