#include <iostream>
#include <string>

// Not good practice ->
// using namespace std;

using std::allocator;
using std::char_traits;
using std::basic_string;
using std::cin;
using std::cout;
using std::string;
using std::getline;
using std::endl;

string boolean_to_string(const bool value)
{
	return value ? "True" : "False";
}

void initialize_and_print_some_variables()
{
	int i1 = 1;
	cout << "i1 = " << i1 << endl;
	int i2;
	i2 = 2;
	cout << "i2 = " << i2 << endl;
	int i3(3);
	cout << "i3 = " << i3 << endl;
	int i4 { 4 };
	cout << "i4 = " << i4 << endl;
	double d1 = 2.2;
	double d2 = i1;
	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;
	// Static convert and suppress VS warning
	d2 = static_cast<double>(i1);
	cout << "d2 = " << d2 << endl;
	bool flag = false;
	cout << "flag = " << boolean_to_string(flag) << endl;
	flag = i1;
	cout << "flag = " << boolean_to_string(flag) << endl;
	flag = d1;
	cout << "flag = " << boolean_to_string(flag) << endl;
	flag = 0;
	cout << "flag = " << boolean_to_string(flag) << endl;
	i1 = -1;
	flag = i1;
	cout << "flag = " << boolean_to_string(flag) << endl;
}

void initialize_and_print_some_variables2()
{
	auto a1 = 1;
	auto a2 = 2.2;
	auto a3 = 'c';
	auto a4 = "string";
	auto a5 = false;
	auto a6 = 3L;
	auto a7 = 1'000'000'000'000;
	auto a8 = 0xFF;
	auto a9 = 0b111;
	cout << "a1 = " << a1 << " a2 = " << a2 << " a3 = " << a3 <<
		" a4 = " << a4 << " a5 = " << a5 <<
		" a6 = " << a6 << " a7 = " << a7 <<
		" a8 = " << a8 << " a9 = " << a9 << endl;
}

void strings()
{
	cout << "Enter value for new string: ";
	basic_string<char, char_traits<char>, allocator<char>> basic_string;
	getline(cin, basic_string);
	cout << basic_string << endl;
	char old_style[5] = "Asen";
	cout << old_style << "\n";
	string name = "Pesho";
	cout << name << '\n';
	name = "Goshooooooo";
	cout << name << "\n";
}

int main()
{
	strings();
	initialize_and_print_some_variables();
	initialize_and_print_some_variables2();
	return 0;
}