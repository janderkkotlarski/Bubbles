#ifndef BUBBLE_H
#define BUBBLE_H

#include <SFML/Graphics.hpp>

class Bubble
{
    sf::Vector2f m_posit;
    float m_radius;
    sf::Color m_color;
    sf::CircleShape m_circle;

    Bubble(const sf::Vector2f& posit, const float radius, const sf::Color& color);

    sf::CircleShape set_circle();
};

#endif // BUBBLE_H
