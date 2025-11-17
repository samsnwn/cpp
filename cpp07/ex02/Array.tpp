template <typename T>
Array<T>::Array() : _array(nullptr), _size(0) {};

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {};

template <typename T>
Array<T>::Array(const Array & og) : _array(nullptr), _size(0)
{
	*this = og;
};

template <typename T>
Array<T> & Array<T>::operator=(const Array & og)
{
	if (this != &og)
	{
		delete[] _array;
		_size = og._size;
		_array = new T[_size]();
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = og._array[i];
	}
	return *this;
};

template <typename T>
Array<T>::~Array() {
	delete[] _array;
};

template <typename T>
T & Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of bounds");
	return _array[index];
};

template <typename T>
const T & Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Index out of bounds");
	return _array[index];
};

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
};