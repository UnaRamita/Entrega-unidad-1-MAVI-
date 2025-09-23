#include "Window.h"

Window::Window(string n1, string m1, string m2) {
	nombre = n1;
	ms1 = m1;
	ms2 = m2;
	space = false;
}
void Window::Input() {
	if (IsKeyPressed(KEY_SPACE)) {
		space = !space;
	}
}
void Window::Load() {
	//tamaño de la ventana
	int screenX = GetScreenWidth();
	int screenY = GetScreenHeight();
	//color del fondo
	ClearBackground(DARKBLUE);
	//texto
	int textSize = 40;//pruebo puede cambiar;
	int textWidth = MeasureText(nombre.c_str(), textSize);//RECORDAR el .c_str es por que sino tirar error de que mesure text(que es para que este centrado)espera constant char

	DrawText(nombre.c_str(), (screenX - textWidth) / 2, screenY / 3, textSize, WHITE);//pintea el texto

	//circulo
	DrawRectangle(screenX / 2 - 250, screenY / 2 + 50, 500, 80, YELLOW); //deberia buscar si hay alguna manera no manual de centrarlo en x

	//texto 2//misma logica que texto 1 pero con la adicion de mensaje actual para el mensaje que cambia
	const char* mensajeActual = ms2.c_str();
	if (space) {
		mensajeActual = ms2.c_str();
	}
	else if (!space) {
		mensajeActual = ms1.c_str();
	}
	int textSize2 = 30;
	int textWidth2 = MeasureText(mensajeActual, textSize2);

	DrawText(mensajeActual, (screenX - textWidth2) / 2, screenY / 2 + 80, textSize2, DARKBLUE);

}