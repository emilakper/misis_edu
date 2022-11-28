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
);

int main() {

    Rdec2D vector1;
    vector1.x = 3.0;
    vector1.y = 4.0;
    std::cout << "Norm=" << (norm(vector1)) << "\n";


    Rpol2D vector2;
    vector2 = Conversation(vector1);
    std::cout << "ConversToDec(" << vector1 << ")=" << vector2 << "\n";


    Rdec2D vector3;
    vector3 = Conversation(vector2);
    std::cout << "ConversToPol(" << vector2 << ")=" << vector3 << "\n";


    std::cout << "DotDecAndPol(" << vector1 << vector3 << ")=" << dot(vector1, vector3) << "\n";
    std::cout << "DotPolAndPol(" << vector2 << vector2 << ")=" << dot(vector2, vector2) << "\n";


    Rdec2D vector_multiply;
    vector_multiply = vector1 * 5;
    std::cout << "Multiply(" << vector1 << ",5)=" << vector_multiply << "\n";

    std::cout << vector1 << "==" << vector3 << "->" << (vector1==vector3) << "\n";

    TestOp(vector1, vector_multiply, vector1 - vector_multiply, "-");
    TestOp(vector1, vector_multiply, vector1 + vector_multiply, "+");
}