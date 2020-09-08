#include <stdio.h>
#include <nmmintrin.h>

int main(int argc, char** argv) {

float r[4] = {0};
float xx[4] = {1.2, 1.3, 1.4, 1.5};
float abc[4] = {4};
float sum;
float div;

        m128 x = _mm_load_ps(&xx[0]);
        m128 y = _mm_load_ps(&xx[24]);


        m128 z = _mm_hadd_ps (x, y);
        _mm_storeu_ps (r, z);


        m128 v = _mm_load_ps(&r[0]);
        __m128 q = _mm_load_ps(&r[24]);

        m128 w = _mm_hadd_ps (v, q);

        _mm_storeu_ps (&sum, w);

        printf("%f \n", sum);


        m128 u = _mm_load_ps(&r[0]);
        m128 t = _mm_load_ps(&r[2*4]);

        m128 g = _mm_div_ps (t, u);

        _mm_storeu_ps (&div, g);

        printf("%f \n", div);

return 0;
}