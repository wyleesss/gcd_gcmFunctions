#include <iostream>
using namespace std;

int ���(int first, int second)
{
	return second == 0 ? first : ���(second, first % second);
}

int ���(int first, int second)
{
	return (first * second) / ���(first, second);
}

int main(void) {
	int first, second;
	cout << "input the parameters for the\ngreatest common divisor'\n-> ";
	cin >> first >> second;
	cout << "--(" << ���(first, second) << ")--" << endl;
	cout << "\ninput the parameters for the\nlowest common multiple'\n-> ";
	cin >> first >> second;
	cout << "--(" << ���(first, second) << ")--";
}
