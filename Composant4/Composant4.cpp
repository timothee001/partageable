#include "stdafx.h"
#include "Composant4Version.h"
#include "Composant4.h"



int composant1(int p1, int p2)
{
	return p1 + p2;
}


char * getComposant1Version()
{
	return "Composant 4 version " COMPOSANT_VERSION_STR;
}