#include <iostream>
#include <string>
using namespace std;

#include "Store.h"

void report(Store );

int main(){

    // Creo mi tienda con un presupuesto inicial de 2 000 pesos y un tax rate de 12%
    Store mi_tienda;

    // Creo los diferentes productos que tendrá mi tienda
    Shirt camisa1(34, "Rojo", 150, 20, "Lineas");
    Shirt camisa2(36, "Azul", 130, 16, "Plano");
    Shirt camisa3(30, "Blanco", 100, 25, "Puntos");

    Jean jean1(36, "Azul", 550, 25, 34);
    Jean jean2(40, "Negro", 600, 15, 38);

    Hoodie hoodie1(42, "Rosado", 500, 9, false);

    // Añado estos items a mi tienda
    mi_tienda.add_item(camisa1);
    mi_tienda.add_item(camisa2);
    mi_tienda.add_item(camisa3);
    mi_tienda.add_item(jean1);
    mi_tienda.add_item(jean2);
    mi_tienda.add_item(hoodie1);

    // Verifico que se agregaran correctamente
    cout << "Se abre el dia con: \n";
    report(mi_tienda);

    // Comienza el dia y se realizan las siguientes ventas;
    mi_tienda.sell(mi_tienda.get_hoodies()[0], 3);
    mi_tienda.sell(mi_tienda.get_shirts()[2], 6);
    mi_tienda.sell(mi_tienda.get_shirts()[1], 9);
    mi_tienda.sell(mi_tienda.get_jeans()[1], 2);
    mi_tienda.sell(mi_tienda.get_hoodies()[0], 7);  

    // Al final del dia se regresa un comprador y devuelve ciertos items
    mi_tienda.refund(mi_tienda.get_shirts()[2], 3);  

    // Se cierra el dia con
    cout << "Se cierra el dia con: \n";

    report(mi_tienda);
}
void report(Store store){
    // Muestra todas las camisas y sus atributos
    for (int i = 0; i < store.get_i_shirts(); i++){
        Shirt temp = store.get_shirts()[i];
        cout << "Camisa de color " << temp.get_color() << ", talla " << temp.get_size() << ", precio " << temp.get_price() 
             << " y patron " << temp.get_pattern() <<", tiene un stock de " << temp.get_stock() << "\n";
    }

    cout << "\n";
    // Muestra todos los jeans y sus atributos
    for (int i = 0; i < store.get_i_jeans(); i++){
        Jean temp = store.get_jeans()[i];
        cout << "Jean de color " << temp.get_color() << ", talla " << temp.get_size() << ", precio " << temp.get_price() 
             << " y ancho de cintura " << temp.get_waist() <<", tiene un stock de " << temp.get_stock() << "\n";
    }

    cout << "\n";
    // Muestra todas las hoodies y sus atributos
    for (int i = 0; i < store.get_i_hoodies(); i++){
        Hoodie temp = store.get_hoodies()[i];
        cout << "Hoodie de color " << temp.get_color() << ", talla " << temp.get_size() << ", precio " << temp.get_price() 
             << " y con zipper = " << temp.get_zipper() <<", tiene un stock de " << temp.get_stock() << "\n";
    }
    
    cout << "\n";
    // Muestra los registros financieros
    cout << "Ingresos: " << store.get_income() << "\n";
    cout << "Balance despues de impuestos: " << store.get_balance() << "\n";
    cout << "impuestos: " << store.get_tax() << "\n\n";


}
