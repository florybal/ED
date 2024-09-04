/*
Exercício 7: Sobrecarga de Operadores
1. Crie uma classe Complexo que representa números complexos e inclui os seguintes:
• Atributos real e imaginario (ambos double).
• Métodos para definir e exibir números complexos.
2. Sobrecargue o operador + para permitir a adição de dois números complexos. Use Complexo opera-
tor+(Complexo c).
3. No método main, crie dois objetos da classe Complexo, some-os usando o operador sobrecarregado,
e exiba o resultado.
*/

/*
C++ has the ability to provide the operators with a special meaning for a data type, 
this ability is known as operator overloading. Operator overloading is a compile-time 
polymorphism. For example, we can overload an operator ‘+’ in a class like String so 
that we can concatenate two strings by just using +. Other example classes where 
arithmetic operators may be overloaded are Complex Numbers, Fractional Numbers, 
Big integers, etc.
*/
#include <iostream>

class Complexo
{
public:
    Complexo(double i=0, double r=0)
    {
        this->imaginario = i;
        this->real = r;
    }

    Complexo operator+(Complexo const& obj)
    {
        Complexo c;
        c.imaginario = imaginario +obj.imaginario;
        c.real = real + obj.real;
        return c;
    }
    void exibir(){ std::cout<<real << " + i "<< imaginario<< "\n"<<std::endl; }

private:
    double real;
    double imaginario;
};


int main()
{
    Complexo c1(10, 5), c2(2, 4);
    Complexo c3 = c1+ c2;
    c3.exibir();
    return 0;
}