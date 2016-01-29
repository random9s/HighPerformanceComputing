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
	jpvc4::FloatMatrix operator()(const jpvc4::FloatMatrix& lhs, const jpvc4::FloatMatrix& rhs) const;

	///
	/// \brief Use boost built-in matrix multiplication
	/// \param lhs The left-hand operand to the multiplication
	/// \param rhs The right-hand operand to the multiplication
	/// \returns the result of the matrix multiplication
	jpvc4::FloatMatrix multiply(const jpvc4::FloatMatrix& lhs, const jpvc4::FloatMatrix& rhs) const;

};

}; // end namespace scottgs
#endif // JPVC4_MATRIX_MULTIPLY
