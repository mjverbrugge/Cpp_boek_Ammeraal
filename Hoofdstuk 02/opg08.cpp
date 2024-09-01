/*Schrijf een programma dat de getallen n en k inleest en dee gebruikt om een 'schaakbord' van n x n velden af te drukken. 
De witte velden blijven geheel open en de zwarte velden bestaan uit een vierkant van k x k hekjes. In de linkerbenedenhoek
komt een zwart veld.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, k;
    string p;
    cout << "Geeft het aantal vakjes: ";
    cin >> n;
    cout << "Geeft de grootte per vakje: ";
    cin >> k;

    for (int i=0; i<n;i++) {
        for (int j=0; j<k;j++){
            for (int s=0; s<n; s++) {
                if (n%2!=0){
                    if ((i%2==0 && s%2==0) || (i%2!=0 && s%2!=0)) p = "#";
                    else p = " ";
                    }
                else{
                    if ((i%2==0 && s%2==0) || (i%2!=0 && s%2!=0)) p = " ";
                    else p = "#";
                    }
                for (int t=0; t<k; t++) cout << p;
                };
            cout << endl;
            };
        }

    return 0;
}