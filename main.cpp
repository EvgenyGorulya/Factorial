#include <iostream>
using namespace std;

int Factorial(int n)
{
    if(n == 1) return 1;
     return n * Factorial(n - 1);
}

int main()
{

    int n = 5;
    int resultat = 0;
    resultat = Factorial(n);
    cout << endl << endl << "Factorial = " << resultat << endl;
    return 0;
}
