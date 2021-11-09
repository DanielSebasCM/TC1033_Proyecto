#include <string>
using namespace std;

class Camisa{
private:
    int talla;
    string color;
    int stock;

public:
    Camisa(): talla(0), color(""), stock(0){};
    Camisa(int ta, string cl, int stck): talla(ta), color(cl), stock(stck){};

    int get_talla();
    string get_color();
    int get_stock();

    void set_talla(int );
    void set_color(string );
    void set_stock(int );

    void change_stock(int );
};

//Getter
int Camisa::get_talla(){
    return talla;
}
string Camisa::get_color(){
    return color;
}
int Camisa::get_stock(){
    return stock;
}

//Setter
void Camisa::set_talla(int ta){
    talla = ta;
}
void Camisa::set_color(string cl){
    color = cl;
}
void Camisa::set_stock(int stck){
    stock = stck;
}


void Camisa::change_stock(int n){
    stock += n;
}