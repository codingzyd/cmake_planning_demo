#include "showresult.h"
#include <iostream>
#include <graphics.h>

void ShowResult::drawResult()
{
    initgraph(1000, 1000);
    setbkcolor(WHITE);
    cleardevice();
    std::cout << "draw circle: " << std::endl;
    setlinecolor(BLACK);
    setlinestyle(PS_SOLID, 4);
    circle(500, 500, 200);
    circle(500, 500, 400);
    system("pause");
    closegraph();
}
