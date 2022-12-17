#define _USE_MATH_DEFINES
#include <geom/geom.hpp>
#include <cmath>
#include <iostream>
#include <iomanip>


Rdec2D where_catch(Rdec2D r_m, Rdec2D r_c, Rdec2D v_m, Rdec2D v_c, double CatRad, double v0) {
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
    if (norm(r_m - r_c) > CatRad) {
        r_m.x = 5.0;
        r_m.y = 5.0;
    }
    return r_m;
}




double which_vc_catch(Rdec2D r_m, Rdec2D r_c, Rdec2D v_m, Rdec2D v_c, double CatRad) {
    double v_length = norm(v_c);
    while (norm(where_catch(r_m, r_c, v_m, v_c, CatRad, v_length)) >= 1.5 * CatRad) {
        if (where_catch(r_m, r_c, v_m, v_c, CatRad, v_length).y > 0) {
            v_length += v_length / 3;
        }
        else {
            v_length -= v_length / 10;
        }
    }
    return v_length;
}


int main() {
    Rdec2D r_m{ 0.0, -20.0 }; Rdec2D r_c{ 20.0 ,0.0 }; Rdec2D v_m{ 0.0, 4.0 }; Rdec2D v_c;
    std::cout << "Print y_m and x_c \n";
    std::cin >> r_m.y >> r_c.x;
    double CatRad = 1.0;
    v_c = (r_m - r_c) * (1 / norm(r_m - r_c));
    double answerv = which_vc_catch(r_m, r_c, v_m, v_c, CatRad);
    std::cout << answerv << std::endl;
}
