// gcc search.c && a.exe
// tcc -run search.c
// clang search.c && a.exe


#include <stdio.h>
int main() {
	
	#if __INCLUDE_LEVEL__ == 1    // Do stuff
	printf("Hellow");
	#endif

   printf(__FILE__);
   printf("\n");
   printf("Hello, World!");
   return 0;
}