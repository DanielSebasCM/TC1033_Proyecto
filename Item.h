#ifndef _ITEM_H_
#define _ITEM_H_

#include <string>
using namespace std;

// Clase Item padre del resto de items. 
class Item{
protected:
    int size; // Talla del item
    string color; // Color del item
    float price; // Precio del item
    int stock; // Cuanto de este item esta en stock

public:

    // Constructores
    Item(): size(0), color(""), price(0.0), stock(0){};

    Item(int sz, string cl, float pr, int stck){
        size = sz;
        color = cl;
        price = pr;
        stock = stck;
    };

    // Accesors methods
    int get_size();
    string get_color();
    int get_stock();
    float get_price();

    void set_size(int );
    void set_color(string );
    void set_stock(int );
    void set_price(float );
};

//Getter
int Item::get_size(){
    return size;
}

string Item::get_color(){
    return color;
}

int Item::get_stock(){
    return stock;
}

float Item::get_price(){
    return price;
}

//Setter
void Item::set_size(int sz){
    size = sz;
}

void Item::set_color(string cl){
    color = cl;
}

void Item::set_stock(int stck){
    stock = stck;
}

void Item::set_price(float pr){
    price = pr;
}

#endif