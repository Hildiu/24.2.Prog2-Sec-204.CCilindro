//
// Created by mbermejo on 16/10/2024.
//

#include "CCilindro.h"

double CCilindro::areaDeLaBase()
{
  return 2* pi * radio*radio;
}

double  CCilindro::areaLateral()
{
  return 2*pi*radio*altura;
}

double  CCilindro::areaTotal()
{
   return areaDeLaBase() + areaLateral();
}

double  CCilindro::volumen()
{
  return pi* radio*radio*altura;
}
