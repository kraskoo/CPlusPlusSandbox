// Little play with iterators and 'delegates'
#include <iostream>
#include <vector>
#include <functional>

using namespace std;

template <typename T>
void get(typename vector<T>::const_iterator& iterr,
		vector<T> vector,
		void (*func)(T const& t),
		size_t pos = 0)
{
	func(vector.at(pos));
	if (pos + 1 == vector.size())
	{
		return;
	}
	
	auto new_iterr = move_if_noexcept(iterr);
	get(new_iterr, vector, func, pos + 1);
}

template <typename T>
void print(T const& t)
{
	cout << t;
}

template <typename T>
void execute(vector<T> const& vector)
{
	typedef void (*p)(T const& t);
	p f = &print;
	typename std::vector<T>::template const_iterator iterr = vector.begin();
	get(iterr, vector, f);
}