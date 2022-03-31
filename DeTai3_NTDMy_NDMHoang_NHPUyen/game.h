#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include "Dependencies/freeglut/include/GL/glut.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include <ctime>

void init();
void idle();
void display();
void reshape(int width, int height);
void keyPressed(unsigned char key, int x, int y);
void keySpecial(int key, int x, int y);
void renderPrimitive();
void createGLUTMenus();
void processMenuEvents(int option);
void replace();
void camera();
void drawText(int x, int y, char *string);
void initializeGrid();
void mouseControl(int button, int state, int x, int y);
void doTheSwap(int x, int y);
void select1(int x, int y);
void select2(int x, int y);
void cameraReset();
void check(int x, int y);
void destroy(int counterLeft, int counterRight, int counterBottom, int counterTop, int x, int y);
void findingMatch();
void getScore();
void noMatch();
void updateGrid();


float xpos = 0, ypos = 0, zpos = 0, xrot = 0, yrot = 0, angle = 0.0;
int globalMouseCounter = 0;
int cubeSize = 24;
int spaceSize = 9;
int cubeAndSpaceSize = cubeSize + spaceSize;
int xStart = 55, xEnd = 547;
int yStart = 547, yEnd = 55;
int moves = 30;
int score = 0;
int counterRight = 0, counterLeft = 0, counterBottom = 0, counterTop = 0;

struct Cubes
{
	int cubeX, cubeY;
	int color;
	int match = 0;
};

struct Cubes cube(int cubeX, int cubeY, int color, int id);
Cubes grid[15][15];
Cubes selectedFirst;
Cubes selectedSecond;
Cubes temp;
bool isSwap = false;