/*
  ==============================================================================

    Game.cpp
    Created: 27 Nov 2017 3:34:57pm
    Author:  next2

  ==============================================================================
*/

#include "Game.h"
#include "Player.h"

Game::Game() {
	Player one();

}

Game::~Game() {

}

void Game::Action() {
	one.move();
}