#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
    int a;
    cout<<"Enter the value";
    cin>>a;
    if(a%5==0)
    cout<<"The value is divisible by 5";
    else 
    cout<<"the value is not divisible by 5";
	return 0;
}
