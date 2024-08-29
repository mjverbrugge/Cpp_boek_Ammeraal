/* Schrijf een programma dat twee regels tekst inleest en ze, gescheiden door een komma en een spatie, achter elkaar op het scherm plaatst.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string naamA, naamB;
    cout << "Geef de eerste naam: ";
    getline(cin, naamA, '\n');
    cout << "Geeft de tweede naam: ";
    getline(cin, naamB, '\n');

    cout << naamA + ", " + naamB;

    return 0;
}