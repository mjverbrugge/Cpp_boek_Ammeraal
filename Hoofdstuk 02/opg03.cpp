/*Lees een geheeel getal in en druk de som van de laatste twee decimale cijfers af.

*/
#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Geef een groot geheel getal groter dan 10: ";
    cin >> x;
    if (x>=10) 
        cout << "De som van de laatste twee cijfer is: " << (x % 10) + (x/10 %10);
    else cout << "Het opgegeven getal is kleiner dan 10!";
    return 0;
}