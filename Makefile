# Set compiler
CXX = g++

# Set the directory names
SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin

# Make sure to change the executable name to the current project!
EXE := $(BIN_DIR)/P0
SRC := $(wildcard $(SRC_DIR)/*.cpp)
OBJ := $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Set compiler and linker flags
CPPFLAGS := -Iinclude -MMD -MP
CFLAGS := -Wall
LDFLAGS := -Llib
LDLIBS := -lm

.PHONY: all clean

all: $(EXE)

$(EXE): $(OBJ) | $(BIN_DIR)
	$(CXX) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(BIN_DIR) $(OBJ_DIR):
	mkdir -p $@

clean:
	@$(RM) -rv $(OBJ_DIR) $(BIN_DIR) *.inorder *.postorder *.preorder output.sp2020

-include $(OBJ:.o=.d)
