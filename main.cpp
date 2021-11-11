#include <iostream>
#include <string>
using namespace std;
#include "Camisa.h"
#include "Chompa.h"
#include "Vestido.h"

int main(){
    // Crea las insancias de los tres objetos
    Camisa camisa1(30, "Negro", 15);
    Chompa chompa1(34, false, "Rojo", 7);
    Vestido vestido1(32, 50, "Azul", 9);
    
    // Imprime los atributos de los objetos
    cout << camisa1.get_talla() << " " 
         << camisa1.get_color() << " " 
         << camisa1.get_stock() << endl;
    
    cout << chompa1.get_talla() << " " 
         << chompa1.get_capucha() << " "
         << chompa1.get_color() << " " 
         << chompa1.get_stock() << endl;
    
    cout << vestido1.get_talla() << " " 
         << vestido1.get_largo() << " "
         << vestido1.get_color() << " " 
         << vestido1.get_stock() << endl;

    // Utiliza los setters y el método change_stock para cambiar el valor de los atributos
    camisa1.set_talla(40);
    camisa1.set_color("Verde");
    camisa1.change_stock(-2); // Suma o resta el numero dado al valor de stock

    chompa1.set_talla(30);
    chompa1.set_capucha(true);
    chompa1.set_color("Rosado");
    chompa1.change_stock(-5);

    vestido1.set_talla(36);
    vestido1.set_largo(40);
    vestido1.set_color("Morado");
    vestido1.change_stock(7);
    
    // Imprime nuevamente los atributos ahora ya modificados para verificar que si funcionó
    cout << endl;
    
    cout << camisa1.get_talla() << " " 
         << camisa1.get_color() << " " 
         << camisa1.get_stock() << endl;
    
    cout << chompa1.get_talla() << " " 
         << chompa1.get_capucha() << " "
         << chompa1.get_color() << " " 
         << chompa1.get_stock() << endl;
    
    cout << vestido1.get_talla() << " " 
         << vestido1.get_largo() << " "
         << vestido1.get_color() << " " 
         << vestido1.get_stock() << endl;
}
