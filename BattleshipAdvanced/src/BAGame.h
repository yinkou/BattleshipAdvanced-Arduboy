#ifndef GAME_H
#define GAME_H
#include <Arduboy.h>
#include "BAInput.h"
#include "BAUI.h"
#include "ABGeometry.h"
#include "BAPlayer.h"

// helper to calcj deltatime
#define MILLIS_SINCE(MILLIS) (millis() - MILLIS)

// Tells the gamestate for the menu
typedef enum BAGameState{
  BAGameStateMenu = 0,
  BAGameStateCharacterSelection,
  BAGameStatePlaceShips,
  BAGameStatePrepareForGame,
  BAGameStatePlaying
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

private:
    // ======================
    // Methods

    void startNewGame();

    // Game methods
    BAGameCommand showMenu();
    BAGameCommand showCharSelection();
    BAGameCommand showPlaceShips();

    void showPrepareForGame();

    BAGameCommand showPlayerTurn();
    BAGameCommand showOpponentTurn();

    // Helper
    void drawMap(BAPlayer *player, bool showShips);
    void drawMapAtPosition(BAPlayer *player, uint8_t x, uint8_t y, bool showShips);

    // State machine
    void updateCurrentStateWithCommand(BAGameCommand gameCommand, BAGameState nextState, BAGameState previousState);

    // ======================
    // Data
    Arduboy arduboy;
    BAGameState currentState;
    BAInput *input;

    BAPlayer *activePlayer;
    BAPlayer *opponentPlayer;
    bool playerFirstRound;
};
#endif
