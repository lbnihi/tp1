#include <string.h>
#include "Emprunt.h"
#include <iostream>
using namespace std;
    Emprunt::Emprunt(std::string isbn):
            _isbn(isbn),_idLecteur("0"),_status(false){

    }
    //Emprunt::Emprunt(std::string isbn,std::string idLecteur,bool status):
           // __isbn(isbn),_idLecteur(idLecteur),_status(status){}
    string Emprunt::getidLecteur(){
        return _idLecteur;
    }
    bool Emprunt::getstatus(){
        cout<<_status;
    }
    Date Emprunt::getdatedemprunt(){
        return _datedemprunt;
    }
    string Emprunt::getisbn(){
        return _isbn;
    }
    void Emprunt::rendre(){
        _status=false;
        _idLecteur="0";
    }
     void Emprunt::emprunter(std::string idLecteur,Date datedemprunt){
        _status=true;
        _idLecteur=idLecteur;
        _datedemprunt=datedemprunt;
     }
