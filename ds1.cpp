class Secret{
    public:
    Secret(std::string codesecret);
    Secret();
    std::string affichercode();
    int longueur(std::string s1);
    bool compare(std::string nombre);
    private:
    std::string _codesecret;

}
Secret::Secret():_codesecret("0000"){

}
Secret::Secret(std::string codesecret){
    if (codesecret.size()==4 && codesecret.size()==6)
    {
        _codesecret=codesecret;
    }
}
std::string Secret::affichercode(){
    cout<<_codesecret;
}
int Secret::longueur(std::string s1){
    int c=0;
    for (int i = 0; i < s1.length(); i++){
         c+=1;
    }
    cout<<c;
}
bool Secret::compare(std::string nombre){
    if (_codesecret.length()==nombre.length()){
            int j=0;
            for (int i=0;i<nombre.length();i++){
              if (nombre[i]==_codesecret[j]){
                 j+=1;
              }

            }
            if (j==_codesecret.length()-1){
               return true;
            }
            else
            {
                return false;
            }
    }
    else
    {
        return false;
    }
}