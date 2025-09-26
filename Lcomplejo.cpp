    #include <iostream>
    #include "Lcomplejo.h"

    complejo::complejo(int r, int i) {
    real=r;
    imaginario=i;
}

complejo::~complejo()
{
    //dtor
}

    void complejo:: set(){
        cout<<"Introduzca la parte real para modificar su valor: "<<endl;
        cin>>real;

        cout<<"Introduzca la parte imaginaria para modificar su valor: "<<endl;
        cin>>imaginario;

    }
    void complejo:: set(int real, int i){
        this-> real=real; //puntero al miembro del objeto actual. el miembro real de este objeto
        //es copiar parámetro en el miembro del objeto
        imaginario=i; //no this-> por nombre distinto
    }

    void complejo:: ver() const{
        if (imaginario>=0){
            cout<<real<<"+"<<imaginario<<"i";
        }else{
            cout<<real<<imaginario<<"i";
        }
    }

    complejo complejo:: operator+(complejo c) const{
        return complejo(c.real+real, c.imaginario+imaginario);
    }

    complejo complejo:: operator+(int i) const{
        return complejo(real+i, imaginario);
    }

    complejo complejo:: operator-() const{
        return complejo(-real, -imaginario);
    }

complejo operator+(int i, complejo c) {
    return complejo(i + c.getr(), c.geti());
}

ostream& operator<<(ostream& s, const complejo& c) {
    //si parte imaginatia no es negativa
    if (c.geti() >= 0) s << c.getr() << '+' << c.geti() << 'i';
    //si parte imaginaria es negativa
    else               s << c.getr() << c.geti() << 'i';
    return s;
}


