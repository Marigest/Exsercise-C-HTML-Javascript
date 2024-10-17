#include <iostream>
using namespace std;

class Libreria{
    protected:
        string titolo;
    public:
        int annoPubblicazione;
        Libreria(string tit, int anPub){
            titolo=tit;
            annoPubblicazione=anPub;
        }
        void mostraDettagli(){
            cout<<"Il libro s'intitola "<<tit<<" ed è stato pubblicato nel "<<anPub<<"."<<endl;
        }
        bool isAntico(){
            int anno=2024;
                if(anno-anPub>=50){
                    cout<<"Il libro è vecchio";
                }
        }
        int calcolaAnni(){
            
        }
};

int main(){
    Libreria mioLibro=Libreria("Il Signore degli Anelli", 1954);
}