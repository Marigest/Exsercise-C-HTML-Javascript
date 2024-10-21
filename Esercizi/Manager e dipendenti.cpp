#include <iostream>
using namespace std;

class Dipendente{
    protected:
        string nome;
        double stipendiobase;
    public:
        Dipendente(string no, double stip){
            nome=no;
            stipendiobase=stip;
        }
        void visualizza(){
            cout<<"Il dipendente "<<nome<<" ha rivevuto uno stipendio base di "<<stipendiobase<<"."<<endl;
        }
        double salariototale(){
            
        }
};

class Manager:public Dipendente{
    private:
        double bonus;
        int numerodipendenti;
    public:
        Manager(string no, double stip, double bo, int numdip):Dipendente(no, stip){
            bonus=bo;
            numerodipendenti=numdip;
        }
        void visualizza(){
            cout<<"I dipendenti di questa azienda sono: "<<numerodipendenti<<endl;
            cout<<"Il dipendente "<<nome<<" ha rivevuto uno stipendio base di "<<stipendiobase<<"."<<endl;
        }
}

int main(){

}