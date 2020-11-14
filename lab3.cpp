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

private:
    double pole;
};

// Zad 3. Zad 4.
class Kolo : public Figura
{
public:
    Kolo(double r)
    {
        setP(3.142 * r * r);
        cout << getP() << endl;
    }
};

class Kwadrat : public Figura
{
public:
    Kwadrat(double a)
    {
        setP(a * a);
        cout << getP() << endl;
    }
};

int main()
{}