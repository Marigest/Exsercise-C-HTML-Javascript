#include <iostream>
using namespace std;

class Lampadine {
   private:
       bool stato;
   public:
       Lampadine(){
           stato=false;
       }
       void interruttore(){
           if(stato==true){
               stato = false;
           }else{
               stato = true;
           }
       }
       bool vedi(){
           return stato;
       }
};
int main() {
   srand(time(0));
   Lampadine x, y, z;
   int temp;
   for(int i=0;i<1000;i++){
       temp = rand() % 3;
       switch(temp){
           case 0: x.interruttore();
               break;
           case 1: y.interruttore();
               break;
           case 2: z.interruttore();
               break;
       }
   }
   cout<<"Stato lampadina 1: "<<(x.vedi() ? "Accesa" : "Spenta")<<endl;
   cout<<"Stato lampadina 2: "<<(y.vedi() ? "Accesa" : "Spenta")<<endl;
   cout<<"Stato lampadina 3: "<<(z.vedi() ? "Accesa" : "Spenta")<<endl;
}