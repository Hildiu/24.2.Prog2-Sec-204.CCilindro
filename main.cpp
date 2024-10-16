/*--------------------------------------------------------------------------
 * Dato de Entrada:  r, h (double)
 * Dato de Salida:  areaDeLaBase, areaLateral, areaTotal, Volumen (double)
 -------------------------------------------------------------------------*/


#include "CCilindro.h"


int main()
{ double r, h;

    cout << "Radio: "; cin >> r;
    cout << "Altura: "; cin >> h;
    CCilindro   Cil1(r,h);
    cout << "El area de la base es: " << Cil1.areaDeLaBase() << "\n";
    cout << "El area lateral    es: " << Cil1.areaLateral() << "\n";
    cout << "El area total      es: " << Cil1.areaTotal() << "\n";
    cout << "El volumen         es: " << Cil1.volumen() << "\n";
    //---- ahora realizamos un segundo calculo, pero usando el mismo objeto
    cout << "Ahora repetimos los calculos, pero aumentado el radio en 10 y la altura en 5\n";
    Cil1.setRadio(Cil1.getRadio() + 10);
    Cil1.setAltura(Cil1.getAltura() + 5);
    cout << "El area de la base es: " << Cil1.areaDeLaBase() << "\n";
    cout << "El area lateral    es: " << Cil1.areaLateral() << "\n";
    cout << "El area total      es: " << Cil1.areaTotal() << "\n";
    cout << "El volumen         es: " << Cil1.volumen() << "\n";
   cout << "\n\n Ahora creamos el segundo objeto\n";
   //----- ahora vamos a crear un objeto dinamico
   cout << "\nAhora creamos un objeto dinamico\n";
    CCilindro    *pObjeto = nullptr;
    cout << "Radio: "; cin >> r;
    cout << "Altura: "; cin >> h;
    pObjeto = new CCilindro(r,h);
    cout << "El area de la base : " << (*pObjeto).areaDeLaBase() << "\n";
    cout << "El area de la base : " <<  pObjeto->areaDeLaBase() << "\n";
    cout << "El area lateral    : " << pObjeto->areaLateral() << "\n";
    cout << "El area total      : " << pObjeto->areaTotal() << "\n";
    cout << "El volumen         : " << (*pObjeto).volumen() << "\n";
    delete pObjeto;
    pObjeto = nullptr;
    return 0;
}
