#include "Cvijet.h"

Cvijet::Cvijet(sf::RenderWindow * window)
{
	this->window = window;
}

void Cvijet::draw()
{
	sf::CircleShape cvjetic(20.f);
	cvjetic.setFillColor(sf::Color(230, 230, 0));
	cvjetic.setOutlineThickness(50.f);
	cvjetic.setOutlineColor(sf::Color(255, 255, 255));
	cvjetic.setPosition(250.f, 150.f);

	sf::RectangleShape stabljika(sf::Vector2f(12.f, 200.f));
	stabljika.setFillColor(sf::Color::Green);
	stabljika.setPosition(263.f, 240.f);

	sf::ConvexShape listic1;
	listic1.setPointCount(4);
	listic1.setFillColor(sf::Color::Green);
	listic1.setPoint(0, sf::Vector2f(220.f, 270.f));
	listic1.setPoint(1, sf::Vector2f(150.f, 250.f));
	listic1.setPoint(2, sf::Vector2f(190.f, 300.f));
	listic1.setPoint(3, sf::Vector2f(265.f, 330.f)); 

	sf::CircleShape vaza(170.f, 3);
	vaza.rotate(60);
	vaza.setFillColor(sf::Color::Red);
	vaza.setPosition(330.f, 290.f);
	



	window->draw(cvjetic);
	window->draw(stabljika);
	window->draw(listic1);
	window->draw(vaza);
	
}