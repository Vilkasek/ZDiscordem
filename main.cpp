#include "raylib.h"

enum class GameStates
{
    MENU,
    GAME,
};

// Screen size
const int screenWidth = 1920, screenHeight = 1080;

// Init state
GameStates gameState = GameStates::MENU;

// Initialize components
void init_window();
void init();

// Update states

// Render states

// Deinitialize

int main()
{
    init();
}

void init_window()
{
    InitWindow(screenWidth, screenHeight, "Discordowe zabawy");

    SetTargetFPS(60);
}
void init()
{
    init_window();
}