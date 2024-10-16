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
            cout<<"Il libro si intitola "<<tit<<
        }
        void isAntico(){

        }
        int calcolaAnni(){

        }
}

int main(){

}