#ifndef LCOMPLEJO_H_INCLUDED
#define LCOMPLEJO_H_INCLUDED

using namespace std;

class complejo
{
    //a+bi
    int real; //a
    int imaginario; //b
public:
    complejo(int r, int i=0);
    virtual ~complejo();
    int getr() const { return real; }
    int geti() const { return imaginario; }
    void set();
    void set(int real, int i);
    void ver() const;

    complejo operator+(complejo c) const;
    complejo operator+(int i) const;

    complejo operator-() const;
};

complejo operator+(int i, complejo c);
ostream& operator<<(ostream& s, const complejo &c);

#endif // LCOMPLEJO_H_INCLUDED
