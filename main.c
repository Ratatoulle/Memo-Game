#include "raylib.h"
#include "field.h"

int main(void)
{
	const int screenWidth = 900;
	const int screenHeight = 600;
	const int rectWidth = 50;
	const int rectHeight = 50;
	const int xPos = 0;
	const int yPos = 75;
	int fieldWidth = 7;
	int fieldHeight = 9;

	InitWindow(screenWidth, screenHeight, "Memo");

	SetTargetFPS(60);
	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(RAYWHITE);
		drawField1(rectWidth, rectHeight, xPos, yPos, fieldWidth, fieldHeight);
		//DrawCircle(rectWidth + rectWidth / 2, yPos + rectHeight / 2, rectWidth / 2, DARKBLUE);
		DrawText("Try to find two identical pictures!", 5, 0, 50, ORANGE);

		EndDrawing();
	}
	CloseWindow();
	return 0;
}