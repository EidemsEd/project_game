#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int plziv = 10, x, y,v=20;
int vv=v+1;
string tof= "ano";
string chd[21][21];
int ii;


void jabko(int u){
    cout << "healovat? (ano/ne) ";
    cin >> tof;
    if(tof=="ano"){
        plziv = plziv + 5;
    }
}
void prPt(string inventar[], int &pocet){
    do{
    cout << "kde v x ";
    cin >> x;
    cout << "kde v y ";
    cin >> y;
    } while(chd[x-1][y-1]=="|     |");
    if (chd[x-1][y-1]=="|jabko|"){
        return jabko(1);
    }
}
void odeberPredmet(string inventar[], int &pocet){

}
void pouzijPredmet(string inventar[], int &pocet, int &zivoty, int &utok){

}
void vypisInventar(string inventar[], int pocet){

}

int main(){
for (int i=1; i!=v+2; i++){
    for (int u=1; u!=v+1; u++){
        chd[i-1][u-1]= "|     |";
    }
    cout << endl;
}
for(int h=0; h<4;h=h+1){
chd[rand() % 20][rand() % 20]= "|jabko|";
}
for (int i=1; i!=v+2; i++){
    if(i-1<10){
        cout << i-1 << ")  ";
    } if(i-1>=10){
        cout << i-1 << ") ";
    }
    if(i==1){
        for (int u=1; u!=v+1; u++){
            chd[i-1][u-1] = to_string(u);
            if(u<10){
                cout << "-";
            }
            cout << "---" << chd[i-1][u-1] << "---";

        }
    }
    if(i>1){
        for (int u=1; u!=v+1; u++){
            cout << "-" << chd[i-1][u-1];
        }
    }
    cout << "-" << endl;

}
cout << endl << endl;
do{
    char doo='+';
    cout << "co podniknes (+, -, u, e) ";
   cin >> doo;
    switch(doo){
        case '+':
            cout << prPt();
            break;
        case '-':
            cout << "-";
            break;
        case 'u':
            cout << "u";
            break;
        case 'e':
            cout << "e";
            break;
    } cout << endl << "-------------------------------------------------------" << endl;

   cout << "konec (x<0)";
   cin >> plziv;
} while(plziv>0);
}
