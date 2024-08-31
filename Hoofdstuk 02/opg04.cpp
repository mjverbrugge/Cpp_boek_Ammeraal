/*Lees 20 gehele getallen in en tel hoe vaak het voorkomt dat een groter getal diret wordt gevolgd door een kleiner.
*/
#include <iostream>
using namespace std;

int main(){
    int x, vorige=0, somGK=0;
    for (int i=1; i<=20; i++){
        cout << "Geef getal " << i << ": ";
        cin >> x;
        if (vorige<x) somGK++;
        vorige = x;
    }
    cout << "Aantal keer dat een groter getal wordt gevolgd door een kleiner getal is " << somGK;
    return 0;
}