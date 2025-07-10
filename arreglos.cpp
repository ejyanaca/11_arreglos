#include<iostream>
using namespace std; 
int main(){
int n,max,A[20],pos;
pos=0;
cout<<"Ingrese la cantidad de Numeros: ";
cin>>n;
for(int i=0; i<n; i++){
    cout<<"Ingrese el numero "<<i+1<<": ";
    cin>>A[i];
}
max=A[0];
for(int i=1; i<n; i++){
    if(A[i]>max){
        max=A[i];
        pos=i;
    }
}
cout<<"El numero maximo es:"<<max<<" y se encuentra en a posicion "<<pos+1<<"."<<endl;
return 0;
}

