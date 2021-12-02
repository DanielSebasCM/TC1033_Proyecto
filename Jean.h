#ifndef _JEAN_H_
#define _JEAN_H_

#include <string>
using namespace std;

#include "Item.h"

// Clase Jean que hereda de Item, con el atributo extra waist

class Jean : public Item{
private:
    int waist; // Waist representa el ancho de cintura del Jean

public:

    // Constructores
    Jean() : Item(){
        waist = 0;
    }

    Jean(int sz, string cl, float pr, int stck, int wt){
        size = sz;
        color = cl;
        price = pr;
        stock = stck;
        waist = wt;
    }

    // Accesors methods
    int get_waist();

    void set_waist(int );

};

//Getter
int Jean::get_waist(){
    return waist;
}

//Setter
void Jean::set_waist(int wt){
    waist = wt;
}

#endif