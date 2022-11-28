#define _USE_MATH_DEFINES
#include <vectormath/vectormath.hpp>
#include <cmath>
#include <iostream>
#include <iomanip>

void Solution_Simple(Rdec2D r_m, Rdec2D r_c, Rdec2D v_m, Rdec2D v_c, double CatRad, double v0) {
    double last;
    last = norm(r_m - r_c);
    double dt = 1e-6;
    double count_t = 0;
    r_m = r_m + v_m * dt;
    r_c = r_c + v_c * dt;
    v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    count_t += dt;

    while ((r_m.y < 0) &&
        (norm(r_m - r_c) > CatRad)) {
        if (last < norm(r_m - r_c) && v_m.y < 0)
            break;
        last = norm(r_m - r_c);
        count_t += dt;
        r_m = r_m + v_m * dt;
        r_c = r_c + v_c * dt;
        v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    }
    if (r_m.y >= 0) {
        std::cout << "Mouse in Hole in " << count_t << " second\n";
    }
    else if (norm(r_m - r_c) <= CatRad) {
        std::cout << "Cat ate Mouse in " << count_t << " second\n";
    }
    else if (last <= norm(r_m - r_c)) {
        std::cout << "Mouse ran away \n";
    }
    return;
}


int main() {
    Rdec2D r_m{ 0.0, -20.0 }; Rdec2D r_c{ 10.0 ,-10.0 }; Rdec2D v_m{ -5.0, 8.0 }; Rdec2D v_c;
    double CatRad = 1.0;
    double v0 = 2.0;
    v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    std::cout << "\n Check on inclined line - 3 situations: \n";
    Solution_Simple(r_m, r_c, v_m, v_c, CatRad, v0);

    r_m={ 0.0, -20.0 }; r_c={ 10.0 ,-10.0 }; v_m={ -5.0, -16.0 };
    v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    CatRad = 1.0; v0 = 2.0;
    Solution_Simple(r_m, r_c, v_m, v_c, CatRad, v0);

    r_m = { 0.0, -20.0 }; r_c = { 10.0 ,-10.0 }; v_m = { -5.0, 8.0 };
    CatRad = 1.0;v0 = 25.0;
    v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    Solution_Simple(r_m, r_c, v_m, v_c, CatRad, v0);


    std::cout << "\n Check on OX and OY - 3 situations: \n";

    r_m = { 0.0, -20.0 }; r_c = { 15.0 ,0.0 }; v_m = { 0.0, 8.0 };
    CatRad = 1.0; v0 = 2.0;
    v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    Solution_Simple(r_m, r_c, v_m, v_c, CatRad, v0);

    r_m = { 0.0, -20.0 }; r_c = { 15.0 ,0.0 }; v_m = { 0.0, 1.0 };
    CatRad = 1.0; v0 = 8.0;
    v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    Solution_Simple(r_m, r_c, v_m, v_c, CatRad, v0);

    r_m = { 0.0, -20.0 }; r_c = { 15.0 ,0.0 }; v_m = { 0.0, -8.0 };
    CatRad = 1.0; v0 = 2.0;
    v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    Solution_Simple(r_m, r_c, v_m, v_c, CatRad, v0);

}
