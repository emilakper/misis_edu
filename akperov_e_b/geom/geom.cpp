#define _USE_MATH_DEFINES
#include "geom.hpp"
#include <cmath>
#include <iostream>
#include <iomanip>






double norm(Rdec2D vec) {
    return sqrt(std::pow(vec.x, 2) + std::pow(vec.y, 2));
}

double dot(Rdec2D vec1, Rdec2D vec2) {
    return (vec1.x * vec2.x + vec1.y * vec2.y);
}

double dot(Rpol2D vec1, Rpol2D vec2) {
    return std::abs((vec1.r * vec2.r) * cos(vec1.phi - vec2.phi));
}

Rpol2D Conversation(Rdec2D& vecdec) {
    Rpol2D vecpol;
    vecpol.r = norm(vecdec);
    vecpol.phi = atan(vecdec.y / vecdec.x);
    return vecpol;
}

Rdec2D Conversation(Rpol2D& vecpol) {
    Rdec2D vecdec;
    vecdec.x = vecpol.r * cos(vecpol.phi);
    vecdec.y = vecpol.r * sin(vecpol.phi);
    return vecdec;
}

Rdec2D operator-(const Rdec2D& arg) {
    return { -arg.x,-arg.y };
}

Rpol2D operator-(const Rpol2D& arg) {
    return { arg.r, M_PI+arg.phi };
}

Rdec2D operator*(Rdec2D& vector, const double& S) {
    return { vector.x * S, vector.y * S };
}

Rdec2D operator+(Rdec2D& vector1, Rdec2D& vector2) {
    return { vector1.x + vector2.x , vector1.y + vector2.y };
}

Rdec2D operator-(Rdec2D& vector1, Rdec2D& vector2) {
    return { vector1.x - vector2.x , vector1.y - vector2.y };
}

Rdec2D operator+=(Rdec2D& lhs, const Rdec2D& rhs) {
    lhs.x += rhs.x;
    lhs.y += rhs.y;
    return lhs;
}

Rdec2D operator-=(Rdec2D& lhs, const Rdec2D& rhs) {
    lhs.x -= rhs.x;
    lhs.y -= rhs.y;
    return lhs;
}

Rdec2D operator*=(Rdec2D& lhs, const double& rhs) {
    lhs.x *= rhs;
    lhs.y *= rhs;
    return lhs;
}

bool operator==(const Rdec2D& lhs, const Rdec2D& rhs) {
    return (std::abs(lhs.x - rhs.x) < kEps && std::abs(lhs.y - rhs.y) < kEps);
}

bool operator!=(const Rdec2D& lhs, const Rdec2D& rhs) {
    return (std::abs(lhs.x - rhs.x) >= kEps && std::abs(lhs.y - rhs.y) >= kEps);
}

std::ostream& operator<<(std::ostream& os, Rdec2D const& vec){
    return os << vec.x << ";" << vec.y;
}

std::ostream& operator<<(std::ostream& os, Rpol2D const& vec){
    return os << "vecotrpol{" << vec.r << ";" << vec.phi << "}";
}

