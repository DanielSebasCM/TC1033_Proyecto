//Daniel Cajas A01708637

#ifndef _STORE_H_
#define _STORE_H_

#include <iostream>
#include <string>
#include <typeinfo>
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

    bool sell(Item& , int );
    bool refund(Item& , int );

    bool add_item(Shirt& );
    bool add_item(Hoodie& );
    bool add_item(Jean& );

     // Accessors methods
    float get_income();
    float get_balance();
    float get_tax();
    float get_tax_rate();
    Shirt * get_shirts();
    Hoodie * get_hoodies();
    Jean * get_jeans();
    int get_i_shirts();
    int get_i_hoodies();
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

Store::Store(float bal, float tx_rt){
    
    balance = bal;
    tax_rate = tx_rt;

}

// Reduce el stock del item y actualiza el balance, tax y income dependiendo de su precio
bool Store::sell(Item &itm, int n){
    
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
        cout << "Venta existosa por " << itm.get_price() * n << " pesos\n \n";
        return true;
    }

    else
        cout << "Stock insuficiente\n \n";
        return false;
}

// Aumenta el stock del item retornado y actualiza las finanzas
bool Store::refund(Item &itm, int n){

    int stock = itm.get_stock();
    float price = itm.get_price();

    // Aumenta el stock
    itm.set_stock(stock + n);

    // Actualiza las finanzas
    income -= price * n; 
    tax -= price * n * tax_rate;
    balance -= price * n - price * n * tax_rate;

    cout << "Reembolso de " << itm.get_price() * n << " pesos\n \n";
    return true;
}

// Añade items a su correspondiente array
bool Store::add_item(Shirt &itm){
        if (i_shirts < max_items){
            shirts[i_shirts] = itm;
            i_shirts++;
            return true;
        }
        else
            cout << "No se pudo agregar, maximo de items alcanzado\n\n";
            return false;
}

bool Store::add_item(Hoodie &itm){
        if (i_hoodies < max_items){
        hoodies[i_hoodies] = itm;
        i_hoodies++;
        return true;
    }
    else
        cout << "No se pudo agregar, maximo de items alcanzado\n\n";
        return false;
}

bool Store::add_item(Jean &itm){
        if (i_jeans < max_items){
        jeans[i_jeans] = itm;
        i_jeans++;
        return true;
    }
    else
        cout << "No se pudo agregar, maximo de items alcanzado\n\n";
        return false;
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

Hoodie * Store::get_hoodies(){
    return hoodies;
}

Jean * Store::get_jeans(){
    return jeans;
}

int Store::get_i_shirts(){
    return i_shirts;
}

int Store::get_i_hoodies(){
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
