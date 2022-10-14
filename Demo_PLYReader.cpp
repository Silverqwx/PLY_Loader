#include <iostream>

#include "plyloader.h"

int main()
{
	std::string filePath= "C://Users//owner//Downloads//lnmwm25_12_100_asm.ply";
	const bool hasNormal = true;
	const bool hasColor = true;

	PLYModel plyMesh(filePath.c_str(), hasNormal, hasColor);

	return 0;
}