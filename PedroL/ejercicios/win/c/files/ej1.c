#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	FILE*		txtfile;
	size_t	read;
	char*		mem_ptr;
	int			count;
	
	count = 0;
	
	txtfile = open("prueba.txt", "rt");
	if(txtfile != 0){
		mem_ptr = malloc(sizeof(char));
		
		if(mem_ptr != NULL){
			while(!feof(txtfile)){
				read = fread(mem_ptr, sizeof(char), 1, txtfile);
				
				if(read != 1 && !feof(txtfile))
					perror("");
				else if(!feof(txtfile)){
					if(count != 0)
						printf(" - ");
					
					printf("%c", *mem_ptr);
					count++;
				}
			}
			
			free(mem_ptr);
		}
		
		fclose(txtfile);
	} else {
		perror("");
	}
	
	return 0;
}