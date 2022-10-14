#include <iostream>

#include "plyloader.h"

int main()
{
	std::string filePath= "";
	const bool hasNormal = false;
	const bool hasColor = true;

	PLYModel plyMesh(filePath.c_str(), hasNormal, hasColor);

	return 0;
}