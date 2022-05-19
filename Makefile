export ROOT_DIR=$(shell pwd)
export CC=gcc
export CXX=g++
export C_FLAGS=-g -std=c99 -DDEBUG -w -Wall
export CXX_FLAGS=-g -std=c++11 -DDEBUG -w -Wall

SUBDIRS = $(ROOT_DIR)/luogu/algorithm/
SUBDIRS += $(ROOT_DIR)/pat
define make_subdir
@for i in $(SUBDIRS); do\
(cd $$i && make $1) \
done;
endef

all:
	@echo "Building all"
	$(call make_subdir)

# 清空所有子目录
clean:
	$(call make_subdir, clean)



.PHONY: all clean