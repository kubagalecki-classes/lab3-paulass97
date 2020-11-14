#include <iostream>
#include <math.h>

using namespace std;

//Zad 1.
class Figura{
public:

//Zad 2. 
void setP(double p){p=pole;}
double getP(){return p;}

private:
double pole;
};

//Zad 3. Zad 4.
class Kolo:public Figura{
  public:
  double r;
  pole = 3.142*r*r;
};

class Kwadrat:public Figura{
  public:
  double a; 
  pole = a*a;
}; 