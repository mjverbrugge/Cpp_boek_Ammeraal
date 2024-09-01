/*Verklaar dat het volgende programma de waarde 10 als uitvoer geeft. Laat ook zien dat die waarde 45 wordt als u iets uit het programma verwijdert
Oplossing: De ; achter de for functie sluit de loop af en laat i=10 over voor de rest van het script.
*/
#include <iostream>
using namespace std;

int main(){
    int s=0, i;
    for (i=1; i<10; i++) s += i;
    cout << s << endl;
    return 0;
}