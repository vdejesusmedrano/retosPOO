#include<iostream>

using namespace std;

int minsaltos(int X, int Y, int D){
    int res;
    int diff = Y-X;
    return res;
}


int main(){
    int X, Y, D;
    int resultado;
    cout<< "Parcero, dame punto de inicio: " << endl;
    cin >> X;
    cout<< "Parcero, dame punto de fin: " << endl;
    cin >> Y;
    cout<< "Parcero, dame distancia de saltos: " << endl;
    cin >> D;

    resultado = minsaltos(X, Y, D);

    cout<<"Parcero, el número de saltos mínimos es"<< resultado;
}