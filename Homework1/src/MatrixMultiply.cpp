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
	for(unsigned int i=0; i < lhs.size1(); i++)
		for(unsigned int j=0; j < lhs.size2(); j++)
			for(unsigned int k=0; k < rhs.size2(); k++)
				result(i, k) += lhs(i, j) * rhs(j, k); 
	
	return result;
}

jpvc4::FloatMatrix jpvc4::MatrixMultiply::multiply(const jpvc4::FloatMatrix& lhs, const jpvc4::FloatMatrix& rhs) const
{
	// Verify acceptable dimensions
	if (lhs.size2() != rhs.size1())
		throw std::logic_error("matrix incompatible lhs.size2() != rhs.size1()");

	return boost::numeric::ublas::prod(lhs,rhs);
}

