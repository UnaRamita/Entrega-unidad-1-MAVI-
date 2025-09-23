#include <iostream>
#include "raylib.h"

using namespace std;

class Window {
private:
	string nombre;
	string ms1;
	string ms2;
	bool space;

public:
	Window(string n1, string m1, string m2);
	void Input(); //detecta la tecla para cambiar el mensaje
	void Load();//carga el mensaje en pantalla
};