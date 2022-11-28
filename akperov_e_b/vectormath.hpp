#include <iosfwd>
#include <limits>

struct Rdec2D {
    double x = 0.0;
    double y = 0.0;
};

struct Rpol2D {
    double r = 0.0;
    double phi = 0.0;
};

const double kEps = std::numeric_limits<double>::epsilon() * 4;

double norm(Rdec2D vec);

double dot(Rdec2D vec1, Rdec2D vec2);

double dot(Rpol2D vec1, Rpol2D vec2);

Rpol2D Conversation(Rdec2D& vecdec);

Rdec2D Conversation(Rpol2D& vecpol);

Rdec2D operator-(Rdec2D& vector1, Rdec2D& vector2);

Rdec2D operator*(Rdec2D& vector, const double& S);

Rdec2D operator+(Rdec2D& vector1, Rdec2D& vector2);

Rdec2D operator+=(Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D operator-=(Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D operator*=(Rdec2D& lhs, const double& rhs);

bool operator==(const Rdec2D& lhs, const Rdec2D& rhs);

std::ostream& operator<<(std::ostream& os, Rdec2D const& vec);

std::ostream& operator<<(std::ostream& os, Rpol2D const& vec);