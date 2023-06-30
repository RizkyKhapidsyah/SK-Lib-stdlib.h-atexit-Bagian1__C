#include <stdio.h>      /* puts */
#include <stdlib.h>     /* atexit */
#include <conio.h>

void fnExit1(void) {
	puts("Exit fungsi 1.");
}

void fnExit2(void) {
	puts("Exit fungsi 2.");
}

int main() {
	atexit(fnExit1);
	atexit(fnExit2);
	puts("Fungsi utama.");

	_getch();
	return 0;
}