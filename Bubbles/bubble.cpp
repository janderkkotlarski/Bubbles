#include "bubble.h"

Bubble::Bubble(const sf::Vector2f& posit, const float radius, const sf::Color& color)
    : m_posit(posit), m_radius(radius), m_color(color), m_circle()
{
}

sf::CircleShape set_circle()
{
    sf::CircleShape circle;

    circle.setRadius(m_radius);
    circle.setPosition(m_posit);
    circle.setFillColor(m_color);

    return circle;
}

