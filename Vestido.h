#include <string>
using namespace std;

class Vestido{
private:
    int talla;
    int largo;
    string color;
    int stock;

public:
    Vestido(): talla(0), largo(0), color(""), stock(0){};
    Vestido(int ta, int larg, string cl, int stck): talla(ta), largo(larg), color(cl), stock(stck){};

    int get_talla();
    int get_largo();
    string get_color();
    int get_stock();

    void set_talla(int );
    void set_largo(int );
    void set_color(string );
    void set_stock(int );

    void change_stock(int );
};

//Getter
int Vestido::get_talla(){
    return talla;
}
int Vestido::get_largo(){
    return largo;
}
string Vestido::get_color(){
    return color;
}
int Vestido::get_stock(){
    return stock;
}

//Setter
void Vestido::set_talla(int ta){
    talla = ta;
}
void Vestido::set_largo(int larg){
    largo = larg;
}
void Vestido::set_color(string cl){
    color = cl;
}
void Vestido::set_stock(int stck){
    stock = stck;
}


void Vestido::change_stock(int n){
    stock += n;
}