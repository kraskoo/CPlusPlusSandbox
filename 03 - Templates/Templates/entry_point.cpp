#include <iostream>
#include <string>

#include "functions.cpp"
#include "iterr_and_delegate.cpp"

using namespace std;

int main()
{	
	const int a = 10;
	const int b = 5;
	const string abra = "abra";
	const int int_arr[] = { 5, 2, 1, 7, 54, 9999, 1324, 4 };
	cout << "min(10, 5) = " << min(a, b) << endl <<
		"max(10, 5) = " << max(a, b) << endl <<
		"max(10.453466, 5) = " << max<double>(10.453466, 5) << endl;
	cout << "concat(10, \"abra\") = " << concat(a, abra) << endl <<
		"concat(5, 2, 1, 7, 54, 9999, 1324, 4, \"abra\") = " << concat(&int_arr, abra) << endl;
	
	execute(vector<string>{ "From ", "time ", "to ", "time ", "sound ", "..." });
	return 0;
}
