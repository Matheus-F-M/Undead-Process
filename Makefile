binary: undead.c
	gcc $< -o $@

.PHONY: run clean

run:
	./binary

clean:
	rm binary
