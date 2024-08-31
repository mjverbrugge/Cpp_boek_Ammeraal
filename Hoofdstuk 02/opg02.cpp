/*Lees een rij positieve reele getallen in en bereken het gemiddelde ervan. Na het laatste positieve getal volgt een negatief getal als afsluitcode.
*/
#include <iostream>
using namespace std;

int main(){
    cout << "Geen een aantal positief gehele getallen om het gemiddelde te laten bepalen. Een negatief getal stopt het script." << endl;
    int i=0, x;
    float iSom=0.0;
    for(;;){
        cout << "Geef een geheel positieve getal: ";
        cin >> x;
        if (x<0) break;
        i++;
        iSom += x;
    }
    cout << "\nDe gemiddelde waarde is: "<< iSom/i << endl;
    return 0;
}