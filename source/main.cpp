#include "Window.h"

using namespace std;
//tamaño de ventana
int screenWidth = 800;
int screenHeight = 600;

int main() {
    //creacion de ventana
    InitWindow(screenWidth, screenHeight, "Carta de Presentacion Zelmar Amaru Rodriguez Droz");

    Window window("Zelmar Amaru Rodriguez Droz", "Hola Mundo", "Estoy aprendiendo en MAVI");

    //bucle para detectar la tecla y escribir;
    while (!WindowShouldClose()) {
        window.Input();

        BeginDrawing();
        window.Load();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

