#ifndef STD_HPP
#define STD_HPP

#include <array>
#include <fstream>
#include <iostream>

///
/// \brief Operator += for array
/// \param a First array
/// \param b Second array
/// \return Array a that add b to a
///
template< class T, std::size_t N >
std::array< T, N > &
operator+=
(
	std::array< T, N > & a,
	std::array< T, N > & b
)
{
	for( unsigned int i = 0 ; i < N ; ++i )
	{
		a[ i ] += b[ i ] ;
	}

	return a ;
}


#endif // STD_HPP