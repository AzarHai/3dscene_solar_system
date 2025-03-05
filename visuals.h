#pragma once

struct point
{
	float x;
	float y;
	float z;
};

struct face
{
	int vtx[3];
};

extern int globalW, globalH;


void Render();


void Resize(int w, int h);


void Setup();


void Idle();
void SpecialKey(int key, int x, int y);
void Keyboard(unsigned char key, int x, int y);



void MouseWheel(int button, int dir, int x, int y);


void RandomCoordinates(point*);

void DrawStars();

