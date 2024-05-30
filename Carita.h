#pragma once
using namespace System::Drawing;
using namespace System;

class Carita
{
private:
	int x, y, ancho, alto, dx, color, puntaje;
public:
	Carita();
	~Carita();
	void dibujar(Graphics^g);
	void mover();
	void setX(int x);
	void setY(int y);
	void setPuntaje();
	int getPuntaje();
	Rectangle obtenerArea();
	Brush^ asignarColor();
	void dibujarInicio();
};

