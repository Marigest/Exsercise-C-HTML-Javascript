#include <iostream>
#include <string>
using namespace std;

class Libreria{
    protected:
        string titolo;
        int annoPubblicazione;
    public:
        Libreria(string tit, int anPub):titolo(tit), annoPubblicazione(anPub){
        }
        void mostraDettagli(){
        cout<<"Titolo: "<<titolo<<", Anno di Pubblicazione: "<<annoPubblicazione<<endl;
        }
        bool isAntico(){
            int annoCorrente=2023;
            return (annoCorrente-annoPubblicazione)>=50;
        }
        int calcolaAnni() {
            int annoCorrente=2023;
            return annoCorrente-annoPubblicazione;
        }
};

class Libro:public Libreria{
    private:
        int numeroPagine;
        string genere;
    public:
        Libro(string tit, int anPub, int pagine, string gen):Libreria(tit, anPub), numeroPagine(pagine), genere(gen){
        }
        bool verificaLunghezza(){
            return numeroPagine>300;
        }
        bool eFantasy(){
            return genere=="Fantasy";
        }
        void calcolaTempoLettura() {
            int tempoLettura=numeroPagine/30;
            cout<<"Tempo stimato di lettura: "<<tempoLettura<<" ore"<<endl;
        }
};

class Rivista:public Libreria{
    private:
        int numeroArticoli;
        string categoria;
    public:
        Rivista(string tit, int anPub, int articoli, string cat):Libreria(tit, anPub), numeroArticoli(articoli), categoria(cat) {}
        bool haMoltiArticoli(){
            return numeroArticoli>10;
        }
        bool eDiCategoria(string cat){
            return categoria==cat;
        }
        void mostraArticoli(){
            for(int i=1;i<=numeroArticoli;i++){
                cout<<"Articolo "<<i<<endl;
            }
        }
};

int main(){
    Libro mioLibro("Il Signore degli Anelli", 1954, 1200, "Fantasy"); 
    Rivista miaRivista("National Geographic", 2020, 15, "Scienza"); 
        cout<<"Dettagli del libro:"<<endl; 
        mioLibro.mostraDettagli(); 
        cout<<"È un libro fantasy? "<<(mioLibro.eFantasy() ? "Sì" : "No")<<endl; 
        cout<<"Il libro è lungo? "<<(mioLibro.verificaLunghezza() ? "Sì" : "No")<<endl; 
        mioLibro.calcolaTempoLettura(); 
        cout<<"\nDettagli della rivista:"<<endl; 
        miaRivista.mostraDettagli(); 
        cout<<"La rivista ha molti articoli? "<<(miaRivista.haMoltiArticoli() ? "Sì" : "No")<<endl; 
        cout<<"La rivista è di categoria 'Scienza'? "<<(miaRivista.eDiCategoria("Scienza") ? "Sì" : "No")<<endl; 
        miaRivista.mostraArticoli(); 
}