#include <iostream>
using namespace std;

class radiolina{
    protected:
        int volume;
        bool stato;
        float frequenza;
        int canale;
    public:
        radiolina(int ra, bool st, float freq){
           volume=ra;
           stato=st;
           frequenza=freq; 
        }
        bool onoff(bool st){
            if(stato==true){
                cout<<"La radio e' accesa."<<endl;
            }else{
                cout<<"La radio e' spenta."<<endl;
            }
            return stato;
        }
        void ascolta(){
            if(stato==true){
                cout<<"La radio e' connessa al canale "<<canale<<" con un volume di "<<volume<<"."<<endl;
            }else{
                cout<<"La radio e' spenta."<<endl;
            }
        }
        void vol(char v){
            switch(v){
                case '+':
                    if(volume==10){
                        cout<<"La radio e' gia al massimo volume.";
                        break;
                    }else{
                      volume++;  
                    }
                    break;
                case '-':
                    if(volume==0){
                        cout<<"La radio e' gia al minimo volume.";
                        break;
                    }else{
                      volume--;  
                    }
            }
        }
};

class RadioDAB:public radiolina{
    private:
        int canale, mem[3];
        string genere;
    public:
        RadioDAB(int ca, string gen):radiolina(5, true, 101.1){
            canale=ca;
            genere=gen;
        }
        void setCan(){
            int x;
            cout<<"Inserisci il canale: ";
            cin>>x;
            canale=x;
            char scelta;
            cout<<"Vuoi memorizzare il canale? (y/n): ";
            cin>>scelta;
                if(scelta=='y'||scelta=='Y'){
                    for(int i=0;i<3;i++) {
                        if(mem[i]==0){
                        mem[i]=x;
                        break;
                        }
                    }
                }
        } 
        void ascolta(){
            if(stato==true){
                cout<<"La radio e' connessa al canale "<<canale<<" di genere musicale "<<genere<<" con un volume di "<<volume<<"."<<endl;
            }else{
                cout<<"La radio e' spenta."<<endl;
            }
        }
        void ascolta(int x) {
        if (stato) {
            if (x >= 0 && x < 3 && mem[x] != 0) {
                cout << "Ascoltando il canale memorizzato: " << mem[x] << ", Genere: " << genere << endl;
            } else {
                cout << "Canale memorizzato non valido." << endl;
            }
        } else {
            cout << "La radio è spenta." << endl;
        }
    }
};

int main(){
RadioDAB radio(1, "Pop");
    radio.setCan();
    radio.ascolta();  
    radio.vol('-');
    int memCanale;
    cout << "Quale canale memorizzato vuoi ascoltare (0-2)? ";
    cin >> memCanale;
    radio.ascolta(memCanale);
    radio.onoff(true);
    radio.ascolta();
}