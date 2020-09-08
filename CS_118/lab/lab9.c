#include <stdio.h>
#include <nmmintrin.h>

 

int main(int argc, char** argv) {


float r[8] = {0};
float xx[8] = {1.2, 1.3, 1.4, 1.5, 2.1, 6.1, 7.2, 3.5};
float yy[8] = {1.2, 1.3, 1.4, 1.5, 2.1, 6.1, 7.2, 3.5};

	for(int i = 0; i < 2; i++ ){
		__m128 x = _mm_load_ps(&xx[i*4]);
		__m128 y = _mm_load_ps(&yy[i*4]);


		__m128 z = _mm_mul_ps (x, y);
		_mm_storeu_ps (r, z);	 


		for (int i =0;i<4;i++){
			printf("%f \n", r[i]);
		}	
	}	


return 0;
}