#include <iostream>
using namespace std;

class Macchinina{
    protected:
        int x, y, carica=100;
    public:
    Macchinina(int a, int b, int ca){
        x=a;
        y=b;
        carica=ca;
    }
    void ricarica(){
        int temp;
        int sol;
        if(carica==0){
            carica=carica+100;
        }else{
            temp=carica;
            sol=100-temp;
            carica=carica+sol;
        }
    }
    void muovi(char M){
        if(carica==0){
            cout<<"Il drone è scarico.";
        }
        switch(M){
            case 'w':
                x++;
                carica=carica-(carica * 0.01);
                    break;
            case 's':
                x--;
                carica=carica-(carica*0.01);
                    break;
            case 'a':
                y++;
                carica=carica-(carica*0.01);
                    break;
            case 'd':
                y--;
                carica=carica-(carica*0.01);
                    break;
        }
    }
    void vedi(){
        cout<<"Il drone è a cordinata x="<<x<<" e a cordinata y="<<y<<"."<<endl;
    }
};

class Drone:public Macchinina{
    private:
        int z;
    public:
        Drone(int a, int b, int ca, int d):Macchinina(a, b, ca){
            z=d;
        }
        void muovi(char M){
            if(carica==0){
            cout<<"Il drone è scarico.";
            }
        switch(M){
            case 'w':
                x++;
                carica=carica-(carica*0.01);
                    break;
            case 's':
                x--;
                carica=carica-(carica*0.01);

                    break;
            case 'a':
                y++;
                carica=carica-(carica*0.01);
                    break;
            case 'd':
                y--;
                carica=carica-(carica*0.01);
                    break;
            case 'o':
                z++;
                carica=carica-(carica*0.01);
                    break;
            case 'p':
                if(carica>0){
                    z--;
                    carica=carica-(carica*0.01);
                }
                    break;
            }
        }
        void vedi(){
            cout<<"Il drone è a cordinata x="<<x<<" e a cordinata y="<<y<<" e a cordinata z="<<z<<"."<<endl;
        }
};

int main(){
    Drone d(0, 0, 100, 0);
    char comando;
    while(true){
        cout<<"Inserisci un comando (w/s/a/d/o/p per muovere, x per uscire): ";
        cin>>comando;
            if(comando=='x'){
                break;
            }
        d.muovi(comando);
        d.vedi();
    }
}