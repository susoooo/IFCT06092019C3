PROCESS_DIR = process
THREADS_DIR = threads

.PHONY: process
.PHONY: threads

process:
	$(MAKE) -C $(PROCESS_DIR) all

threads:
	$(MAKE) -C $(THREADS_DIR) all

all: process threads

clean:
	$(MAKE) -C $(PROCESS_DIR) clean
	$(MAKE) -C $(THREADS_DIR) clean
