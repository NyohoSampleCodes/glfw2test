TARGETS=fw2
CPPFLAGS += -O2 -Wall
LDFLAGS += -lm -lglfw -lglew -framework OpenGL -std=c++11
all: $(TARGETS)

.PHONY: clean
clean:
	$(RM) *~ *.o $(TARGETS)
