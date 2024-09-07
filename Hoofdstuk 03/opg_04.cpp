/*Schrijf een programma dat een rij gehele getallen leest, afgesloten door een willekeuring niet-numerieke code.
Bepaal hoeveel verschillende getallen ingelezen worden. Het aantal gelezen getallen is onbeperkt, maar er zullen
maximaal 10 verschillende getallen worden aangeboden. (Worden meer dan 10 getallen aangeboden, dan moet een 
foutmelding gegeven worden en mag het programma direct stoppen.)
*/
#include <iostream>
using namespace std;

int main(){
    cout << "Geef een reeks getallen met maximaal 10 verschillende waarden: ";
    int x, aantal=0, a[10];
    bool aanwezig=0;

    while (cin >> x, !cin.fail())
    {
        for(int i=0; i<=aantal; i++)
        {
            if (x == a[i])aanwezig = 1;
        }

        if(aanwezig != 1)
        {
            if(aantal<10)
            {
                a[aantal] = x;
                aantal++;
            }
            else 
            {
                cout << "*ERROR - Te veel verschillende getallen opgegeven!!!" << endl;
                break;
            }

        }
        else aanwezig = 0;
    }

    cout << "Het aantal verschillende getallen dat is opgegeven = " << aantal << endl;

    return 0;
}