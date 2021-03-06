#pragma once
#include "Screen.h"
#include "Scoreboard.h"

class GameOver : public virtual Screen
{
private:
    bool selectedExit = false;
    std::vector<sf::Text> scoresLine;
    std::vector<sf::Text> line;
    sf::Event menuScreen{};
    sf::Sound button;
    sf::RenderWindow gameoverWindow;
    Scoreboard scoreboard;
    Score newScore;

public:
    GameOver() = default;
    GameOver(const Score& newScore);
    ~GameOver();
    void draw(sf::RenderWindow& window) override;
    void hoverSelected(int selection) override;
    void addScoresToScreen();
    void startGameOver();
    bool getSelectedExit() const
    {
        return selectedExit;
    }
};
