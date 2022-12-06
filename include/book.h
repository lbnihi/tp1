#ifndef BOOK_H
#define BOOK_H
#include<vector>
#include<Date.h>
class Book
{
    public:
        Book(std::string titre="The Hitchhiker's Guide to the Galaxy",std::string auteur="Douglas Adams",std::string langue="Anglais", std::string genre="Science Fiction" ,std::string ISBN="0593359445" ,Date date=Date(1,1,1),std::vector<std::string> liste={"mehdi"});
        void gettitre();
        void getauteur();
        void getlangue();
        void getgenre();
        void getISBN();
        void getdate();
        void getvecteur();
        void afficherliste();
    private:
        std::string _titre;
        std::string _auteur;
        std::string _langue;
        std::string _genre;
        Date _date;
        std::string _ISBN;
        std::vector <std::string> _liste;

};

#endif // BOOK_H
