#include "getVolumeSurface.h"

void getArea(double width, double height, double depth, double *volume, double *surfaceArea)
{

    *volume = width * height * depth;
    *surfaceArea = 2 * (width * height + height * depth + depth * width);
}