/*Lees 20 gehele getallen in en tel hoe vaak het voorkomt dat een groter getal diret wordt gevolgd door een kleiner.
*/
#include <iostream>
using namespace std;

int main(){
    cout << "Geef een reeks van 20 getallen, gescheiden door een spatie, afgesloten met een negatief getal:";
    int x, xMin=-1, s=0;
    for(;;)
    {
        cin >> x;
        if (x<=0) break;
        if (xMin>x) s++;
        xMin = x;
    }
    cout << "Aantal keer dat een groter getal wordt gevolgd door een kleiner getal is " << s;
    return 0;
}