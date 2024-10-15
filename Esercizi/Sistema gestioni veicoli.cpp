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
        float calcolabollo(){
        return (2024-anno)*1.15;
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
        float calcolabollo(){
        return ((2024-anno)*1.15)-(((2024-anno)*1.5)*0.20);
    }
};

class Camion:public Veicolo{
    private:
        int capacita_carico;
    public:
        Camion(string mar, string mod, int a, int capacita):Veicolo(mar, mod, a){
            capacita=capacita_carico;
        }
        void mostra_dettagli(){
            cout<<"La marca del camion è "<<marca<<" di modello "<<modello<<" di anno "<<anno<<" con una capacità di "<<capacita_carico<<"."<<endl;
        }
        float calcolabollo(){
        return ((2024-anno)*1.15)+(capacita_carico*0.7);
        }
};

int main(){
    Auto registro=Auto("BMW", "M3 E46", 2001, 3);
    Moto reg=Moto("Kawasaki", "Ninja H2R", 2023, false);
    Camion r=Camion("Iveco", "S-eWay", 2019, 100);
    registro.mostra_dettagli();
    reg.mostra_dettagli();
    r.mostra_dettagli();
    cout<<"Il bollo del veicolo è di "<<registro.calcolabollo()<<endl;
    cout<<"Il bollo della moto è di "<<reg.calcolabollo()<<endl;
    cout<<"Il bollo del camion è di "<<r.calcolabollo()<<endl;
}