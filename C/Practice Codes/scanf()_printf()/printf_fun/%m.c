#include <stdio.h>

void main() {
		char* filename = "rename.txt";
		FILE *fp = fopen("rename.txt","r");
		fprintf (stderr, "file present nahi `%s': %m\n", filename);
}
