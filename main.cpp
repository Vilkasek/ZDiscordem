#include "raylib.h"

#define BG_COLOR (Color){128, 92, 80}

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
void update_menu();
void update();

// Render states
void render_menu();
void render();

// Deinitialize
void deinit();

int main()
{
    init();

    while(!WindowShouldClose())
    {
        update();
        render();
    }

    deinit();
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

void update_menu()
{

}
void update()
{
    switch(gameState)
    {
    case GameStates::MENU:
        update_menu();
        break;
    case GameStates::GAME:
        break;
    }
}

void render_menu()
{
    ClearBackground(BG_COLOR);
}
void render()
{
    BeginDrawing();
    switch(gameState)
    {
    case GameStates::MENU:
        render_menu();
        break;
    case GameStates::GAME:
        break;
    }
    EndDrawing();
}

void deinit()
{
    CloseWindow();
}
