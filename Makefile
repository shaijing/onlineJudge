export ROOT_DIR=$(shell pwd)


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