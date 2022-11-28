#define _USE_MATH_DEFINES
#include <vectormath/vectormath.hpp>
#include <cmath>
#include <iostream>
#include <iomanip>

void TestOp(
    const Rdec2D& vector_lhs,
    const Rdec2D& vector_rhs,
    const Rdec2D& vector_res,
    const std::string& op_str
) {
    std::cout << vector_lhs << op_str << vector_rhs << "->" << vector_res << "\n";
}