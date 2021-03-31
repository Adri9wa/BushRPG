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
    std::cout<<"0: View Stats"<<std::endl;
    std::cout<<"1: Quit"<<std::endl;
    std::cout<<"2: Quit"<<std::endl;
    std::cout<<"3: Quit"<<std::endl;
    std::cout<<"--------"<<std::endl;
    std::cout<<"Choice: ";
    std::cin>> choice;

    switch (choice)
    {
    case 0:
        break;

    case 1:
        QuitGame();
        break;
    
    default:
        break;
    }

}

void Game::ViewStats()
{

}

void Game::QuitGame()
{
    quit = true;
}
