#pragma once
#include <SDL.h>
#include "Movimientos.h"
class Fantasma
{
private:
	DireccionMovimiento direccionActual;
	DireccionMovimiento direccionSiguiente;

	SDL_Point posicionActual;
public:
	DireccionMovimiento getDireccionActual() { return direccionActual; }
	DireccionMovimiento setDireccionActual(DireccionMovimiento _direccionActual) { direccionActual = _direccionActual; }

	DireccionMovimiento getDireccionSiguiente() { return direccionSiguiente; }
	DireccionMovimiento setDireccionSiguiente(DireccionMovimiento _direccionSiguiente) { direccionSiguiente = _direccionSiguiente; }
	
};

