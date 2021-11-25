#ifndef _ITEM_H_
#define _ITEM_H_

#include <string>
using namespace std;

class Item{
protected:
    int size;
    string color;
    float price;
    int stock;
    int id = 42;

public:
    Item(): size(0), color(""), price(0.0), stock(0){};
    Item(int sz, string cl, float pr, int stck){
        size = sz;
        color = cl;
        price = pr;
        stock = stck;
    };

    int get_size();
    string get_color();
    int get_stock();
    float get_price();
    int get_id();

    void set_size(int );
    void set_color(string );
    void set_stock(int );
    void set_price(float );
    void set_id(int );
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

int Item::get_id(){
    return id;
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

void Item::set_id(int i){
    id = i;
}
#endif