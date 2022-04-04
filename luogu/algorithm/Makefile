#compliers
CC = gcc
C++ = g++

#flags
FLAGS = -g -std=c99 -DDEBUG -W -Wall
LINKFLAGS =
CCFLAGS = $(COMPILER_FLAGS) -c -g -fPIC
C++FLAGS = $(COMPILER_FLAGS) -c -g -fPIC

GCCFLAGS =

# -L指定库文件目录，-l指定静态库名字(去掉文件名中的lib前缀和.a后缀)
#LIBS = -L./
#LIBS +=

# add headers
HEADER = -I./
HEADER +=

# source file list
SRC = $(wildcard *.c *.cpp)

# object file list
OBJECT = $(patsubst %.cpp,%.o,$(patsubst %.c,%.o,$(SRC)))


TARGET = $(patsubst %.o,%,$(OBJECT))
all: $(TARGET)
$(TARGET) : $(OBJECT)
	@echo "link $@ with dependences $<"
	$(GCC) $(FLAGS) $(LINKFLAGS) -o $@ $< $(LIBS)


.c.o:
	@echo "compiling $< => $@"
	$(GCC) -c $(HEADER) $(FLAGS) -o $@ $<

.PHONY: all install clean

# install: $(TARGET)
# 	cp $(TARGET) $(BIN_PATH)

clean:
	@rm -rf $(OBJECT) $(TARGET)