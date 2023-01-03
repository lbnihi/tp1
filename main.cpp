#include "Library.h"
#include <iostream>
using namespace std;
/*#include "book.h"

#include "Author.h"*/
int main(int argc, char const *argv[]) {
 /*Date a_day(7,31,2022);
 a_day.updateYear(-2000);
  std::cout << "a year: " << a_day.year() << std::endl;
  std::cout << "a day: " << toString(a_day) << std::endl;
  std::cout << "#day: " << dayOfYear(a_day) << std::endl;
  a_day.next();

  std::cout << "a day + 1: " << toString(a_day) << std::endl;
  std::cout << "#day: " << dayOfYear(a_day) << std::endl;*/

 /*Book my_book("title","nom","prenom",12345,"langue","type",Date (12,3,2018),"12345678910",Date (1,1,1),{"sjsjk"});
    my_book.getAuthor();*/
  /*Emprunt mehdi("1234567891");
     mehdi.emprunter("123456",Date (12,3,2018));
     cout<<mehdi.getstatus()<<endl;
     cout<<mehdi.getidLecteur()<<endl;
     mehdi.rendre();
     cout<<mehdi.getstatus()<<endl;
     cout<<mehdi.getidLecteur();*/
   Library  b;
        b.addLivre("tile","nom","prenom","12345","langue","type",Date (12,3,2018),"12345678910",Date (1,1,1),{"sjsjk"});
        b.addLivre("tit","nom","prenom","12345","langue","type",Date (12,3,2018),"12345678910",Date (1,1,1),{"sjsjk"});
        b.addLivre("ti","nom","prenom","12345","langue","type",Date (12,3,2018),"12345678910",Date (1,1,1),{"sjsjk"});
      
        b.addLecteur("nom", "prenom","idLecteur",std::vector<std::string> {"nnn"});
        b.afficherLecteurs();
        b.afficherLivres();
       
   
    return 0;

}