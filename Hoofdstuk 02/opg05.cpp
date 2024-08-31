/*Lees 10 gehele getallen in en bepaal het op één na kleinste hiervan.
*/
#include <iostream>
using namespace std;

int main(){
    int x, k, kmin1;
    for (int i=1; i<=10; i++){
        cout << "Geef getal " << i << ": ";
        cin >> x;
        if (i==1) {
            k=x; 
            kmin1=x;
            }
        if (k>x) {
            kmin1 = k;
            k=x;
            }
        else if (kmin1>x) kmin1=x;
    }
    cout << "Het op één na kleinste getal is " << kmin1;
    return 0;
}