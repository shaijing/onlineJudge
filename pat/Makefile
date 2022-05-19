C_SrcFiles=$(wildcard *.c)
C_ObjFiles=$(C_SrcFiles:.c=.co)
C_TargetFiles=$(patsubst %.c,%,$(C_SrcFiles))

CXX_SrcFiles= $(wildcard *.cpp)
CXX_ObjFiles=$(CXX_SrcFiles:.cpp=.cppo)
CXX_TargetFiles:=$(patsubst %.cpp,%,$(CXX_SrcFiles))

ObjectFiles=$(C_ObjFiles) $(CXX_ObjFiles)
TargetFiles = $(C_TargetFiles) $(CXX_TargetFiles)

all:$(TargetFiles)

%.co:%.c
	@echo "============Begin compiling============"
	$(CC) $(C_FLAGS) -c $(HEADER)  -o $@ $^
	@echo "compiling $^ => $@ "
	@echo "============Finish Compileing============"
	@echo ""

$(C_TargetFiles) : $(C_ObjFiles)
	@echo "============Begin linking============"
	$(CC) $(C_FLAGS) -o $@ $@.co
	@echo "linking $@ with dependences $@.co"
	@echo "============Finish linking============"
	@echo ""

%.cppo:%.cpp
	@echo "============Begin compiling============"
	$(CXX) $(CXX_FLAGS) -c $(HEADER)  -o $@ $^
	@echo "compiling $^ => $@ "
	@echo "============Finish Compileing============"
	@echo ""


$(CXX_TargetFiles):$(CXX_ObjFiles)
	@echo "============Begin linking============"
	$(CXX) $(CXX_FLAGS) -o $@ $@.cppo
	@echo "linking $@ with dependences $@.cppo"
	@echo "============Finish linking============"
	@echo ""

clean:
	-rm -f $(TargetFiles) $(ObjectFiles)

.PHONY:all clean install