// Composant3.cpp : définit les fonctions exportées pour l'application DLL.
//

#include "stdafx.h"
#include "Composant3Version.h"
#include "Composant3.h"



int composant3(int p1, int p2)
{
	return p1 + p2;
}


char * getComposant3Version()
{
	return "Composant 1 version " COMPOSANT_VERSION_STR;
}