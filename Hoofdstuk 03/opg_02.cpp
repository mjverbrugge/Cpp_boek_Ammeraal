/*Schrijf een programma dat een datum inleest in de vorm van drie positieve gehele getallen (dag, maand, jaar) zoals bijvoor beeld
    31 12 1999
Het is de bedoeling dat uw programma het dagnummer van die datum berekent, geteld vanaf 1 januari van dat jaar.
*/
#include <iostream>
using namespace std;

int main(){
    cout << "Geef een datum: ";
    int x;
    int a[3];
    
    for(int i=0; i<3; i++){
        cin >> x;
        a[i] = x;
    }

    // Schrikkeljaar of niet
    int maanden[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if ((a[2]%4==0 && a[2]%100!=0) || a[2]%400==0) maanden[1] = 29;

    // Tel dagen
    int dagen = 0;
    for (int m=1; m < a[1]; m++) dagen += maanden[m];

    cout << "Dagnummer van dat jaar = " << dagen+a[0];

    return 0;
}