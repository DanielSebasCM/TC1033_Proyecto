#ifndef _SHIRT_H_
#define _SHIRT_H_

#include <string>
using namespace std;

#include "Item.h"

class Shirt : public Item{
private:
    string pattern;

public:
    Shirt() : Item(){
        pattern = "";
    }

    Shirt(int sz, string cl, float pr, int stck, string pt){
        size = sz;
        color = cl;
        price = pr;
        stock = stck;
        pattern = pt;
    }

    string get_pattern();

    void set_pattern(string );

};

//Getter
string Shirt::get_pattern(){
    return pattern;
}

//Setter
void Shirt::set_pattern(string pt){
    pattern = pt;
}

#endif