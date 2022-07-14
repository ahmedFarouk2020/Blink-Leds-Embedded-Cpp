PROJ=main
SRC=$(wildcard ./*.cpp)

SRC+=$(wildcard ./src/*.cpp)
INC=./inc/


compile: $(SRC)
	@echo SRCS: $(SRC)
	@avr-g++ -pipe -IINC -mmcu=atmega32 -O2 $(SRC) -o $(PROJ).o

	@# formatter (.o -> .hex or .bin)
	@avr-objcopy -j .text -j .data -O ihex $(PROJ).o $(PROJ).hex
	@rm $(PROJ).o
	@echo "Compiled Successfully"


clean: 
	@rm $(wildcard ./*.hex)
	@echo "Files Removed" 