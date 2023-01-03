#include <iostream>
#include "date.h"
#include <string>
#ifndef _AUTHOR
#define _AUTHOR
class Author {
private:
    std::string _id;
    std::string _nom;
    std::string _prenom;
    Date _datedenaissance;
public:
    Author(std::string id,std::string nom,std::string prenom,Date datedenaissance);
    Author();
    void afficherAuthor();
    std::string getId();
    std::string afficherNom();
    std::string afficherPrenom();
    friend bool operator==(Author const& a, Author const& b);
};
#endif //AUTHOR_H