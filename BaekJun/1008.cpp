#include <iostream>

using namespace std;

int main()
{
	double a, b;

	cin >> a >> b;

	cout.precision(10); // precision(파라미터) : 소수점 범위를 설정해주는 함수
	cout << a / b << endl;

	return 0;

}