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
    void carica(){
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
    }
    void vedi(){
        cout<<"Il drone è a cordinata x="<<x<<" e a cordinata y="<<y<<"."<<endl;
    }
};

class Drone:public Macchinina{
    private:
        int z;
    public:
        Drone(int a, int b, int ca):Macchinina(int a, int b, int ca){
            
        }
};

int main(){
    
}