#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int suma = 0; 
    int suma_zaglowcow = 0;
    unsigned int towar_s1;
    
    if(towar==0)
    {
    return 0;
    }
    else{
    while(suma < towar){
    Stocznia stocznia{};
    Statek* s1 = stocznia();
    towar_s1 = s1 -> transportuj();
    suma = suma+towar_s1; 
    if(dynamic_cast<Zaglowiec*>(s1)){
    suma_zaglowcow=suma_zaglowcow+1;
    }
    delete s1;
    }
        return suma_zaglowcow;
    }
}
