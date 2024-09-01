/*Lees een positief geheel getal n in en bereken de volgende som:
1/2 + 3/4 + ..... + (2n-1)/2n
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    float som;
    cout << "Geef een getal: ";
    cin >> n;

    for (float i=1; i<=n; i++){
        som += ((2*i-1)/(2*i));
    }
    cout << som; 

    return 0;
}