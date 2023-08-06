// Jak chcesz mogę komentarze pisać po polsku, a potem ci podesłać link na GitHuba

#include "Player.hpp"

#define BG_MENU_COLOR (Color){100, 92, 80}
#define BG_GAME_COLOR (Color){150, 100, 200}

enum class GameStates
{
    MENU,
    GAME,
};

// Screen size
const int screenWidth = 1920, screenHeight = 1080;

// Init state
GameStates gameState = GameStates::MENU;

// Dodajemy naszego gracza, ale żeby zaistniał w programie, musimy zrobić jego obiekt
Player player;

// Initialize components
void init_window();
void init();

// Update states
void update_menu();
void update_game();
void update();

// Render states
void render_menu();
void render_game();
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
    player.init();

    init_window();
}

void update_menu()
{
    if(IsKeyPressed(KEY_ENTER))
    {
        gameState = GameStates::GAME;
    }
}
void update_game()
{
    player.update();
}
void update()
{
    switch(gameState)
    {
    case GameStates::MENU:
        update_menu();
        break;
    case GameStates::GAME:
        update_game();
        break;
    }
}

void render_menu()
{
    ClearBackground(BG_MENU_COLOR);
// Dziwne trochę, że nie działa z kolorem customowym
    DrawText("Grim Jumper", screenWidth / 2, screenHeight / 2, 60, WHITE);
    DrawText("Menu", screenWidth / 2, screenHeight / 2 + 60, 30, WHITE);
}
void render_game()
{
    player.render();
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
        render_game();
        break;
    }
    EndDrawing();
}

void deinit()
{
    player.deinit();

    CloseWindow();
}
