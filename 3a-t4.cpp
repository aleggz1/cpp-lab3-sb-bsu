#include <iostream>
#include <iomanip>
using namespace std;
int main()

{

    int i = 10;
    int doll = 0;
    cout << setw(15) << "Dollars" << endl;
    for ( i = 0; i < 10; i++) //Column of 10 rows
{
    doll = doll + 10; //Filling dollars column
    cout << setw(15) << doll << endl;
}
    cout << setw(15) << "Rubles" << endl;
    for ( doll = 0; doll < 101; doll + 10)
{
    doll = doll + 10;
    cout << setw(15) << doll * 2.47 << endl; //Rubles column
}
    cout << setw(15) << "Apples" << endl;
    for ( doll = 0; doll < 101; doll + 10)
{
    doll = doll + 10;
    cout << setw(15) << doll * 2.47 / 1.6 << endl; //Apples column( apples (in kg) that can be bought for these amounts if the price of 1 kg of apples is 1.6 rubles)
    
}
    return 0;
}

