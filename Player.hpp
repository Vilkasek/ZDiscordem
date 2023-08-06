#include "raylib.h"

// Potrzebujemy znormalizować vectory tak jak w unity, aby idąc na skos nie iść prędzej
// niż idąc na bok, do góry czy na dół, ale funkcja która nam to zrobi znajduje się
// w innym module, a mianowicie w module matematycznym rayliba

#include "raymath.h"

// Ogólnie C++ ma dwie opcje tworzenia klas i obiektów, pierwsza, to tak jak ja zrobiłem, 
// tutaj domyślnie wszystkie pola są publiczne, można też użyć class i wtedy domyślnie
// wszystko jest prywatne

// Przyda się nam dodać enumerator do kierunku w którym porusza się nasza postać
// Niby zadziała i jak nie jest pisane z capslockiem, ale tak się przyjęło

enum class Directions
{
    RIGHT,
    LEFT,
    UP,
    DOWN,
};

struct Player
{
float speed = 100;

// Nie inicjalizuje od razu zmiennych, na razie je tylko tworzę, a zainicjalizuję je
// dopiero przy inicjalizacji gracza

Vector2 position = { 0 };
Vector2 velocity = { 0 };

Texture2D tex = { 0 };

void init()
{
    // Teraz inicjalizujemy nasze zmienne, można też to zrobić inaczej, ale ja wolę tutaj
    position = {100, 100};
    velocity = {0, 0};

    tex = LoadTexture("./Textures/Player/Player-Right.png");
}

// Tą funkcję pewnie z unity, tutaj będzie miała tą samą funkcję, czyli aktualizuje
// nam obiekt przed jego wyświetleniem, ale tutaj musimy jeszcze pamiętać o ręcznym
// usunięciu tesktur z pamięci karty graficznej

void update()
{
    // Do zrobienia
}

void render()
{
    DrawTexture(tex, position.x, position.y, WHITE);
}

// O tutaj będziemy usuwać

void deinit()
{
    UnloadTexture(tex);
}
};