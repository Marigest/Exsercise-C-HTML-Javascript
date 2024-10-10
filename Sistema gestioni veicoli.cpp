#include <iostream>
using namespace std;

class Veicolo{
    protected:
        string marca;
        string modello;
    public:
        int anno;
    Veicolo(string mar, string mod, int an){
        marca=mar;
        modello=mod;
        anno=an;
    }
    void mostra_dettagli(){
        cout<<"La marca del veicolo è "<<marca<<" di modello "<<modello<<" di anno "<<anno<<"."<<endl;
    }
};

class Auto:public Veicolo{
    private:
        int numeroPorte;
    public:
        Auto(string mar, string mod, int an, int num):Veicolo(mar, mod, an){
            numeroPorte=num; 
        }
        void mostra_dettagli(){
            cout<<"La marca dell'auto è "<<marca<<" di modello "<<modello<<" di anno "<<anno<<" con "<<numeroPorte<<" porte."<<endl;
        }
};

class Moto:public Veicolo{
    private:
        bool haBauletto;
    public:
        Moto(string mar, string mod, int a, bool baule):Veicolo(mar, mod, a){
            baule=haBauletto;
        }
        void mostra_dettagli(){
            cout<<"La marca della moto è "<<marca<<" di modello "<<modello<<" di anno "<<anno;
            if(haBauletto){
                cout<<" con bauletto."<<endl;
            }else{
                cout<<" senza bauletto."<<endl;
            }
        }
};

int main(){
    Veicolo registro=Veicolo("Lamborghini", "Gallardo", 2003);
    Auto reg=Auto("BMW", "M3 E46", 2001, 3);
    Moto r=Moto("Kawasaki", "Ninja H2R", 2023, false);
    registro.mostra_dettagli();
    reg.mostra_dettagli();
    r.mostra_dettagli();
}