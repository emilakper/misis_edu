#define _USE_MATH_DEFINES
#include <vectormath/vectormath.hpp>
#include <cmath>
#include <iostream>
#include <iomanip>

void Solution_Simple(Rdec2D r_m, Rdec2D r_c, Rdec2D v_m, Rdec2D v_c, double CatRad, double v0) {
    double last;
    double s_mouse = 0.0;
    double s_cat = 0.0;
    last = norm(r_m - r_c);
    double dt = 1e-6;
    double count_t = 0;
    r_m = r_m + v_m * dt;
    s_mouse += norm(v_m) * dt;
    s_cat += norm(v_c) * dt;
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
        s_mouse += norm(v_m) * dt;
        s_cat += norm(v_c) * dt;
        v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    }
    /*if (r_m.y >= 0) {
        std::cout << "Mouse in Hole in " << count_t << " second\n";
    }
    else if (norm(r_m - r_c) <= CatRad) {
        std::cout << "Cat ate Mouse in " << count_t << " second\n";
    }
    else if (last <= norm(r_m - r_c)) {
        std::cout << "Mouse ran away \n";
    }*/
    //std::cout << s_mouse/s_cat;
}


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

    return r_m;
}


double which_vc_catch(Rdec2D r_m, Rdec2D r_c, Rdec2D v_m, Rdec2D v_c, double CatRad) {
    double v_length;
    double v_c_too_much = (norm(v_m) + 50.0);
    double v_c_little = (norm(v_m) - 50.0);
    v_length = (v_c_too_much + v_c_little) / 2;
    while (where_catch(r_m, r_c, v_m, v_c, CatRad, v_length).y < 0) {
        if (where_catch(r_m, r_c, v_m, v_c, CatRad, v_length).y < 0) {
            v_length = (v_c_too_much + v_length) / 2;
        }
        else {
            v_length = (v_length + v_c_little) / 2;
        }
    }
    //std::cout << where_catch(r_m, r_c, v_m, v_c, CatRad, norm(v_m) + 50.0) <<"\n";
    return v_length;
}




/* Ňĺńň ďđîăđŕěěű ( îďđĺäĺëĺíčĺ îäíîăî čç ňđĺő âîçěîćíűő đĺçóëüňŕňîâ ďđč đŕçíűő óńëîâč˙ő ) 
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

}*/

int main() {
    Rdec2D r_m{ 0.0, -20.0 }; Rdec2D r_c{ 20.0 ,0.0 }; Rdec2D v_m{ 0.0, 4.0 }; Rdec2D v_c;
    std::cout << "Print y_m and x_c \n";
    std::cin >> r_m.y >> r_c.x;
    double CatRad = 1.0;
    v_c = (r_m - r_c) * (1 / norm(r_m - r_c));
    double answerv = which_vc_catch(r_m, r_c, v_m, v_c, CatRad);
    std::cout << answerv << std::endl;
    //Solution_Simple(r_m, r_c, v_m, v_c, CatRad, answerv);
}
