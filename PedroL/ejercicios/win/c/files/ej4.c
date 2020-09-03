#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COPIEDF_PREFIX copia_de_

int main(int argc, char const *argv[])
{
	FILE		*inputfile, *outputfile;
	size_t	read, written;
	char*		buf_ptr;
	
	char		filenamein[64], filenameout[64];
	int			filenamefail;
	
	//entrada de nombre de archivo
	do{
		printf("archivo a copiar: ");
		gets(filenamein);
		inputfile = fopen(filenamein, "rb");
		
		if(inputfile != NULL){
			sprintf(filenameout, "COPIEDF_PREFIX%s", filenamein);
			outputfile = fopen(filenameout, "wb");
			printf("archivo copia: %s\n", filenameout);
			
			filenamefail = 0;
		} else {
			perror("archivo incorrecto");
			filenamefail = 1;
		}
	}while(filenamefail);

	//copiado de archivo
	buf_ptr = malloc(sizeof(char));
	
	while(!feof(inputfile)){
		read = fread(buf_ptr, 1, 1, inputfile);
		
		if(!feof(inputfile)){
			printf("%c", *buf_ptr);
			written = fwrite(buf_ptr, 1, 1, outputfile);
		}
	}
	
	free(buf_ptr);
	fclose(inputfile);
	fclose(outputfile);
	
	return 0;
}