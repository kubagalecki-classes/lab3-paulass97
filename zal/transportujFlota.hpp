#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int suma = 0; 
    int suma_zaglowcow = 0;
    
    if(towar==0)
    {
    return 0;
    }
    
    else{
    while(suma < towar){
    Stocznia stocznia{};
    Statek* s1 = stocznia();
    towar = s1 -> transportuj();
    suma = suma+towar; 
    while(dynamic_cast<Zaglowiec*>(s1)){
    suma_zaglowcow=suma_zaglowcow+1;
    }
    delete s1;
        }
        return suma_zaglowcow;
    }
}
