/*Lees een getal s in en bepaal alle rijen van twee of meer opeenvolgende positieve gehele getallen waarvan de som s is.
*/
#include <iostream>
using namespace std;

int main(){
    int s;
    cout << "Geef een getal: ";
    cin >> s;
    
    for (int i=1; i<s; i++) {
        int som=0;
        for (int j=i; j<s; j++){
            som += j;
            if (som == s){
                for (int k=i; k<j+1; k++) cout << k << " ";
                cout << endl;
                break;
            }
            if (som > s) break;
        }
    }

    return 0;
}