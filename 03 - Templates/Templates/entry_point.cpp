#include <iostream>

#include "functions.cpp"

using namespace std;

int main()
{	
	const int a = 10;
	const int b = 5;
	const string abra = "abra";
	int int_arr[] = { 5, 2, 1, 7, 54, 9999, 1324, 4 };
	auto arr_value = concat(&int_arr, abra);
	cout << "min(10, 5) = " << min(a, b) << endl <<
		"max(10, 5) = " << max(a, b) << endl;
	cout << "concat(10, \"abra\") = " << concat(a, abra) << endl <<
		"concat(5, 2, 1, 7, \"abra\") = " << arr_value << endl;
	return 0;
}
