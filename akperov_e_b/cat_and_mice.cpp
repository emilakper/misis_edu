#define _USE_MATH_DEFINES
#include <vectormath/vectormath.hpp>
#include <cmath>
#include <iostream>
#include <iomanip>


int main() {
    std::cout << "Тест на наклонной прямой 3 случай";
    Rdec2D r_m{ 0.0, -20.0 }; Rdec2D r_c{ 10.0 ,-10.0 }; Rdec2D v_m{ -5.0, 8.0 }; Rdec2D v_c;
    double CatRad = 1.0;
    double v0 = 2.0;
    v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    std::cout << "Rcat " << r_c << "\n";
    std::cout << "Rmouse " << r_m << "\n";
    std::cout << "Vcat " << v_c << "\n";
    std::cout << "Vmice " << v_m << "\n";

    double last;
    last = norm(r_m - r_c);
    double dt = 1e-6;
    int count_t = 0;
    r_m = r_m + v_m*dt ;
    r_c = r_c + v_c*dt ;
    v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    count_t += dt;

    while ((r_m.y < 0) && 
        (norm(r_m - r_c) > CatRad)) {
        if (last >= norm(r_m - r_c) && v_m.y < 0)
            break;
        last = norm(r_m - r_c);
        count_t += dt;
        r_m = r_m + v_m * dt;
        r_c = r_c + v_c * dt;
        v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    }
    std::cout << "Results:\n";
    std::cout << "Rcat " << r_c << "\n";
    std::cout << "Rmouse " << r_m << "\n";
    std::cout << "Vcat " << v_c << "\n";
    std::cout << "Vmice " << v_m << "\n";


    if (r_m.y >= 0) {
        std::cout << "Mouse in Hole in" << count_t << " second";
    }
    else if (norm(r_m - r_c) <= CatRad) {
        std::cout << "Cat ate Mouse in " << count_t << " second";
    }
    else if (last <= norm(r_m - r_c)) {
        std::cout << "Mouse ran away ";
    }
  
}
