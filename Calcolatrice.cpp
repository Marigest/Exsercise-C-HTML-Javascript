#include <iostream>
using namespace std;

class Calcolatrice {
private:
    int a, b;
public:
void Numeri (int primo, int secondo) {
    a = primo;
    b = secondo;
}

int somma() {
    return a + b;
}

int sottrazione() {
    return a - b;
}

int moltiplicazione() {
    return a * b;
}

int divisione() {
    return a / b;
}

int mcd() {
int x = a, y = b;
    while (y != 0) {
    int temp = y;
        y = x % temp;
        x = temp;
    }
return x;
}

int mcm() {
return (a * b) / mcd();
}

};

int main() {
Calcolatrice calc;
int a, b;
char operazione;
    cout<<"Inserisci l'operazione (+, -, *, /): ";
        cin>>operazione;
    cout<<"Inserisci il primo numero: ";
        cin>>a;
    cout<<"Inserisci il secondo numero: ";
        cin>>b; 
    calc.Numeri(a, b);
switch (operazione) {
    case '+':
        cout<<"Risultato: "<<calc.somma()<<endl;
            break;
    case '-':
        cout<<"Risultato: "<<calc.sottrazione()<<endl;
            break;
    case '*':
        cout<<"Risultato: "<<calc.moltiplicazione()<<endl;
            break;
    case '/':
        if (b != 0){
            cout<<"Risultato: "<<calc.divisione()<<endl;
        }else{
            cout<<"Errore: divisione per zero!"<<endl;
        }
            break;
}
    cout<<"MCD: "<<calc.mcd()<<endl;
    cout<<"MCM: "<<calc.mcm()<<endl;
    return 0;
}
