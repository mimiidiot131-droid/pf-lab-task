#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int temp;
	cout<<"Enter the temperature";
	cin>>temp;
	if(temp>=30)
	cout<<"HOT";
	else
	cout<<"COLD";
	return 0;
}
