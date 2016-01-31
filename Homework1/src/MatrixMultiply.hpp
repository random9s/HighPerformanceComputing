#ifndef _JPVC4_MATRIX_MULTIPLY
#define _JPVC4_MATRIX_MULTIPLY

#include "FloatMatrix.hpp"

namespace jpvc4 
{

class MatrixMultiply
{
public: 
	MatrixMultiply();
	~MatrixMultiply();

	///
	/// \brief Use naive element access
	/// \param lhs The left-hand operand to the multiplication
	/// \param rhs The right-hand operand to the multiplication
	/// \returns the result of the matrix multiplication
	inline jpvc4::FloatMatrix operator()(const jpvc4::FloatMatrix& lhs, const jpvc4::FloatMatrix& rhs) const{
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

	///
	/// \brief Use boost built-in matrix multiplication
	/// \param lhs The left-hand operand to the multiplication
	/// \param rhs The right-hand operand to the multiplication
	/// \returns the result of the matrix multiplication
	jpvc4::FloatMatrix multiply(const jpvc4::FloatMatrix& lhs, const jpvc4::FloatMatrix& rhs) const;

};

}; // end namespace scottgs
#endif // JPVC4_MATRIX_MULTIPLY

