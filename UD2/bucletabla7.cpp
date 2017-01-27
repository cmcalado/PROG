#include <iostream>
using namespace std;
int main () {

	int const num = 7;
	int num2 = 0;
	int res = 0;

	do {
		res = num * num2;
		cout << "7 x "<< num2 << "= " << res << endl;
		num2 = num2 + 1;
	} while (num2 < 31);
}
