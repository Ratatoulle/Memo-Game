#include "raylib.h"

void drawField1(int rectWidth, int rectHeight, int xPos, int yPos, int fieldWidth, int fieldHeight)
{
	if (fieldHeight != 0)
	{
		int stepX = rectWidth;
		int stepY = rectHeight;
		for (int i = 0; i < fieldWidth; i++)
		{
			DrawRectangleLines(xPos + stepX, yPos, rectWidth, rectHeight, BLACK);
			stepX += rectWidth;
		}
		int newY = yPos + stepY;
		stepX = rectWidth;
		drawField1(rectWidth, rectHeight, xPos, newY, fieldWidth, fieldHeight - 1);
	}
	else
		return;
}