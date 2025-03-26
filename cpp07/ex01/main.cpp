#include "iter.hpp"

template<typename T>
void	increment( T &i ) {
	i++;
}

template<typename T>
void	printElement( T &e ) {
	std::cout << e << std::endl;
}

int	main( void )
{
	size_t	i = 10;
	size_t	arr[i + 1];

	for (size_t k = 0; k < i; k++) {
		arr[k] = k;
	}
	iter( arr, i, increment<size_t> );
	iter( arr, i, printElement<size_t> );

	std::string	strArr[] = {"hello,", "you", "are", "lost!"};
	size_t	size = sizeof(strArr) / sizeof(strArr[0]);
	iter( strArr, size, printElement<std::string> );
}