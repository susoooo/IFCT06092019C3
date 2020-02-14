#include <iostream>

using namespace std;

class consecutivos
{
    int num1;
    int num2;
    int num3;
public:
    int esConsecutivo (int var1, int var2);

};

int consecutivos::esConsecutivo (int n1, int n2)
{
    int consec;
    consec = 0;

    if (n1+1 == n2)
    {
        consec = 1;
    }
    return consec;
}

int main()
{
    int noConsec;
    int cifra1;
    int cifra2;
    int cifra3;

    noConsec = 0;

    do
    {
        cout << "Dame un numero: ";
        cin >> cifra1;

        cout << "Dame otro numero: ";
        cin >> cifra2;

        noConsec = consecutivos.esConsecutivo(cifra1, cifra2);

        if (noConsec != 0)
        {
            cout << "Dame otro numero mas: ";
            cin >> cifra3;

            noConsec = consecutivos.esConsecutivo(cifra2, cifra3);
        }
    }
    while (noConsec == 0);

    cout << "Gracias!!.";
}
