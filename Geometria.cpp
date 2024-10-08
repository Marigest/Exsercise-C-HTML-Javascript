#include <iostream>
using namespace std;

class Cerchio{
    private:
        double x, y, raggio;
    public:
        double Area();
        double Circonferenza();
        double Getx();
        void Setx(double a);
        double Gety();
        void Sety(double b);
        double Getraggio();
        void Setraggio(double r);
};
double Cerchio::Area(){
    return (raggio*raggio)*3.14;
}
double Cerchio::Circonferenza(){
    return (raggio*2)*3.14;
}
double Cerchio::Getx(){
    return x;
};
void Cerchio::Setx(double a){
    x=a;
};
double Cerchio::Gety(){
    return y;
};
void Cerchio::Sety(double b){
    y=b;
};
double Cerchio::Getraggio(){
    return raggio;
};
void Cerchio::Setraggio(double r){
    raggio=r;
};
int main(){
Cerchio c;
    c.Setx(0);
    c.Sety(0);
    c.Setraggio(0);
    cout<<"Cordinate del centro del cerchio: ("<<c.Getx()<<" , "<<c.Gety()<<")"<<endl;
    cout<<"Raggio del cerchio: "<<c.Getraggio()<<endl;
    cout<<"Area del cerchio: "<<c.Area()<<endl;
    cout<<"Croconferenza del cerchio: "<<c.Circonferenza()<<endl;
    }