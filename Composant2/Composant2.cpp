// Composant2.cpp : Defines the routines for the DLL.
//

#include "Composant2.h"
#include "Composant2Version.h"

int composant2(int p1, int p2)
{
	return p1*p2;
}

char * getComposant2Version()
{
	return "Composant 2 version " COMPOSANT_VERSION_STR;
}
