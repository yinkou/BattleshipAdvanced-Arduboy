#ifndef GAME_H
#define GAME_H
#include <Arduboy2.h>
#include "BAInput.h"
#include "BAUI.h"
#include "ABGeometry.h"
#include "BAPlayer.h"

// helper to calc deltatime
#define MILLIS_SINCE(MILLIS) (millis() - MILLIS)

// Tells the gamestate for the menu
typedef enum BAGameState{
  BAGameStateMenu = 0,
  BAGameStateCharacterSelection,
  BAGameStateVersus,
  BAGameStatePlaceShips,
  BAGameStatePrepareForGame,
  BAGameStatePlaying,
  BAGameStateEnding
}BAGameState;

// Command returned from each gamestep
typedef enum BAGameCommand{
  BAGameCommandError = -1,
  BAGameCommandNone = 0,
  BAGameCommandNext,
  BAGameCommandBack
}BAGameCommand;


class BAGame{
  public:
    BAGame();

    // ======================
    // Methods

    /// starts the game and calls all methods in neccesary order
    void run();

    // Methods for debuging runtime memory
    /// Prints the free memory in Bytes to the top left corner of the screen
    /// Place between a Arduboy::clear() and a Arduboy::display() block.
    void printFreeMemory();
    /// See printFreeMemory() but has its own Arduboy::clear() and Arduboy::display()
    void printFreeMemoryIndependent();

private:
    // ======================
    // Methods

    void startNewGame();

    // Game methods
    BAGameCommand showMenu();           // Implemented in BAGameMenu.cpp
    BAGameCommand showCharSelection();  // Implemented in BAGameCharacterSelect.cpp
    BAGameCommand showVersusScreen();   // Implemented in BAGameVersusScreen.cpp

    // Implemented in BAGamePlaceShips.cpp
    BAGameCommand showPlaceShips();
    void showPlaceShipsInfo();
    BAGameCommand showPlaceShipsMap();

    // Implemented in BAGameShowStartingPlayer.cpp
    void showPrepareForGame();

    // Implemented in BACoreGame.cpp
    BAGameCommand playGame();
    void animateFromPlayerToPlayer(BAPlayer*, BAPlayer*, bool);
    void runPlayerTurn();
    void runAITurn();

    // Helper

    /// Draws the Map of a player
    // implemented in BAGameMap.cpp
    void drawMap(BAPlayer *player, bool showShips);
    void drawMapAtPosition(BAPlayer *player, uint8_t x, uint8_t y, bool showShips);

    // State machine
    void updateCurrentStateWithCommand(BAGameCommand gameCommand, BAGameState nextState, BAGameState previousState);

    // ======================
    // Data
    Arduboy2 arduboy;
    BAGameState currentState;
    BAInput *input;

    BAPlayer *activePlayer;
    BAPlayer *opponentPlayer;
    bool playerFirstRound;
};
#endif
