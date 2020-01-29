#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
	FILE *kmlfileptr;
	size_t read, written;
	
	short int possibletags[2] = { 1, 1 };
	
	char parsebuf;
	char tags[2][10] = {
		"<?xml",
		"<?xms",
	};
	
	kmlfileptr = fopen("test.kml", "r+t");
	
	read = fread(&parsebuf, sizeof(char), 1, kmlfileptr);
	
	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 2; j++) 
			if(possibletags[j]) 
				if(parsebuf != tags[i][j]) 
					possibletags[j] = 0;
	
	for (int i = 0; i < 2; i++)
		printf("%d", possibletags[i]);
	
	fclose(kmlfileptr);
	
	return 0;
}