//http://www.reddit.com/r/dailyprogrammer/comments/1tixzk/122313_challenge_146_easy_polygon_perimeter/
#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793
	
int main(void){

	int n;
	float r, s;
	
	//entrada
	scanf(" %d %f", &n, &r);
	
	//cálculo de 1 lado
	s = 2*sin(PI/n)*r;
	
	//cálcula perimetro
	float perimetro = n*s;
	
	printf("%.3f\n", perimetro);
	
	return 0;
}

