#include <iostream>
#include <vector>

using namespace std;

inline bool bigger_than(int _this, int from)
{
	return _this > from;
}

template<vector<int>(*FuncPtr)(int*, bool(*)(int, int), int)>
vector<int> filter_array(int ints[], bool(*p)(int, int), int to_compare)
{
	return FuncPtr(ints, p, to_compare);
}

inline vector<int> where(int arr[], bool(*p)(int, int), int to_compare)
{
	vector<int> ints = {};
	const size_t length = sizeof(*(&arr));
	for (size_t i = 0; i < length; i++)
	{
		int current = *(arr + i);
		if (p(current, to_compare))
		{
			ints.push_back(current);
		}
	}

	return ints;
}

inline void executeFilter()
{
	int ints[] = { 4, 1, 4, 5, 3, 1, -4, -3 };
	typedef bool(*p)(int, int);
	const p pred = &bigger_than;
	vector<int> fa = filter_array<&where>(ints, pred, 2);
	const size_t len = fa.size();
	cout << endl << "{ 4, 1, 4, 5, 3, 1, -4, -3 } all numbers bigger than 2 - { ";
	for (size_t i = 0; i < len; i++)
	{
		const int current = fa.at(i);
		cout << current;
		if (i == len - 1)
		{
			cout << " }" << endl;
		}
		else
		{
			cout << ", ";
		}
	}
}