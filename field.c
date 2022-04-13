#include "raylib.h"

void drawField(int rect_width, int rect_height, int x_pos, int y_pos, int field_width, int field_height)
{
	if (field_height != 0)
	{
		int stepX = rect_width;
		int stepY = rect_height;
		for (int i = 0; i < field_width; i++)
		{
			DrawRectangleLines(x_pos + stepX, y_pos, rect_width, rect_height, BLACK);
			DrawCircle(rect_width / 2 + stepX, y_pos + rect_height / 2, rect_width / 2, RED);
			stepX += rect_width;
		}
		int newY = y_pos + stepY;
		stepX = rect_width;
		drawField(rect_width, rect_height, x_pos, newY, field_width, field_height - 1);
	}
	else
		return;
}

void drawFigures(int rect_width, int rect_height, int x_pos, int y_pos, int field_width, int field_height, Vector2* figures)
{

}

