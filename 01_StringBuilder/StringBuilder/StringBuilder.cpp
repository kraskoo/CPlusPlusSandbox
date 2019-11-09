#include <string>
#include "stringBuilder.h"

namespace sb
{
	string_builder& string_builder::append(const std::string& str)
	{
		scratch_.append(str);
		if (scratch_.size() > scratch_size_)
		{
			main_.append(scratch_);
			scratch_.resize(0);
		}

		return *this;
	}

	string_builder& string_builder::append_new_line()
	{
		scratch_.append("\n");
		if (scratch_.size() > scratch_size_)
		{
			main_.append(scratch_);
			scratch_.resize(0);
		}
		
		return *this;
	}


	const std::string& string_builder::str()
	{
		if (!scratch_.empty())
		{
			main_.append(scratch_);
			scratch_.resize(0);
		}

		return main_;
	}
}