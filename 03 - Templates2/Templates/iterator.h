#pragma once

namespace ds
{
	template<typename T>
	class iterr
	{
	protected:
		T* arr_ = nullptr;
		T* current_ = nullptr;
		size_t pos_ = 0;
	public:
		iterr(T arr[], size_t len);
		
		size_t length;
		bool has_next() const { return pos_ < length; }
		T get_current();
	};

	template <typename T>
	iterr<T>::iterr(T arr[], const size_t len):
			arr_(arr),
			current_(len > 0 ? &arr_[0] : NULL),
			length(len) { }

	template<typename T>
	T iterr<T>::get_current()
	{
		T& curr = *current_;
		pos_++;
		current_ = &arr_[pos_];
		return curr;
	}
}