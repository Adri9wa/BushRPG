#pragma once
//_GAME_HPP_
#ifndef _GAME_HPP_
#define _GAME_HPP_


class Game final
{
public:

    Game(const Game&) = delete;
    Game(Game&&) = delete;

    //getting Game Core instance
    static Game& Shared()
    {
        static Game instance;
        return instance;
    }

    void GameLoop();
    void MainMenu();
    void QuitGame();
    void ViewStats();

private:
//vars
    Game()
        : quit(false)
    { }

private:
    bool quit;
    int choice;
};



#endif
//_GAME_HPP_