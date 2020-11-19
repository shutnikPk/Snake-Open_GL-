#include "Object.h"
Object::Object(int x, int y, int length, int width) : x(x),
y(y),
length(length),
width(width){}
void init(int x, int y, int length, int width) {
	Object(x, y, length, width);
}