/*Lees een rij van tien positieve gehele getallen in en bepaal hoeveel van deze getallen door 2, hoeveel door 3 en hoeveel door 5 deelbaar zijn.
*/
#include <iostream>
using namespace std;

int main(){
    int x, som2=0, som3=0, som5=0;
    cout << "Geef 10 getallen: " ;
    for (;;)
    {
        cin >> x;
        if (x<0) break;
        if (x%2==0) som2++;
        if (x%3==0) som3++;
        if (x%5==0) som5++;
    }  
    cout << "Aantal getallen dat door 2 deelbaar is =  " << som2 << endl;
    cout << "Aantal getallen dat door 3 deelbaar is =  " << som3 << endl;
    cout << "Aantal getallen dat door 5 deelbaar is =  " << som5 << endl;
    return 0;
}