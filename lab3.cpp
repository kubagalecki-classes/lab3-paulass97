#include <iostream>
#include <math.h>

using namespace std;

class Figura
{
public:
    // void   setP(double p) { pole = p; }
    double getP() { return pole; }

    virtual void id() { cout << "Pole figury: " << getP() << endl; };

protected:
    // private:
    double pole;
};

class Kolo : public Figura
{
public:
    void id() override { cout << "Pole koła: " << getP() << endl; }

    Kolo(double r) : Figura{}
    {
        // setP(3.142 * r * r);
        pole = 3.142 * r * r;
        // cout << getP() << endl;
    }
};

class Kwadrat : public Figura
{
public:
    void id() override { cout << "Pole kwadratu: " << getP() << endl; }

    Kwadrat(double a) : Figura{}
    {
        // setP(a * a);
        pole = a * a;
        // cout << getP() << endl;
    }
};

void id(const Figura&);

int main()
{
    Kwadrat kwadrat(2);
    kwadrat.id();
    Figura kwadrat1 = static_cast< Figura >(kwadrat);
    kwadrat1.id();

    Figura*  f  = new Kwadrat{2};
    Kwadrat* kw = dynamic_cast< Kwadrat* >(f);
    kw->id();
    // Kolo*    ko = dynamic_cast< Kolo* >(f);
    // ko->id();
}
