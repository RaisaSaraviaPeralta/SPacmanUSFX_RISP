#pragma once
class Pacman
{
private:
	float posicionX;
	float posicionY;
	int color;
	float velocidadX;
	float velocidadY;
public:
	void move(float velocidadX, float velocidadY) {};

	float getPosicionX() { return posicionX; }
	void setPosicionX(float _posicionX) { posicionX = _posicionX; }

	float getPosicionY() { return posicionY; }
	void setPosicionY(float _posicionY) { posicionY = _posicionY; }

	float getVelocidadX() { return velocidadX; }
	void setVelocidadX(float _velocidadX) { velocidadX = _velocidadX; }

	float getVelocidadY() { return velocidadY; }
	void setVelocidadY(float _velocidadY) { velocidadY = _velocidadY; }

};
