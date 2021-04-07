#pragma once
class Fruta
{
private:
	int color;
	int posicionX;
	int posicionY;
public:
	int getColor() { return color; }
	void setColor(int _color) { color = _color; }

	int getPosicionX() { return posicionX; }
	void setPosicionX(int _posicionX) { posicionX = _posicionX; }

	int getPosicionY() { return posicionY; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }

	//metodo accesor de propiedades de tipo

	int getTipo() { return tipo; }
	void setTipo(int _tipo) { tipo = _tipo; }

private:

	int tipo;
};

