#define FOPEN_UTF8_IMPLEMENTATION
#include "fopen_utf8.h"

int main()
{
	FILE *file;
	char path[] = "\321\202\320\265\321\201\321\202 \350\251\246\351\251\227 \326\203\325\270\326\200\325\261\325\241\326\200\325\257\325\270\326\202\325\264.txt";

	file = fopen_utf8(path, "wb");
	fprintf(file, "\316\224\316\277\317\205\316\273\316\265\317\215\316\265\316\271!\n");
	fclose(file);

	return 0;
}
