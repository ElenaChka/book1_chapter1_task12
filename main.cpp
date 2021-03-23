// Программа с функцией для вычисления суммы натуральных чисел
#include <iostream>
using namespace std;
int main ()
{
    int kol;
    int i;
    int sum = 0;
    cout << " Vvedite colichestvo chisel ";
    cin >> kol;
    for (int i=1; i <= kol; i++)
    {
       sum = sum + i;
    }
    cout << " Summa ravna: " << sum;
}
