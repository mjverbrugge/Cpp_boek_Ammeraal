/*Schrijf een programma dat met behulp van

char ch
cin >> ch;

het karakter afdrukt waarvan de waarde 1 groter is.
Wordt er bijvoorbeeld A ingetikt, dan verschijnt B in de uitvoer.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    char ch;
    string plusEen;
    cout << "Geef een letter: ";
    cin >> ch;
    plusEen.assign(1, ch+1);
    cout << "De volgende letter is: " << plusEen;
    return 0;
}