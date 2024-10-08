#include <iostream>
#include "parabola.h"

int main(){

    std::cout << "Podaj wartosci 3 puntow: ";
    double x,y;
    std::cin >> x >> y;
    point p1 = point(x,y);
    std::cin >> x >> y;
    point p2 = point(x,y);
    std::cin >> x >> y;
    point p3 = point(x,y);
    parabola para = parabola(p1, p2, p3);
    para.oblicz_wspolczynniki();
    para.show();
    std::string check = para.check(p1,p2,p3);
    std::cout << check << std::endl;

    std::cout << "Podaj x_0 badania pochodnej: ";
    std::cin >> x;
    para.pochodna(x);

    return 0;
}

