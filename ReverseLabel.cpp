#include<iostream>
#include<string>
using namespace std;
//Problema nivel facil de Coddy.tech
string reverseLabel(string label) {
    int n=label.size();
    char A[n];
    for(int i=0;i<n;i++) {
        A[i]=label[i];
    }
    char B[n];
    for(int i = 0; i < n; i++){
        B[i] = A[n-i-1];
    }
    string resultado="";
    for(int i=0;i<n;i++){
        resultado=resultado+B[i];
    }
    return resultado;

}
int main() {
    string label;
    cout<<"Ingrese una palabra para invertir"<<endl;
    cin>>label;
    cout<<reverseLabel(label);
}