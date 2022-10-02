#include <stdio.h>

#define L 0
#define U 300
#define S 20

void lines(int lc) {
	int c = 0;
	while(c <= lc) {
		printf("-");
		c++;
	} printf("\n");
}

main(int argc, char** argw) {
	int l = L, u = U, s = S;
	
	if(argc > 1) {
		l = (argc >= 2) ? atoi(argw[1]) : L;
		u = (argc >= 3) ? atoi(argw[2]) : U;
	}
	
	int f, c; f = l;
	lines(15);
	
	while(f <= u) {
		c = 5 * (f - 32) / 9;
		printf("%3d F %6.1d C\n", f, c);
		f += s;
	}
}