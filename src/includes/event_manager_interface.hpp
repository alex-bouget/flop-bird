#ifndef FLOP_EVENT_MANAGER_INTERFACE_HPP
#define FLOP_EVENT_MANAGER_INTERFACE_HPP

#include <SFML/Graphics.hpp>
#include <functional>

class EventManagerInterface
{
public:
    virtual sf::Event getEvent() = 0;
    virtual bool pollEvent(sf::Event& event) = 0;
    virtual void handleEvents() = 0;
    virtual void addEvent(sf::Event event, std::function<void()> callback) = 0;
};


#endif