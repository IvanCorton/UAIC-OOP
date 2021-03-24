#file Makefile
INC = ./include
OBJ = ./obj
SRC = ./src
BIN = ./bin

all : $(BIN)/main

$(BIN)/main: $(OBJ)/main.o $(OBJ)/Ford.o $(OBJ)/Mazda.o $(OBJ)/Toyota.o $(OBJ)/Mercedes.o $(OBJ)/Dacia.o $(INC)/Car.h $(INC)/Weather.h $(OBJ)/Circuit.o
	g++ -o $(BIN)/main $(OBJ)/*.o $(INC)/Car.h $(INC)/Weather.h


$(OBJ)/main.o : $(OBJ)/Ford.o $(OBJ)/Mazda.o $(OBJ)/Toyota.o $(OBJ)/Mercedes.o $(OBJ)/Dacia.o $(INC)/Car.h $(INC)/Weather.h $(OBJ)/Circuit.o $(SRC)/main.cpp
	g++ -c -g -I$(INC) $(SRC)/main.cpp -o $(OBJ)/main.o

$(OBJ)/Circuit.o: $(INC)/Car.h $(INC)/Weather.h $(INC)/Circuit.h $(SRC)/Circuit.cpp
	g++ -c -g -I$(INC) $(SRC)/Circuit.cpp -o $(OBJ)/Circuit.o

$(OBJ)/Ford.o: $(INC)/Car.h $(INC)/Ford.h $(SRC)/Ford.cpp
	g++ -c -g -I$(INC) $(SRC)/Ford.cpp -o $(OBJ)/Ford.o

$(OBJ)/Mazda.o: $(INC)/Car.h $(INC)/Mazda.h $(SRC)/Mazda.cpp
	g++ -c -g -I$(INC) $(SRC)/Mazda.cpp -o $(OBJ)/Mazda.o

$(OBJ)/Toyota.o: $(INC)/Car.h $(INC)/Toyota.h $(SRC)/Toyota.cpp
	g++ -c -g -I$(INC) $(SRC)/Toyota.cpp -o $(OBJ)/Toyota.o

$(OBJ)/Mercedes.o: $(INC)/Car.h $(INC)/Mercedes.h $(SRC)/Mercedes.cpp
	g++ -c -g -I$(INC) $(SRC)/Mercedes.cpp -o $(OBJ)/Mercedes.o

$(OBJ)/Dacia.o: $(INC)/Dacia.h $(SRC)/Dacia.cpp $(INC)/Car.h 
	g++ -c -g -I$(INC) $(SRC)/Dacia.cpp -o $(OBJ)/Dacia.o

#$(OBJ)/Weather.o : $(INC)/Weather.h
#	g++ -c -g $(INC)/Weather.h -o $(OBJ)/Weather.o
#
#$(OBJ)/Car.o : $(INC)/Car.h
#	g++ -c -g $(INC)/Car.h -o $(OBJ)/Car.o
	

#-------------------------------------------------------------------------------------------------
# CLEANING

mrproper:
	@echo Removing objects and executables...
	-rm $(OBJ)/*.o
	-rm $(BIN)/*
	
	@echo Everything is clean.






