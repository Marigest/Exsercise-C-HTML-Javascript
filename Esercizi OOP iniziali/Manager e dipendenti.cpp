#include <iostream>
using namespace std;

class Dipendente{
    protected:
        string nome;
        double stipendioBase;
    public:
        Dipendente(string n, double stipBas){
            nome=n;
            stipendioBase=stipBas;
        }
        void visualizza(){
            cout<<"Il nome del dipendete e' "<<nome<<" con uno stipedendio di "<<stipendioBase<<endl;
        }
        double salariotot(double bonus){
            stipendioBase=stipendioBase+bonus;
            return stipendioBase;
        }
        double pagagiornaliera(int g){
            return (stipendioBase/g);
        }
};

class Manager:public Dipendente{
    private:
        double bonus;
        int numeroDipendenti;
    public:
        Manager(string n, double stipBas, double bo, int numdip):Dipendente(n, stipBas){
            bonus=bo;
            numeroDipendenti=numdip;
        }
        void visualizza(){
            cout<<"Il numero di dipendenti supervisionati dal manager sono "<<numeroDipendenti<<" con un bonus di "<<bonus<<endl;
        }
        void supermanager(){
            if(numeroDipendenti>10){
                bonus=bonus+(bonus*0.3);
            }
        }
        double stipendioManager(){
            return stipendioBase+bonus;
        }
};  

int main(){
Dipendente dip("Marco", 1700);
int giorni;
    dip.visualizza();
    cout<<"Il salario dei dipendenti con il bonus in piu' e' "<<dip.salariotot(200)<<endl;
    cout<<"Quanti giorni ha lavorato il dipendente? ";
    cin>>giorni;
    cout<<"Il dipendente ha una paga giornaliera di "<<dip.pagagiornaliera(giorni)<<endl;
Manager man("Carlo", 1700, 200, 15);
    man.visualizza();
    man.supermanager();
    cout<<"Lo stipendio del Manager e' di "<<man.stipendioManager()<<endl; 
}