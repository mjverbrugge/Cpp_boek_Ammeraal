/*Schrijf een programma dat vraagt om het huidige jaartal en uw geboortejaar en vervolgens berekent hoe oud u dit jaar geworden bent of hoopt te worden.
*/
#include <iostream>
using namespace std;

int main(){
    int jaartal, geboortejaar, verschil;
    cout << "Geef het huidige jaartal: ";
    cin >> jaartal;
    cout << "Geef uw geboortejaar: ";
    cin >> geboortejaar;
    verschil = jaartal - geboortejaar;
    cout << "\nUw bent of hoopt dit jaar te worden: " << verschil << " jaar\n\n";
    return 0;
}