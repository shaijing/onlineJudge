CC=gcc
CPP=g++
# CFLAGS=-DxDEBUG
# CPPFLAGS=-DxDEBUG
# CSRCS:=$(wildcard *.c) #.c文件目录
# COBJS:=$(CSRCS:.c=.o)

# CPPSRCS:=$(wildcard *.cpp) #.cpp文件目录
# CPPOBJS:=$(CPPSRCS:.cpp=.o)
# TargetFiles = $(CSRCS:.c=) $(CPPSRCS:.cpp=)


# $(COBJS) : %.o: %.c
# 	$(CC) -c $< -o $@ $(INCS) $(CFLAGS)

# $(CPPOBJS) : %.o: %.cpp
# 	$(CPP) -c $< -o $@ $(INCS) $(CPPFLAGS)
SrcFiles=$(wildcard *.c)
SrcFiles+= $(wildcard *.cpp)
TargetFiles=$(patsubst %.c,%,$(SrcFiles))
TargetFiles:=$(patsubst %.cpp,%,$(TargetFiles))

all:$(TargetFiles)

%:%.c
	$(CC) -g -o $@ $< 
%:%.cpp
	$(CPP) -g -o $@ $< 

clean:
	-rm -f $(TargetFiles)

