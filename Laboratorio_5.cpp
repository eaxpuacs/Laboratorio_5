// Laboratorio 5 (en clase).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

class Animal {
protected:
    string nombre;
    int edad;

public:
    Animal(string n, int e) :nombre(n), edad(e) {}
    virtual void hacerSonido() {
        cout << nombre << "hace un sonido peculiar" << endl;
    }
};

//Clase perro (Hereda de animal)
class Perro : public Animal {
public:
    Perro(string n, int e) :Animal(n, e) {}

    void hacerSonido()override {

        cout << nombre << "dice: perro!" << endl;
    }
};

//Clase automovil
class Automovil {
private:
    string marca;
    int velocidad;

public:
    Automovil(string m, int v) :marca(m), velocidad(v) {}

    void acelerar() {

        velocidad += 10;
        cout << "El automovil " << marca << " ahora va a " << velocidad << " km/h." << endl;
    }
};

//Clase Persona 

class Persona {

private:
    string nombre;
    int edad;

public:
    Persona(string n, int e) : nombre(n), edad(e) {}
    void saludar() {
        cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " anios" << endl;
    }
};



int main()
{
    Perro miPerro("Rex", 5);
    miPerro.hacerSonido();

    Automovil miCoche("Toyota", 60);
    miCoche.acelerar();

    Persona persona1("Fernando", 30);
    persona1.saludar();
    return 0;

}

