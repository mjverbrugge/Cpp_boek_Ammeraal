/*Lees een geheel getal in en druk de som van de laatste twee decimale cijfers af.

*/
#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Geef een geheel getal: ";
    cin >> x;
    cout << "De som van de laatste twee cijfer is: " << (x % 10) + (x/10 %10);
    return 0;
}