#include <string>
#include <sstream>

template<typename T>
T min(T const& t1, T const& t2)
{
	return t1 < t2 ? t1 : t2;
}

template<typename T>
T max(const T& t1, const T& t2)
{
	return t1 > t2 ? t1 : t2;
}

template<typename T, class Tc>
std::string concat(T const& t, Tc const& t2)
{
	std::stringstream string_stream;
	string_stream << t << t2;
	return string_stream.str();
}

template<typename T, class Tc>
std::string concat(T array[], Tc const& type)
{
	std::stringstream temp;
	const size_t size = sizeof(*array) / sizeof(*array[0]);
	for(size_t i = 0; i < size; i++)
	{
		temp << (*array)[i];
	}
	
	temp << type;
	return temp.str();
}
