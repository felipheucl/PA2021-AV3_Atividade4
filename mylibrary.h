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
        r=((num1 * num2)/2);
        return r;

    }
    
    struct tTriangulos
    {
        tTriangulos (float l1, float l2, float l3): lado1(l1), lado2(l2), lado3(l3)
        {
        }

        public:
        float lado1, lado2, lado3;
  
        friend ostream& operator<<(ostream& os, const tTriangulos& tT)

        {
        os << "Medidas dos lados: " << tT.lado1 << ", " << tT.lado2 << ", " << tT.lado3 << endl;
        return os;
        }

        
    };
    

}