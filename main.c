#include "raylib.h"

int main(void)
{
	// Initialization
	//--------------------------------------------------------------------------------------
	const int screenWidth = 900;
	const int screenHeight = 720;
	const int rectWidth = 150;
	const int rectHeight = 150;
	const int xPos = 20;
	const int yPos = 20;

	InitWindow(screenWidth, screenHeight, "SuperWindow");

	SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
	//--------------------------------------------------------------------------------------

	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		ClearBackground(BEIGE);
		int stepX = rectWidth;
		int stepY = rectHeight;
		for (int i = 0; i < 4; i++)
		{
			DrawRectangleLines(xPos + stepX, yPos, rectWidth, rectHeight, BLACK);
			stepX += rectWidth;
		}
		int newY = yPos + stepY;
		stepX = rectWidth;
		for (int j = 0; j < 4; j++)
		{
			DrawRectangleLines(xPos + stepX, newY, rectWidth, rectHeight, BLACK);
			stepX += rectWidth;
		}
		newY = newY + stepY;
		stepX = rectWidth;
		for (int j = 0; j < 4; j++)
		{
			DrawRectangleLines(xPos + stepX, newY, rectWidth, rectHeight, BLACK);
			stepX += rectWidth;
		}

		//DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------
	CloseWindow();        // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}