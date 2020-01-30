#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point {
	int coordinates[3];
};

struct placemark {
	char name[64];
	char description[256];
	struct point Point;
};

struct kml {
	struct placemark Placemark;
};

int main(int argc, char const *argv[]) {
	FILE *kmlfileptr;
	size_t read, written;
	
	int bufindx;
	char parsebuf[32];
	
	bufindx = 0;
	strcpy(parsebuf, "");
	
	kmlfileptr = fopen("test.kml", "r+t");
	
	while(!feof(kmlfileptr)) {
		read = fread(&parsebuf, sizeof(char), 1, kmlfileptr);
	}
	
	fclose(kmlfileptr);
	
	return 0;
}