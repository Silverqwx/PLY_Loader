/**************************************
* Copyright (c) <2014> <Vishesh Gupta> *
**************************************

The MIT / X Window System License
=================================
Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef PLYLOADER_H
#define	PLYLOADER_H

#include <Eigen/Core>
#include <vector>

struct PLYModel {
    std::vector<Eigen::Vector3d> positions;
    std::vector<Eigen::Vector3d> normals;
    std::vector<Eigen::Vector3d> colors;
	std::vector<Eigen::Vector3i> faces;
	/*Eigen::Vector3d *positions;
	Eigen::Vector3d *normals;
	Eigen::Vector3d *colors;*/

    int vertexCount; //number of vertices
    float bvWidth, bvHeight, bvDepth; //bounding volume dimensions
    float bvAspectRatio; //bounding volume aspect ratio
	int faceCount; //number of faces; if reading meshes
	bool isMesh; // To tell if this is a mesh or not
	bool ifColor,ifNormal;

    Eigen::Vector3d min, max, center;

    PLYModel();
    PLYModel(const char *filename, bool isNormal = 1,bool isColor = 1); //To indicate if normal, color informations are present in the file respectively
	void PLYWrite(const char *filename, bool isNormal = 1,bool isColor = 1);// To indicate if normal, color informations are to be written in the file respectively
	void FreeMemory();
};

#endif	/* PLYLOADER_H */
