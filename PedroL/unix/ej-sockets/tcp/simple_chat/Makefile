files = server/main client/main
build:
	$(foreach v, $(files), \
	gcc -o bin/$(v).out src/$(v).c;)
clean:
	rm bin/*.out
