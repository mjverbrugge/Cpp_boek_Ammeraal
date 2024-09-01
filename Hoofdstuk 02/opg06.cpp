/*Lees een decimaal cijfer d in en druk alle positieve gehele getallen x kleiner dan 100 af waarvoor geldt dat het cijfer d voorkomt in de decimale notiatie van zowel x als x^2.
*/
#include <iostream>
using namespace std;

int main(){
    int d;
    cout << "Geef één getal: ";
    cin >> d;

    for (int i; i<100; i++){
        if (((d == i % 10) || (d==i/10 %10)) && 
            ((d == i*i % 10) || (d==(i*i)/10 %10))){
            cout.width(3);
            cout << i << " ";
            cout.width(6);
            cout << i*i << endl;
        }
    };

    return 0;
}