
#include <iostream>

using namespace std;

int main()
{
    int n = 0,primo = 1,secondo = 1,terzo = 0;
    cout << "scegli il valore" << endl;
    cin >> n;
    if (n >= 2){
        cout << primo << endl;
        cout << secondo <<endl;
        while (n-2 > 0){
            terzo = primo + secondo;
            primo = secondo;
            secondo = terzo;
            cout << terzo << endl;

            n--;
        }
        else {
        cout << "errore" << endl;
    }
    }
    
    return 0;
}
