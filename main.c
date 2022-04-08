#include "raylib.h"
#include "field.h"
int main(void)
{
	// Initialization
	//--------------------------------------------------------------------------------------
	const int screenWidth = 900;
	const int screenHeight = 720;
	const int rectWidth = 150;
	const int rectHeight = 150;
	const int xPos = 0;
	const int yPos = 200;

	InitWindow(screenWidth, screenHeight, "Memo");

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

		ClearBackground(RAYWHITE);
		drawField(rectWidth, rectHeight, xPos, yPos);

		DrawText("Try to find two exact pictures!", 5, 100, 55, ORANGE);

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------
	CloseWindow();        // Close window and OpenGL context
	//--------------------------------------------------------------------------------------

	return 0;
}