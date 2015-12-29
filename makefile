GCC = gcc `pkg-config --cflags --libs gtk+-2.0`

%: %.c
	$(GCC) $< -o $@
