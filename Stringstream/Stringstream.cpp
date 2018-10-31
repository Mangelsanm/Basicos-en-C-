/************************************
* Miguel Mares
* Caso simple para aprender a usar la variable
* stringstream.
* Se piden numero separados por un coma sin espacios
* al final estos seran ordenanos en un vector. Pasan
* de ser un string a un arreglo.
************************************/

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> parseInts(string str){
    stringstream ss(str);
    vector<int> arreglo;
    int vEnteros;
    char vChar;

    while(ss >> vEnteros){
        arreglo.push_back(vEnteros);
        ss >> vChar;
    }
    return arreglo;
}

int main(){
    string str;
    cout << "String de numeros separados por comas, sin espacios: " << flush;
    cin >> str;

    vector<int> enteros = parseInts(str);
    for(vector<int>::iterator it = enteros.begin(); it != enteros.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
