#include <string>
#include <iostream>
using namespace std;
int navigateEnchantedForest(string path) {
    int n=path.size();
    char A[n];
    for(int i=0;i<n;i++){
        A[i]=path[i];
    }
    int cont=0;
    for(int i=0;i<n;i++){
        if(A[i]=='F') {
            cont ++;
        } else if(A[i]=='T') {
            cont ++;
            return cont;
            break;
        } else if(A[i]=='O') {
            return cont;
            break;
        }
    }
    return cont;
}
int main() {
    string path;
    cout<<"Ingrese la ruta recorrida por el explorador"<<endl;
    cin>>path;
    cout<<"Paso dados por el explorador"<<endl;
    cout<<navigateEnchantedForest(path);
}