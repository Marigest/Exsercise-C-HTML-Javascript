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
                contenuto=contenuto-(capacita*0.1);
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
        Borraccia():Bicchiere()
        {
            tappo=false;
        }
        void Apri_Chiudi(){
            tappo=!tappo;
        }
        void Sorseggia(){
            if (tappo==true){
                if(contenuto>0){ 
                    Bevi();
                    }else{
                        cout<<"Borraccia vuota"<<endl;
                    }   
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
        bor.Ricolma();
        bor.Vedi();
            for(int i=0;i<10;i++){
                bor.Sorseggia();bor.Vedi();
            }
        
        
}