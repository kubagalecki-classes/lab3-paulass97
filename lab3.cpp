#include <iostream>
#include <math.h>

using namespace std;

// Zad 1.
class Figura
{
public:
    // Zad 2.
    void   setP(double p) { pole = p; }
    double getP() { return pole; }

public:
    double pole;
};

// Zad 3. Zad 4.
class Kolo : public Figura
{
public:
    Kolo(double r)
    {
        pole = 3.142 * r * r;
        cout << pole << endl;
    }
};

class Kwadrat : public Figura
{
public:
    Kwadrat(double a)
    {
        pole = a * a;
        cout << pole << endl;
    }
};