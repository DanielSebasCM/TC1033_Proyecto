#ifndef _STORE_H_
#define _STORE_H_

#include <iostream>
#include <string>
using namespace std;
#include "Shirt.h"
#include "Hoodie.h"
#include "Jean.h"

class Store{
private:
    float income;
    float balance;
    float tax;
    float tax_rate;
    int max_items = 50;

    // Crea listas para almacenar los items que tiene la tienda
    Shirt shirts[50];
    Hoodie hoodies[50];
    Jean jeans[50];

    // Registra cuantos items hay de cada tipo
    int i_shirts = 0;
    int i_hoodies = 0;
    int i_jeans = 0;

public:
    Store();
    Store(float , float );

    bool sell(Item , int );
    bool refund(Item , int );

    bool check_finances();

    bool add_item(Shirt );
    bool add_item(Hoodie );
    bool add_item(Jean );

     // Accessors methods
    float get_income();
    float get_balance();
    float get_tax();
    float get_tax_rate();
    Shirt * get_shirts();
    Hoodie * get_hoodie();
    Jean * get_jeans();
    int get_i_shirts();
    int get_i_hoodie();
    int get_i_jeans();

    void set_income(float );
    void set_balance(float );
    void set_tax(float );
    void set_tax_rate(float );
};

Store::Store(){
    income = 0.0;
    balance = 0.0;
    tax = 0.0;
    tax_rate = 0.12;
}

Store::Store(float inc, float tx_rt){
    
    income = inc;
    tax_rate = tx_rt;
    tax = income * tax_rate;
    balance = income - tax;

}

// reduce el stock del item y actualiza el balance, tax y income dependiendo de su precio
bool Store::sell(Item itm, int n){
    
    int stock = itm.get_stock();
    float price = itm.get_price();

     //Si se tiene suficientes items en stock ehecutar y regresat true, sino regresar false
    if (stock >= n){

        // Reduce el stock
        itm.set_stock(stock - n); 
    
        // Actualiza las finanzas
        income += price * n; 
        tax += price * n * tax_rate;
        balance += price * n - price * n * tax_rate;
        cout << "Venta existosa\n";
        return true;
    }

    else
        cout << "Stock insuficiente\n";
        return false;
}

// Aumenta el stock del item retornado y actualiza las finanzas
bool Store::refund(Item itm, int n){

    int stock = itm.get_stock();
    float price = itm.get_price();

    // Aumenta el stock
    itm.set_stock(stock + n);

    // Actualiza las finanzas
    income -= price * n; 
    tax -= price * n * tax_rate;
    balance -= price * n - price * n * tax_rate;

    return true;
}

// Verifica que no existan errores en los datos financieros
// Si no los hay regresa true, en otro caso false
bool Store::check_finances(){
    if (income == balance + tax)
        return true;
    else
        return false;
}

// Añade items a su correspondiente array
bool Store::add_item(Shirt itm){
    shirts[i_shirts] = itm;
    itm.set_id(i_shirts);
    i_shirts++;
    return true;
}

bool Store::add_item(Hoodie itm){
    hoodies[i_hoodies] = itm;
    itm.set_id(i_hoodies);
    i_hoodies++;
    return true;
}

bool Store::add_item(Jean itm){
    jeans[i_jeans] = itm;
    itm.set_id(i_jeans);
    i_jeans++;
    return true;
}

float Store::get_income(){
    return income;
}

float Store::get_balance(){
    return balance;
}

float Store::get_tax(){
    return tax;
}

float Store::get_tax_rate(){
    return tax_rate;
}

Shirt * Store::get_shirts(){
    return shirts;
}

Hoodie * Store::get_hoodie(){
    return hoodies;
}

Jean * Store::get_jeans(){
    return jeans;
}

int Store::get_i_shirts(){
    return i_shirts;
}

int Store::get_i_hoodie(){
    return i_hoodies;
}

int Store::get_i_jeans(){
    return i_jeans;
}

void Store::set_income(float inc){
    income = inc;
}

void Store::set_balance(float bal){
    balance = bal;
}

void Store::set_tax(float tx){
    tax = tx;
}

void Store::set_tax_rate(float tx_rt){
    tax_rate = tx_rt;
}

#endif
