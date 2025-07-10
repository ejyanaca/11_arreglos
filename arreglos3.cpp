#include<iostream>
using namespace std;
int main(){
    int n,aux,A[20];
    cout<<"Ingrese la cantidad de elementos del arreglo: ";
    cin>>n;
    if (n<1 || n>20){
        cout<<"Ingreso un numero fuera del rango ."<<endl;
    }
    for(int i=0; i<n; i++){
        cout<<"Digite el elemento "<< i+1 <<": ";
        cin>>A[i];
    }
    for(int i=0; i<n/2; i++){
        aux=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=aux;
    }
    cout<< "\nArreglo invertido:\n";
    for (int i=0; i<n; i++){
        cout<<A[i]<< " ";
    }
    return 0;     
}
