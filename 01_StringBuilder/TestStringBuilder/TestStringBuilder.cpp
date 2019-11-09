#include <iostream>
#include "../StringBuilder/stringBuilder.h"

using std::cout;
using sb::string_builder;

int main()  // NOLINT
{
	int print_count(0);
	string_builder sb;
	sb.append("3dfsdfsf").append_new_line();
    cout << "Print ---- " << ++print_count << " ----\n" << sb.str();
	sb.append("56dfgghjk").append_new_line();
	cout << "Print ---- " << ++print_count << " ----\n" << sb.str();
	return 0;
}
