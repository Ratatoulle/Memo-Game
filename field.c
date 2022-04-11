#include "raylib.h"

void drawField(int rectWidth, int rectHeight, int xPos, int yPos)
{
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
}

void drawField1(int rectWidth, int rectHeight, int xPos, int yPos, int N)
{
	if (N!=0)
	{
		int stepX = rectWidth;
		int stepY = rectHeight;
		for (int i = 0; i < N; i++)
		{
			DrawRectangleLines(xPos + stepX, yPos, rectWidth, rectHeight, BLACK);
			stepX += rectWidth;
		}
		int newY = yPos + stepY;
		stepX = rectWidth;
		drawField1(rectWidth, rectHeight, xPos, newY, N - 1);
	}
	else
		return;
}