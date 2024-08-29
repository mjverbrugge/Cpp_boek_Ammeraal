/*Hoe kent u de (enkele) apostrof toe aan de char variabele ch?
*/
#include <iostream>
using namespace std;

int main(){
    const char* ch;
    ch = "\'";
    cout << "\nApostrof = " << ch << "\n\n";
    return 0;
}