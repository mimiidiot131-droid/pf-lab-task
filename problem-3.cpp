#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)  
{
    float amount, discount = 0, payable;

    cout << "Enter bill amount: ";
    cin >> amount;

    if (amount >= 1000)
	{
        discount = amount * 0.10;
    }

    payable = amount - discount;

    cout << "Amount to pay: " << payable;
	return 0;
}
