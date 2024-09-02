/*Lees 10 gehele getallen in en bepaal het op één na kleinste hiervan.
*/
#include <iostream>
using namespace std;

int main(){
    cout << "Geef 10 getallen: ";
    int x, k=100000, kmin1=100000;
    for (;;)
    {
        cin >> x;
        if (x<0) break;
        if (k>x) 
        {
            kmin1 = k;
            k=x;
        }
        else if (kmin1>x) kmin1=x;
    }
    cout << "Het op één na kleinste getal is " << kmin1;
    return 0;
}