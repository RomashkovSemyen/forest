#ifndef FOREST_H
#define FOREST_H
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Animal;
class Plant;

class Forest
{
public:
    ~Forest();
    static Forest* get_instance();
    static Forest* get_instance(int na, int np, int _X, int _Y);
    static void clear_instance();
    void listen() const;
    void draw();
    void live();
    bool check(int x, int y) const;
    bool checkAnimals(int x, int y) const;
    bool checkPlants(int x, int y) const;
    void move();
    int grow();
    int less();
    
private:
    Forest();
    static Forest* instance;
    int init();
    int init(int na, int np, int _X, int _Y);
    Animal** animals;
    int n_animals;
    Plant** plants;
    int n_plants;
    int X, Y;
    sf::RenderWindow *window;
    bool key_pressed;
};
#endif // FOREST_H