#define _USE_MATH_DEFINES
#include <vectormath/vectormath.hpp>
#include <cmath>
#include <iostream>
#include <iomanip>


struct state {
    Rdec2D r = { 0.0,0.0 };
    Rdec2D v = { 0.0,0.0 };
    Rdec2D a = { 0.0,0.0 };
};



int main() {
    double k = 1;
    double dt = 1e-1;
    double t = 0;
    
    state point{ {0.0,10.0}
                ,{0.31,0.0 }
                ,{0.0,0.0 } };

    Rdec2D g;

    while (t < 100000) {
        g = -point.r *(1/norm(point.r)) * (k / (dot(point.r, point.r)));
        point.v += point.a * dt;
        point.v += g * dt;
        point.r += point.v * dt;
        if (norm(point.r) < 1)
            dt = 1e-5;
        else
            dt =1e-1;
        std::cout << "rad - " << point.r << " speed - " << point.v << "  acceleration - " << g << "\n";
        t += dt;
    }
    


}
