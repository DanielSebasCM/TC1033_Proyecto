//Daniel Cajas A01708637

#ifndef _HOODIE_H_
#define _HOODIE_H_

#include <string>
using namespace std;

#include "Item.h"

class Hoodie : public Item{
private:
    bool zipper;

public:
    Hoodie() : Item(){
        zipper = 0;
    }

    Hoodie(int sz, string cl, float pr, int stck, bool zp){
        size = sz;
        color = cl;
        price = pr;
        stock = stck;
        zipper = zp;
    }

    bool get_zipper();

    void set_zipper(bool );

};

//Getter
bool Hoodie::get_zipper(){
    return zipper;
}

//Setter
void Hoodie::set_zipper(bool zp){
    zipper = zp;
}

#endif
