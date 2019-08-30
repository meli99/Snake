#include <iostream>
#include "snake.cpp"
int main()

{
//    OcultaCursor();
    
    pintar();
    gotoxy(xc, yc); printf("%c", 4);
    
    while(tecla != ESC && game_over())
    {
        borrar_cuerpo();
        guardar_posicion();
        dibujar_cuerpo();
        comida();
        teclear();
        teclear();
        
        if(dir == 1) y--;
        if(dir == 2) y++;
        if(dir == 3) x++;
        if(dir == 4) x--;
        
        Sleep(velocidad);
    }
    pintar();

    return 0;
}
