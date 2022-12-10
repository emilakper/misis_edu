#define _USE_MATH_DEFINES
#include <vectormath/vectormath.hpp>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>


struct state {
    Rdec2D r = { 0.0,0.0 };
    Rdec2D v = { 0.0,0.0 };
    Rdec2D a = { 0.0,0.0 };
};



int main() {

    double k = 1;
    double dt = 1e-1;
    double t = 0;
    int counter = 0;
    std::ofstream fout("results.txt");

    state point{ {0.0,15.0}
                ,{0.0,0.0 }
                ,{0.0,0.0 } };

    Rdec2D g;


    while (counter < 10000) {
        g = -point.r *(1/norm(point.r)) * (k / (dot(point.r, point.r)));
        point.v = point.v + point.a * dt + g * dt;
        point.r += point.v * dt;


        if (std::abs(point.r.x) < 3 * k && std::abs(point.r.y) < 3*k) {
            point.r -= point.v * dt;
            point.v = point.v - point.a * dt - g * dt;
            point.r = -point.r;
            std::cout << "op, teleport rpred=" << std::endl;
        }

        //std::cout << "rad - " << point.r << " speed - " << point.v << "  acceleration - " << g << "\n";
        
        if (counter % 5 == 0) {
            fout << point.r << " " << point.v << " " << point.a << "\n";
        } 
        
        t += dt;
        counter ++;
    }
    fout.close();


}
