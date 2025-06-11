#include<iostream>
using namespace std;
int main(){
    int n,A[20],s=0;
    float prom;
    cout<<"Digite la cantidad de elementos del arreglo: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Digite el elemento "<<i+1<<" del arreglo :";
        cin>>A[i];
        s=s+A[i];
    }
    prom=s/n;
    cout<<"El promedio de los elementos del arreglo es: "<<prom<<endl;
    cout<<"Los elementos mayores al promedio son: "<<endl;
    for(int i=0; i<n; i++){
        if(A[i]>prom){
            cout<<A[i]<<endl;
        }
    }
    return 0;
}
