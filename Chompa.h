#include <string>
using namespace std;

class Chompa{
private:
    int talla;
    string color;
    bool capucha;
    int stock;
    

public:
    Chompa(): talla(0), capucha(0), color(""), stock(0){};
    Chompa(int ta, bool cap, string cl, int stck): talla(ta), capucha(cap), color(cl), stock(stck){};

    int get_talla();
    bool get_capucha();
    string get_color();
    int get_stock();

    void set_talla(int );
    void set_capucha(bool ); 
    void set_color(string );
    void set_stock(int );

    void change_stock(int );
};

//Getter
int Chompa::get_talla(){
    return talla;
}
bool Chompa::get_capucha(){
    return capucha;
}
string Chompa::get_color(){
    return color;
}
int Chompa::get_stock(){
    return stock;
}

//Setter
void Chompa::set_talla(int ta){
    talla = ta;
}
void Chompa::set_capucha(bool cap){
    capucha = cap;
}
void Chompa::set_color(string cl){
    color = cl;
}
void Chompa::set_stock(int stck){
    stock = stck;
}


void Chompa::change_stock(int n){
    stock += n;
}