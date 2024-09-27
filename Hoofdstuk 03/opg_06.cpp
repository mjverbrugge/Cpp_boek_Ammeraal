/*Laat zien hoe u een (niet te groot) ingelezen getal op redelijk efficiente wijze met 100 kunt vermenigvuldingen zonder de operator * te gebruiken.
Maak enkele keren gebruik van de operator <<
*/
#include <iostream>
using namespace std;

int main(){
    unsigned int x=0x0, y;
    cout << "Geef een niet al te groot geheel getal: ";
    cin >> hex >> x;
    y = (x << 2) + (x << 4);
    y += (x << 4);
    y += (x << 6);

    cout << "Het getal keer 100 = " << y;
 
    return 0;
}
