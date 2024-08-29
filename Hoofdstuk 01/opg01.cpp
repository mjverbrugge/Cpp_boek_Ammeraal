/*Opgave 1 - Schrijf een programma dat uw naam en adres afdrukt.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string naam, adres;
    cout << "Geef u naam: " << endl;
    getline(cin, naam, '\n');
    cout << "\nGeef u adres: " << endl;
    getline(cin, adres, '\n');
    cout << "\nUw naam is " << naam << ".\n";
    cout << "Uw adres is " << adres << ".\n\n";
    
    return 0;
}