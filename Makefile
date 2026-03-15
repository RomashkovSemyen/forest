.PHONY: all clean install unistall

CODES = Animal.cpp Carnivore.cpp Cat.cpp Cow.cpp Creature.cpp Fish.cpp Flower.cpp Forest.cpp Herbivore.cpp Lion.cpp Mushroom.cpp Penguin.cpp Plant.cpp Sparrow.cpp Sundew.cpp main.cpp

CXXFLAGS = -std=c++17
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

all: forest_dasr

clean:
	rm -f forest_dasr

install:
	install ./forest_dasr /usr/local/bin

unistall:
	rm /usr/local/bin/forest_dasr

forest_dasr: $(CODES)
	g++ $(CXXFLAGS) $(CODES) $(LDFLAGS) -o forest_dasr

