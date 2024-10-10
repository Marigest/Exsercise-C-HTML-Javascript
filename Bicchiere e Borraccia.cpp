#include <iostream>
using namespace std;

class Bicchiere{
    protected:
        int capacita;
        float contenuto;
    public:
        Bicchiere(){
            capacita=100;
            contenuto=0;
        }
        void Riempi(){
            contenuto=capacita;
        }
        void Bevi(){
            if (contenuto>0){
                contenuto-10%capacita;
            }else{
                cout<<"Il bicchiere è vuoto"<<endl;
            }     
        }
        void Vedi(){
            cout<<"Il bicchiere contiene "<<contenuto<<" ml"<<endl;
        }
};

class Borraccia:public Bicchiere{
    private:
        bool tappo;
    public:
        Borraccia(){
            tappo=false;
        }
        void Apri_Chiudi(){
            if (tappo==true){
                tappo=false;
            }else{
                tappo=true;
            }
        }
        void Sorseggia(){
            if (tappo==true){
                Bevi();
            }else{
                cout<<"Devi aprire la borraccia"<<endl;
            }
        }
        void Ricolma(){ 
            if (tappo==true){
                Riempi();
            }else{
                cout<<"Devi aprire la borraccia"<<endl;
            }
        }
};

int main(){
    Bicchiere bic;
        bic.Riempi();
        bic.Bevi();
        bic.Vedi();
    Borraccia bor;
        bor.Apri_Chiudi();
        bor.Sorseggia();
        bor.Ricolma();
}