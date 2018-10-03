#include"acllib.h"	
int Setup()
{
 initWindow("球拍",0,0,800,800);
 beginPaint();
 //球拍拍头 
 setBrushStyle(BRUSH_STYLE_DIAGCROSS);
 setBrushColor(RGB(30,10,75));
 ellipse( 225, 75, 525, 425);
 //拍头轮廓
 setPenWidth(10);
 setPenColor(RED);
 arc( 225, 75,525,425, \
 375,75,375,425);
 setPenColor(BLACK);
 arc( 225, 75,525,425, \
 375,425,375,75);
 //球拍手柄
 setPenWidth(5);
 line(375,425,360,675);
 line(375,425,380,675);
 setBrushColor(RED);
 setBrushStyle(BRUSH_STYLE_BDIAGONAL);
 rectangle(360,675,380,750);
 //文字sport 
 setTextColor(RGB(207,54,207));          //字体颜色 
 setTextBkColor(YELLOW);     //背景颜色 
 setTextSize(70);      //字号 
 const char *p="sport";     //声明指针p并指向sport 
 paintText(100,0,p);      //文字绘图 
 endPaint();
 return 0;
 }
