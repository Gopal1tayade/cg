#include <graphics.h>
#include <conio.h>

void drawSurface() {
    // Drawing the surface
    setcolor(LIGHTGRAY);
    rectangle(0, getmaxy() - 50, getmaxx(), getmaxy());
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(getmaxx() / 2, getmaxy() - 25, LIGHTGRAY);
}

void drawBall(int x, int y, int radius) {
    // Drawing the ball
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    circle(x, y, radius);
    floodfill(x, y, RED);
}

int main() {
    int gd = DETECT, gm, xBall, yBall, radius, speed, direction;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    radius = 20; // Ball radius
    xBall = radius + 5; // Initial x position
    yBall = getmaxy() - 75; // y position above surface
    speed = 5; // Movement speed
    direction = 1; // Direction: 1 for right, -1 for left

    while (!kbhit()) {
        cleardevice(); // Clear the screen

        drawSurface(); // Draw the surface
        drawBall(xBall, yBall, radius); // Draw the ball

        xBall += speed * direction; // Move the ball horizontally

        if (xBall >= getmaxx() - radius || xBall <= radius) {
            direction *= -1; // Change direction when reaching edges
        }

        delay(50); // Adjust the speed of the animation
    }

    closegraph();
    return 0;
}

