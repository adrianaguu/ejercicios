#include "polygon.h"
int polygon:: track=0;

polygon::polygon(point* par, const int tam)
{
    this->arr=arraypoint(par,tam,tam);
    ++track;
}

polygon::polygon(arraypoint par)
{
    ++track;
    arr=par;
}

double polygon :: area ()
{

}

int polygon::getnumsides()
{

}

const arraypoint* polygon :: getpoints()
{
    const arraypoint* P = & this ->arr;
    return P;
}

int polygon :: getnumpolygons ()
{
    return track;
}

polygon::~polygon()
{
    --track;
}
