#pragma once

typedef struct point {
	int x;
	int y;
} point;

/*add your definition of circle here. You need top call it "circle"*/
typedef struct circle { //Defining my circle struct
	int r; //radius r
	point p;  //point coordinate p
} circle;

#include "circle.c"
void fiveCircles(circle c[]);
int circleIsValid(const circle* c);
void translate(circle* c, const point* p);