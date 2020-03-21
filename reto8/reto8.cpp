#include <iostream>
#include <vector>

using namespace std;

vector <int> solution (int N, vector <int> A){
    //Paso 1. Inicializar contadores en cero
    vector<int> contadores; //Array vacío
    for(int i = 0; i < N; i++){
        contadores.push_back(0);
    }

    //Paso 2. Recorrer el vector de operaciones
    //Nota: Si el valor esta en el rango de 1 a N, incrementar
    //Si no, entonces verificar el máximo valor y asignarlo a todos
    for(int k = 0; k < A.size(); k++){
        if(A[k] <= N){
            //2.1incrementar
            //(0,0,1,1,0)
            contadores[A[k]-1]++;
        }else{
            //2.2 Encontrar el máximo del vector de contadores
            //2.3 Asignarle ese valor a todos los contadores
        }
    }

    return contadores;
}

int main(){
    int N; //Número de contadores
    vector<int> A{3, 4, 4, 6, 1, 4, 4};  //Vector de operaciones: rango de 1 a N+1
    vector<int> resultado;
    cout << "Introduce el número de contadores: ";
    cin >> N; //El usuario introduce número de contadores
    /*for(int i = 0; i < A.size(); i++){
        cout << A[i];
    }
    */
    resultado = solution(N, A);
    for (int i = 0; i < resultado.size(); i++){
        cout << resultado[i];
    }
}