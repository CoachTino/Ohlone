#include <stdio.h>
#include <immintrin.h>

 

int main(int argc, char** argv) {

		float r[8] = {0};
		float xx[8] = {1.2, 1.3, 1.4, 1.5, 2.1, 6.1, 7.2, 3.5};
		float yy[8] = {1.2, 1.3, 1.4, 1.5, 2.1, 6.1, 7.2, 3.5};


		__m256 x = _mm256_loadu_ps(xx);
		__m256 y = _mm256_loadu_ps(yy);

		__m256 z = _mm256_mul_ps(x, y);
		
		_mm256_storeu_ps (r, z);	 

		for (int i =0;i<8;i++){
			printf("%f \n", r[i]);
		}	

		__m256 s = _mm256_hadd_ps(z,z);
		float d = ((float*)&s)[0] + ((float*)&s)[1] + ((float*)&s)[4] +((float*)&s)[5];

		printf(" %f\n", d);


return 0;
}