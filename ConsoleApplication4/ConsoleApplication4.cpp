#include <iostream>
using namespace std;

int мяд(int first, int second)
{
	return second == 0 ? first : мяд(second, first % second);
}

int мяй(int first, int second)
{
	return (first * second) / мяд(first, second);
}

int main(void) {
	int first, second;
	cout << "input the parameters for the\ngreatest common divisor'\n-> ";
	cin >> first >> second;
	cout << "--(" << мяд(first, second) << ")--" << endl;
	cout << "\ninput the parameters for the\nlowest common multiple'\n-> ";
	cin >> first >> second;
	cout << "--(" << мяй(first, second) << ")--";
}
