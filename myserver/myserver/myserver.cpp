#include <iostream>

#include "common.h"

using namespace std;


int main() {
	cout.setf(ios::fixed);
	cout << makeDouble(10) << endl;
	cout << makeDouble(20) << endl;
}