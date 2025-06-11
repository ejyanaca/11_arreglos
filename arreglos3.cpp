#include<iostream>
using namespace std;
int main(){
    int n,aux,A[20];
    cout<<"Ingrese la cantidad de elementos del arreglo: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Digite el elemento "<<i+1<<" del arreglo: ";
        cin>>A[i];
    }
    cout<<endl;
    for(int i=0; i<n/2; i++){
        aux=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=aux;
    }
    cout<<endl;
    for (int i=0; i<n; i++){
        cout<<A[i]<<endl;
    }
    return 0;     
}
