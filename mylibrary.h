#include <cmath>

using namespace std;

namespace lib{

    float Hipotenusa(float num1, float num2)
    {
       float r;
       r=sqrt(num1*num1 + num2*num2);
       return r;

    }

    float Perimetro(float num1, float num2)
    {
        float r;
        r=(num1 + num2 + Hipotenusa(num1,num2));
        return r;

    }

    float Area(float num1, float num2)
    {
        float r;
        r=((num1 + num2)/2);
        return r;

    }

}