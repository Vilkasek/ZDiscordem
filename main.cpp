#include "raylib.h"

// Screen size
const int screenWidth = 1920, screenHeight = 1080;

// Initialize components
void init_window();
void init();

// Update

// Render

// Initialize

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