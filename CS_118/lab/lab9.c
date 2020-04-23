#include <stdio.h>
#include <nmmintrin.h>

 

int main(int argc, char** argv) {


float r[8] = {0};
float xx[8] = {1.2, 1.3, 1.4, 1.5, 2.1, 6.1, 7.2, 3.5};
float yy[8] = {1.2, 1.3, 1.4, 1.5, 2.1, 6.1, 7.2, 3.5};


__m128 x = _mm_load_ps(xx);
__m128 y = _mm_load_ps(yy);


__m128 z = _mm_mul_ps (x, y);
_mm_storeu_ps (r, z);

 
x = _mm_load_ps(&xx[4]);
y = _mm_load_ps(&yy[4]);

z = _mm_mul_ps (x, y);
_mm_storeu_ps (&r[4], z);


for (int i =0;i<8;i++)
printf("%f \n", r[i]);
return 0;
}