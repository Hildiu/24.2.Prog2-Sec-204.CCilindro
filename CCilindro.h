//
// Created by mbermejo on 16/10/2024.
//

#ifndef INC_01_PROYECTO_CCILINDRO_H
#define INC_01_PROYECTO_CCILINDRO_H

#include <iostream>
using namespace std;

const double pi=3.141516;

class CCilindro
{
  private:
     double radio;
     double altura;
  public:
    CCilindro() {}
    CCilindro(double _radio, double _altura): radio(_radio), altura(_altura) {}
    virtual ~CCilindro() { cout << "Me estoy destruyendo...."; }
    double areaDeLaBase();
    double areaLateral();
    double areaTotal();
    double volumen();
    //----metodos de acceso
    void setRadio(double _radio){ radio = _radio;}
    double getRadio() { return radio; }

    void setAltura(double _altura) {  altura = _altura;}
    double getAltura(){ return altura;}
};


#endif //INC_01_PROYECTO_CCILINDRO_H
