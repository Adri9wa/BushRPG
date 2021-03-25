#include <iostream>
#include "Game.hpp"

void Game::GameLoop()
{
    while(!quit)
    {
        MainMenu();
        


    }
}


void Game::MainMenu()
{
    std::cout<<"------MENU------"<<std::endl;
    std::cout<<"0: Quit"<<std::endl;
    std::cout<<"0: Quit"<<std::endl;
    std::cout<<"0: Quit"<<std::endl;
    std::cout<<"0: Quit"<<std::endl;
    std::cout<<"--------"<<std::endl;
    std::cout<<"Choice: ";
    std::cin>> choice;

    switch (choice)
    {
    case 0:
        QuitGame();
        break;
    
    default:
        break;
    }

}

void Game::QuitGame()
{
    quit = true;
}
