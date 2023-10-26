#ifndef FLOP_EVENT_MANAGER_HPP
#define FLOP_EVENT_MANAGER_HPP

#include <SFML/Graphics.hpp>
#include "event_manager_interface.hpp"
#include <map>
#include <functional>

class EventManager : public EventManagerInterface
{
public:
    EventManager(sf::RenderWindow *window);
    sf::Event getEvent();
    bool pollEvent(sf::Event &event);
    void handleEvents();
    void addEvent(sf::Event event, std::function<void()> callback);

private:
    sf::RenderWindow *window;
    std::map<sf::Event, std::function<void()>> events;
};

#endif