/*Laat zien hoe met behulp van bitoperaties de vier niet-negatieve gehele getallen a0, a1, a2, a3, elk kleiner dan 16,
in een int-variabele x kunnen worden opgeborgen. Schrijf hiervoor een demonstratieprogramma; na de vier getallen
van het toetsenbord gelezen te hebben vraagt het programma aan de gebruiker een getal i (gelijk aan 0, 1, 2, 3) in te
typen en haalt dan uit de variabele x het getal a[i] om dit af te drukken.
*/
#include <iostream>
using namespace std;

int main(){
    unsigned int a, b=0x0;
    cout << "Geef 4 gehele getal: ";

    for(int j=0; j<=3; j++)
    {
        cin >> dec >> a;
        if(j!=0) b <<= 4;
        b |= a;
        cout << b << endl;
    }

    int i;
    cout << "Type 0, 1, 2, 3 om de corresponderende waarde terug te halen: ";
    cin >> i;
    b >>= 4*(3-i);
    b &= 0XF;
    cout << "Het nummer is: " << b;


    return 0;
}