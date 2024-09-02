/*Lees een rij positive gehele getallen in van het toetsenbord en bepaal het grootste ervan. Gebruik een negatief getal als afsluitcode.
*/
#include <iostream>
using namespace std;

int main(){
    cout << "Geen een aantal positief gehele getallen om de grootste te laten bepalen. Een negatief getal stopt het script." << endl;
    cout << "Getallen: ";
    int iMax=0, x;
    for (;;){
        cin >> x;
        if (x<0) break;
        if (x>iMax) iMax=x;
    }
    cout << "\nHet grootste getal is: "<< iMax << endl;
    return 0;
}