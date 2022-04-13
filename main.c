#include <stdlib.h>
#include "raylib.h"
#include "field.h"

int main(void)
{
	const int screen_width = 900;
	const int screen_height = 600;
	const int rect_width = 100;
	const int rect_height = 100;
	const int x_pos = 0;
	const int y_pos = 75;
	int field_width = 6;
	int field_height = 4;
	int dimension = field_width * field_height;
	Vector2 mouse_point = { 0.0f, 0.0f };
	Vector2* FiguresCoords = (Vector2*)calloc(dimension, sizeof(Vector2));
	FiguresCoords[0].x = rect_width + rect_width / 2; 
	FiguresCoords[0].y = y_pos + rect_height / 2;


	InitWindow(screen_width, screen_height, "Memo");

	SetTargetFPS(60);
	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(RAYWHITE);
		drawField(rect_width, rect_height, x_pos, y_pos, field_width, field_height);
		//DrawCircle(rect_width + rect_width / 2, y_pos + rect_height / 2, rect_width / 2, DARKBLUE);
		//DrawCircle(FiguresCoords[0].x, FiguresCoords[0].y, rect_width / 2, DARKBLUE);
		DrawText("Try to find two identical pictures!", 5, 0, 50, ORANGE);

		EndDrawing();
	}
	CloseWindow();
	return 0;
}