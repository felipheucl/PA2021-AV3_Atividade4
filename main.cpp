#include <iostream>
#include "mylibrary.h"

using namespace std;
using namespace lib;

int main() {

float cateto1, cateto2;
int ctrl, c, num1=3, num2=4;

cout<<endl<<endl<<"DESAFIO 4 - Cálculo com figuras geométricas: Triângulos retângulos"<<endl<<endl;
cout<<"Digite o valor do 1º cateto:"<<endl;
//cin>>cateto1;
cout<<"Digite o valor do 2º cateto:"<<endl;
//cin>>cateto2;
cout<<endl<<"Escolha a operação: (1 ou 2 ou 3 ou [Enter] )"<<endl;
cout<<endl<<"1 - Perímetro do Triângulo"<<endl;
cout<<"2 - Área do Triangulo"<<endl;
cout<<"3 - Valor da Hipotenusa"<<endl;
cout<<"[Enter] - Todas as operações"<<endl<<endl;

cout<<Hipotenusa(15,20)<<endl;

cout<<Perimetro(15,20)<<endl;

cout<<Area(15.0f,20.0f);


}