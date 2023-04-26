
#include <iostream>

using namespace std;

int main()
{
    int a = 0,primo = 1,secondo = 1,terzo = 0;
    cout << "scegli il valore" << endl;
    cin >> a;
    if(a <= 2){
        cout << "errore" << endl;
    }
    else if (a > 2){
        cout << primo << endl;
        cout << secondo <<endl;
        while (a-2 > 0){
            terzo = primo + secondo;
            primo = secondo;
            secondo = terzo;
            cout << terzo << endl;
            
            a--;
        }
    }
    
    return 0;
}
