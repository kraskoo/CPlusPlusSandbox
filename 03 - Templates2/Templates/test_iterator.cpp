#include <iostream>

#include "test_ds.h"
#include "iterator.h"
#include "std_extensions.h"

using namespace ds;
using namespace std;
using namespace std_extensions;

void test_iterr()
{
	int arr[] { 144, 39, -3, 28, 36, 66, 81 };
	iterr<int> iter(arr, array_length(arr));
	while (iter.has_next())
	{
		cout << iter.get_current();
		if (iter.has_next())
		{
			cout << ", ";
		}
	}
}
