#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>
#include <SFML/Audio.hpp>

class UIElement {
public:
	bool in_focus;
	virtual void draw(sf::RenderWindow window) = 0;
	virtual void update() = 0;
	virtual void keyProcesing(sf::Event e) = 0;

};