#include "event_manager.hpp"

EventManager::EventManager(sf::RenderWindow *window)
{
    this->window = window;
}

sf::Event EventManager::getEvent()
{
    sf::Event event;
    pollEvent(event);
    return event;
}

bool EventManager::pollEvent(sf::Event &event)
{
    return this->window->pollEvent(event);
}



void EventManager::handleEvents()
{
    sf::Event event;
    while (pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window->close();
        if (events.find(event) != events.end())
        {
            events[event]();
        }
    }
}

void EventManager::addEvent(sf::Event event, std::function<void()> callback)
{
    events[event] = callback;
}