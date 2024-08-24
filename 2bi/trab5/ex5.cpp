/*
1. Crie uma classe base abstrata chamada Forma que tenha um método virtual puro area().
2. Crie duas classes derivadas Retangulo e Circulo. Cada uma deve implementar o método area():
    • Retangulo: Calcula a área de um retângulo.
    • Circulo: Calcula a área de um círculo.
3. No método main, crie um array de ponteiros para a classe Forma e armazene objetos de Retangulo e
Circulo. Percorra o array e chame o método area() para cada objeto, exibindo o resultado.
*/

#include <iostream>
#include <cmath>  

class Forma {
public:
    virtual double area() const = 0;

    virtual ~Forma() {}
};

class Retangulo : public Forma {

public:
    Retangulo(double largura, double altura) : largura(largura), altura(altura) {}

    double area() const override {
        return largura * altura;
    }

private:
    double largura;
    double altura;
};

class Circulo : public Forma {

public:
    Circulo(double raio) : raio(raio) {}

    double area() const override {
        return M_PI * (raio * raio);
    }
private:
    double raio;

};

int main() {
    Retangulo r(5.0, 3.0);
    Circulo c(4.0);

    Forma* formas[2];
    formas[0] = &r;
    formas[1] = &c;

    for (int i = 0; i < 2; ++i) {
        std::cout << "Area: " << formas[i]->area() << std::endl;
    }

    return 0;
}
