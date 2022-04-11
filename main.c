#include "raylib.h"
#include "field.h"

int main(void)
{
	const int screen_width = 900;
	const int screen_height = 600;
	const int rect_width = 50;
	const int rect_height = 50;
	const int x_pos = 0;
	const int y_pos = 75;
	int field_width = 7;
	int field_height = 9;

	InitWindow(screen_width, screen_height, "Memo");

	SetTargetFPS(60);
	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(RAYWHITE);
		drawField(rect_width, rect_height, x_pos, y_pos, field_width, field_height);
		//DrawCircle(rectWidth + rectWidth / 2, yPos + rectHeight / 2, rectWidth / 2, DARKBLUE);
		DrawText("Try to find two identical pictures!", 5, 0, 50, ORANGE);

		EndDrawing();
	}
	CloseWindow();
	return 0;
}