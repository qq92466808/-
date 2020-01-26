
#include <Windows.h>

#include <iostream>

using namespace std;

int main()
{
	HDC hdc = GetWindowDC(GetDesktopWindow());

	SetTextColor(hdc, RGB(255, 170, 0));
	SetBkMode(hdc, TRANSPARENT);
	int x, y;
	while (1)
	{
		POINT p;
		GetCursorPos(&p);
		x = p.x, y = p.y;
		TextOut(hdc, x, y, "123456789", 9);
		TextOut(hdc, x, y, "         ", 9);
		--x;
		Sleep(100);

	}
}