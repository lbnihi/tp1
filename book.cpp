#include <string.h>
#include <vector>
#include "date.h"
#include "book.h"
#include <iostream>
#include <assert.h>

Book::Book(std::string title,std::string author,std::string language,
          std::string type,Date publication,std::string isbn,std::vector <std::string> list):
           _title(title),_author(author),_language(language),
           _type(type),_publication(publication),_isbn(isbn),_list(list){

              bool status = isISBN(isbn);
              assert(status && "ISBN is not valid");
    };

std::string Book::getAuthor() const{
      return _author;
}    

std::string Book::getTitle() const{
       return _title;
}    

std::string Book::getLanguage() const{
       return _language;
}    

std::string Book::getISBN() const{
       return _isbn;
}    

void Book::getList() const{
    for ( auto it = _list.begin(); it != _list.end(); ++it)
    std::cout << *it << " ";
}    

std::string Book::getType() const{
       return _type;
}    

Date Book::getPublication() const{
       return _publication;
}

bool isISBN(std::string isbn){
       int a = isbn.size();
       if(a<10 || a>13)return false;
       return true;
}    

