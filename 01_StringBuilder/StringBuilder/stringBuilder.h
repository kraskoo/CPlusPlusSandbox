#pragma once
#include <string>

namespace sb
{
	class string_builder
	{
	private:
		std::string main_;
		std::string scratch_;
		const std::string::size_type scratch_size_ = 1024;
	public:
		string_builder& append(const std::string& str);
		string_builder& append_new_line();
		std::string str();
	};
}
