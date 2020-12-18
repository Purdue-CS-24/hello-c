CC       = gcc
CFLAGS   = -std=c99 -Werror -Wall -I. -g

OUTDIR   = bin

.PHONY: clean

%: %.c
	@mkdir -p $(OUTDIR)
	@$(CC) $(CFLAGS) -o $(OUTDIR)/$@ $<
	@echo "Successfully compiled $< to $(OUTDIR)/$@."

clean:
	rm -r $(OUTDIR)
	@echo "Cleaned up all binaries."
