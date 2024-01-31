#include <stdio.h>

int main() {
    float x = 800;
    float a, b, c, d;

   do{
        a = x / 4;
        b = ((x - a) / 4) + 100;
        c = ((x - a - b) / 4) + 200;
        d = x - a-b-c;
        if(a!=b && b!=c && c!=d){
        	x=x+4;	
		}
        
    }while(a!=b && b!=c && c!=d);

    printf("Property received by a is %.2f\n", a);
    printf("Property received by b is %.2f\n", b);
    printf("Property received by c is %.2f\n", c);
    printf("Property received by d is %.2f\n", d);
    printf("TOTAL PROPERTY IS %.2f", x);
    return 0;
}
