#pragma once
//_GAME_HPP
#ifndef _GAME_HPP
#define _GAME_HPP


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
    void QuitGame();

private:
//vars
    Game()
        : quit(false)
    { }

    bool quit;

};



#endif
//_GAME_HPP