#ifndef SNAKEGAME_H
#define SNAKEGAME_H

#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

#define W 72
#define A 75
#define D 77
#define S 80
#define ESC 27

int cuerpo[200][2];
int n = 1, tam = 10, dir = 3;
int x = 10, y = 12;
int xc = 30, yc = 15;
int velocidad = 100;
char tecla;

void gotoxy(int,int);
void pintar();
void guardar_posicion();
void dibujar_cuerpo();
void borrar_cuerpo();
void teclear();
void comida();
bool game_over();

#endif
