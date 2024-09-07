/*Schrijf een programma dat een rij gehele getallen, afgesloten 
door het woord STOP (of een ander niet-numerieke code), van het 
toetsenbord leest en bepaalt wat het grootste gelezen getal is 
en hoe vaak dat in de erij voorkomt.
*/
#include <iostream>
using namespace std;

int main(){
    cout << "Geef een rij getallen afgesloten met STOP: ";
    int x, max=0, num=1;
    while (cin>>x, !cin.fail()){
        if (x == max) num++;
        if (x > max) {
            max = x;
            num = 1;
        }
    }
    cout << "Het grootste getal = " << max << " en komt " << num << " keer voor." << endl;
    return 0;
}