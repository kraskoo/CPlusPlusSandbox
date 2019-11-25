#pragma once

namespace std_extensions
{
	template<size_t S, typename T>
	inline size_t array_length(T (&a)[S]) { return S; }
}
