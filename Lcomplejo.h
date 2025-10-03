#ifndef LCOMPLEJO_H_INCLUDED
#define LCOMPLEJO_H_INCLUDED

using namespace std;

class complejo
{
    int real;
    int imaginario;
public:
    complejo(int r, int i=0);
    virtual ~complejo();

    int getr() const;
    int geti() const;

    void set();
    void set(int real, int i);
    void ver() const;

    complejo operator+(complejo c) const;
    complejo operator+(int i) const;

    complejo operator-() const;

    //friend complejo operator+(int i, complejo c);
    friend ostream& operator<<(ostream& s, const complejo &c);

    complejo operator++(); //++c
    complejo operator++(int i); //c++

    bool operator==(complejo c) const;
    bool operator==(int i) const;

    operator int();
};

ostream& operator<<(ostream& s, const complejo &c);
complejo operator+(int i, complejo c);


#endif // LCOMPLEJO_H_INCLUDED
