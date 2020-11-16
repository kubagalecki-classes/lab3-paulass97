#include <iostream>
#include <math.h>

using namespace std;

class Figura
{
public:
    // void   setP(double p) { pole = p; }
    double getP() { return pole; }
    Figura(double p) : pole(p){};

    virtual void id() { cout << "Pole figury: " << getP() << endl; };
    virtual ~Figura() { cout << "Figura została zniszczona" << endl; }

protected:
    // private:
    double pole;
};

class Kolo : public Figura
{
public:
    void id() override { cout << "Pole koła: " << getP() << endl; }

    Kolo(double r) : Figura(3.142 * r * r)
    {
        // setP(3.142 * r * r);
        cout << pole << endl;
        // cout << getP() << endl;
    }
    virtual ~Kolo() { cout << "kolo zostało zniszczone" << endl; }
};

class Kwadrat : public Figura
{
public:
    void id() override { cout << "Pole kwadratu: " << getP() << endl; }

    Kwadrat(double a) : Figura(a * a)
    {
        cout << pole << endl;
        // setP(a * a);
        // pole = a * a;
        // cout << getP() << endl;
    }
    virtual ~Kwadrat() { cout << "Kwadrat został zniszczony" << endl; }
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
    delete f;
}
