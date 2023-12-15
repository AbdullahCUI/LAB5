
#include "colorUtils.h"

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int min(int x, int y, int z){
  int m = x < y ? x : y;
  m = m < z ? m : z;
}


int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}
//lightness technique
int toGrayScaleLightness(int r, int g, int b){
  int max = 0, min = 0;
  if(r>g && r>b){
    max = r;
  }
