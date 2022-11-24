CC = g++
SRCDIR = src
OBJDIR = obj
BINDIR = bin
INCDIR = inc
FILENAME = main
CPP = .cpp

WILD = $(wildcard src/*.cpp)
OBJECTFILE = $(patsubst src/%.cpp, obj/%.o,$(WILD))

all: clean makedir build

build: $(OBJECTFILE)
	@echo "Building and runing file..."
	@$(CC) obj/main.o  obj/animals.o  -o $(BINDIR)/$(FILENAME)
	@./$(BINDIR)/$(FILENAME)

$(OBJECTFILE):
	@echo "Creating object files..."
	@$(CC) -c $(SRCDIR)/$(FILENAME)$(CPP) -I $(INCDIR) -o $(OBJDIR)/main.o  
	@$(CC) -c $(SRCDIR)/animals$(CPP) -I $(INCDIR) -o $(OBJDIR)/animals.o

clean:
	@echo "Cleaning directories..."
	@rm -rf obj bin 

makedir:
	@echo "Creating directories..."
	@mkdir -p obj bin