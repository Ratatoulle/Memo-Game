#include "raylib.h"
#include "field.h"

int main(void)
{
	const int screenWidth = 900;
	const int screenHeight = 1050;
	const int rectWidth = 150;
	const int rectHeight = 150;
	const int xPos = 0;
	const int yPos = 200;
	int sizeX = 3;
	int sizeY = 4;
	int dimension = sizeX * sizeY;

	InitWindow(screenWidth, screenHeight, "Memo");

	SetTargetFPS(60);
	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(RAYWHITE);
		drawField1(rectWidth, rectHeight, xPos, yPos, sizeX);
		//DrawCircle(rectWidth + rectWidth / 2, yPos + rectHeight / 2, rectWidth / 2, DARKBLUE);
		DrawText("Try to find two identical pictures!", 5, 100, 50, ORANGE);

		EndDrawing();
	}
	CloseWindow();
	return 0;
}