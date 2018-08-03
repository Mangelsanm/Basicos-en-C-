#include <iostream>
using namespace std;

int main(){
    char text[] = "hello world !!";
    int nChar = sizeof(text) - 1;
    char *pText = &text[0];
    char *pEnd = &text[nChar - 1];

    while(true){
        if(pEnd < pText){
            break;
        }
        char auxiliar = *pText;
        *pText = *pEnd;
        *pEnd = auxiliar;

        pText++;
        pEnd--;
    }

    cout << text << endl;

    return 0;
}
