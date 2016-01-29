#include "MatrixMultiply.hpp"

#include <exception>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <numeric>

jpvc4::MatrixMultiply::MatrixMultiply() 
{
	;
}

jpvc4::MatrixMultiply::~MatrixMultiply()
{
	;
}


jpvc4::FloatMatrix jpvc4::MatrixMultiply::operator()(const jpvc4::FloatMatrix& lhs, const jpvc4::FloatMatrix& rhs) const
{
	// Verify acceptable dimensions
	if (lhs.size2() != rhs.size1())
		throw std::logic_error("matrix incompatible lhs.size2() != rhs.size1()");

	jpvc4::FloatMatrix result(lhs.size1(),rhs.size2());


	// YOUR ALGORIHM WITH COMMENTS GOES HERE:


	return result;
}

jpvc4::FloatMatrix jpvc4::MatrixMultiply::multiply(const jpvc4::FloatMatrix& lhs, const jpvc4::FloatMatrix& rhs) const
{
	// Verify acceptable dimensions
	if (lhs.size2() != rhs.size1())
		throw std::logic_error("matrix incompatible lhs.size2() != rhs.size1()");

	return boost::numeric::ublas::prod(lhs,rhs);
}

