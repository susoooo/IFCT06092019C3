files = server client
build:
	$(foreach v, $(files), \
	gcc -o bin/$(v).out src/$(v).c -Wall;)
clean:
	rm bin/*.out
