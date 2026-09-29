#include<iostream>
using namespace std;
string decodeMessage(string encodedMessage) {
    int n=encodedMessage.size();
    char A[n];
    for(int i=0;i<n;i++){
        A[i]=encodedMessage[i];
    }
    char B[n];
    for(int i=0;i<n;i++){
        if(A[i]==' '){
            B[i]=' ';
        }
        else if(A[i]=='a'){
            B[i]='z';
        } else {
        B[i]=A[i]-1;
        }
    }
    string resultado="";
    for(int i=0;i<n;i++){
        resultado=resultado+B[i];
    }
    return resultado;
    
}

int main() {
    string encodedMessage;
    cout<<"Ingrese el mensaje codificado"<<endl;
    getline(cin,encodedMessage);
    cout<<"Mensaje decodificado"<<endl;
    cout<<decodeMessage(encodedMessage);
}