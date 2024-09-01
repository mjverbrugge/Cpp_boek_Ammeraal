/*Lees een positief geheel getal n in en druk de machten, voorafgegaan door de exponenet, af in een nette tabel.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Geef een getal: ";
    cin >> n;
    
    for (int i=0; i<=n; i++){
        int som=1;
        for (int j=0; j<i; j++) som*=10;
        cout.width(3);
        cout << i; 
        cout.width(13);
        cout << som << endl;
    }

    return 0;
}