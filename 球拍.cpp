#include"acllib.h"	
int Setup()
{
 initWindow("����",0,0,800,800);
 beginPaint();
 //������ͷ 
 setBrushStyle(BRUSH_STYLE_DIAGCROSS);
 setBrushColor(RGB(30,10,75));
 ellipse( 225, 75, 525, 425);
 //��ͷ����
 setPenWidth(10);
 setPenColor(RED);
 arc( 225, 75,525,425, \
 375,75,375,425);
 setPenColor(BLACK);
 arc( 225, 75,525,425, \
 375,425,375,75);
 //�����ֱ�
 setPenWidth(5);
 line(375,425,360,675);
 line(375,425,380,675);
 setBrushColor(RED);
 setBrushStyle(BRUSH_STYLE_BDIAGONAL);
 rectangle(360,675,380,750);
 //����sport 
 setTextColor(RGB(207,54,207));          //������ɫ 
 setTextBkColor(YELLOW);     //������ɫ 
 setTextSize(70);      //�ֺ� 
 const char *p="sport";     //����ָ��p��ָ��sport 
 paintText(100,0,p);      //���ֻ�ͼ 
 endPaint();
 return 0;
 }
