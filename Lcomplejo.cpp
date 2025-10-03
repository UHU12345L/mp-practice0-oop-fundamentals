#include <iostream>
#include "Lcomplejo.h"

complejo::complejo(int r, int i)
{
    real=r;
    imaginario=i;
}

complejo::~complejo()
{
    //dtor
}

int complejo::getr() const { return real; }
int complejo::geti() const { return imaginario; }

void complejo:: set()
{
    cout<<"Introduzca la parte real para modificar su valor: "<<endl;
    cin>>real;

    cout<<"Introduzca la parte imaginaria para modificar su valor: "<<endl;
    cin>>imaginario;

}
void complejo:: set(int r, int i)
{
    this-> real=r; //puntero al miembro del objeto actual. el miembro real de este objeto
    //es copiar parámetro en el miembro del objeto
    this->imaginario=i;
}

void complejo:: ver() const
{
    if (imaginario>=0)
    {
        cout<<real<<"+"<<imaginario<<"i"<<endl;
    }
    else
    {
        cout<<real<<imaginario<<"i"<<endl;
    }
}

complejo complejo::operator+(complejo c) const {
    complejo suma(0,0);
    suma.real=real+c.real;
    suma.imaginario=imaginario+c.imaginario;
    return suma;
}

complejo complejo::operator+(int i) const {
    complejo suma(real,imaginario);
    suma.real+=i;
    return suma;
}

complejo operator+(int i, complejo c) {
//complejo suma(0,0);
    //suma.real=c.real+i;
    //suma.imaginario=c.imaginario;
    ///////suma.real=c.getr()+i;
    ///////suma.imaginario=c.geti();

//suma.set(c.getr()+i, c.geti());
//return suma;


    return c+i; // return c.operator+(i);
}

complejo complejo:: operator-() const
{
    complejo copia(-real, -imaginario);
    return copia;
}

complejo complejo::operator++()
{
    real++;
    return (*this);

} //++c

complejo complejo::operator++(int i)   //c++, lo guarda, lo incrementa, devuelve el 1º guardado
{
    complejo copia(real, imaginario); //complejo copia(*this);
    real++; //this->real++;
    return copia;
} //c++

bool complejo::operator==(complejo c) const
{
    if(real==c.real && imaginario==c.imaginario)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool complejo:: operator==(int i) const
{
    if(real==i && imaginario==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

complejo::operator int()
{
    cout<<real<<endl;
    return real;
}

ostream& operator<<(ostream& s, const complejo& c)
{
    //si parte imaginatia no es negativa
    if (c.geti() >= 0)
    {
        s << c.getr() << "+" << c.geti() << "i";
    } //si parte imaginaria es negativa
    else
    {
        s << c.getr() << c.geti() << "i";
    }
    return s;
}
//this: puntero al objeto actual
//*this: el objeto actual
