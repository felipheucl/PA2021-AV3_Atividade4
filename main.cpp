#include <iostream>
#include "mylibrary.h"

using namespace std;
using namespace lib;

int main() {

float cateto1, cateto2;

cout<<endl<<endl<<"DESAFIO 4 - Cálculo com figuras geométricas: Triângulos retângulos"<<endl<<endl;

cout<<"Digite o valor do 1º cateto:"<<endl;
cin>>cateto1;
cout<<"Digite o valor do 2º cateto:"<<endl;
cin>>cateto2;

cout<<endl<<"Apresentando o resultado das operacões:"<<endl<<endl;

cout<<"Hipotenusa: "<<Hipotenusa(cateto1,cateto2)<<endl;

cout<<"Perímetro: "<<Perimetro(cateto1,cateto2)<<endl;

cout<<"Área: "<<Area(cateto1,cateto2);

tTriangulos Triangulo=tTriangulos(cateto1,cateto2,Hipotenusa(cateto1,cateto2));
cout<<endl<<Triangulo<<endl;

}