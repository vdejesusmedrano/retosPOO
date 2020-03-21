#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> operaciones{3, 4, 14, 6, 1, 4, 4};  //Vector de operaciones: rango de 1 a N+1
    cout << *max_element (operaciones.begin(), operaciones.end());
}


//Pasos para subir a Github
//0. Ubicarse en el repositorio que vas a actualizar
//1. git add .
//2. git commit -m "Se añadió el reto 8"
//3. git push origin