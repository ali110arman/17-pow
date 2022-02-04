#include <iostream>
using namespace std;
void main() {
	int num1, num2, i=1, j;
	cout << "inter number\n";
	cin >> num1;
	cout << "inter power\n";
	cin >> num2;
	j = num1;
	for(i;num2>i;i++)
		num1 *= j;
	cout << "your number is:"<< num1;
}
