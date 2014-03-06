//http://www.reddit.com/r/dailyprogrammer/comments/1ml669/091713_challenge_138_easy_repulsionforce/
#include <stdio.h>
#include <math.h>

int main(void){
	float m1, x1, y1, m2, x2, y2;
	
	scanf(" %f %f %f", &m1, &x1, &y1);
	scanf(" %f %f %f", &m2, &x2, &y2);
	
	float distancia, deltax, deltay, force;
	deltax = x1 - x2;
	deltay = y1 - y2;
	distancia = sqrt(deltax*deltax + deltay*deltay);
	force = (m1*m2)/(distancia*distancia);
	
	printf("%.4f\n", force);
	
	return 0;
}
