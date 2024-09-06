/*Schrijf een programma dat van het toetsenbord een regel tekst inleest en deze achterstevoren afdrukt.
*/

#include <iostream>
using namespace std;

int main(){
    string x;
    cout << "Geef een regel tekst: ";
    getline(cin, x);
    int lengthX = x.length()-1;
    for (int i = lengthX; lengthX>=0; lengthX--) cout << x[lengthX]; 
    return 0;
}