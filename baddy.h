#ifndef BADDY_H
#define BADDY_H
#include "mylib.h"

class Baddy
{
private:
	int hp;
	int formCoords[3];
	int dimensions[3];
	GLuint VBO;
	unsigned int triCount;
	float phase;
	
	
public:
	Baddy(int HP, int *coord); 	
	void getDimensions(int *dims);
	void addFormCoords(int *retCoords);
	int getC(int i);
	int getHP();
	void hit();
};

#endif
