///////////////////////////////////////////// cg project
//First page
#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>

GLfloat pi=3.14,t=0.0;
int window,mov=1;
GLfloat i,sig=0,red=0,yellow=1,green=2,pos=-500.0,manpos=500.0;

void circle(GLfloat x,GLfloat y,GLfloat r,GLfloat rd,GLfloat gr,GLfloat bl)
{
    glColor3f(rd,gr,bl);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0.0;i>=-360;i--)
    {
        t=i*pi/180;
        glVertex2f((r*cos(t)+x),(r*sin(t)+y));
    }
    glEnd();
}

void background(GLfloat r , GLfloat g , GLfloat b)
{
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,0.0);
    glVertex2f(2000.0,0.0);
    glVertex2f(2000.0,1000.0);
    glVertex2f(0.0,1000.0);
    glEnd();
}

void RenderString(float x, float y, void *font, const char* string)
{
  char *c;

  glRasterPos2f(x, y);

  glutBitmapString(font, string);
}


void scr1(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    background(1.0,1.0,1.0);
    glColor3f(1,0,0);
    RenderString(240,800,GLUT_BITMAP_TIMES_ROMAN_24,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
    RenderString(240,785,GLUT_BITMAP_TIMES_ROMAN_24,"-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-");
    glColor3f(0,0,1);
    RenderString(240,700,GLUT_BITMAP_TIMES_ROMAN_24,"TRAFFIC RULES TEACHING TOOL");
    RenderString(240,685,GLUT_BITMAP_TIMES_ROMAN_24,"---------------------------");
    glColor3f(0.8,0,0);
    RenderString(240,540,GLUT_BITMAP_TIMES_ROMAN_24,"BY:");
    glColor3f(0.2,0.2,0.2);
    RenderString(240,500,GLUT_BITMAP_TIMES_ROMAN_24,"Abhinav Bagrecha:  1PE14CS029");
    RenderString(240,520,GLUT_BITMAP_TIMES_ROMAN_24,"Anmol Sharma:   1PE14CS026");
    glColor3f(0.8,0,0);
    RenderString(240,400,GLUT_BITMAP_TIMES_ROMAN_24,"Project guide:-");
    glColor3f(0.2,0.2,0.2);
    RenderString(240,370,GLUT_BITMAP_TIMES_ROMAN_24,"K S V K Shrikant");
    RenderString(240,340,GLUT_BITMAP_TIMES_ROMAN_24,"Bidisha Goswami");
    glColor3f(1,0,0);
    RenderString(240,100,GLUT_BITMAP_TIMES_ROMAN_24,"PRESS    ------>");
    glFlush();
}

void road()
{
    glColor3f(0.2,0.2,0.2);
    glBegin(GL_POLYGON);
    glVertex2i(0,0);
    glVertex2i(2000,0);
    glVertex2i(2000,300);
    glVertex2i(0,300);
    glEnd();
}

void houses()
{
    //house1  ////////////////////////
    glColor3f(0.0,0.0,0.3);
    glBegin(GL_POLYGON);
    glVertex2i(0,600);
    glVertex2i(500,600);
    glVertex2i(250,700);
    glEnd();

    glColor3f(1.0,1.0,0.6);
    glBegin(GL_POLYGON);
    glVertex2i(20,340);
    glVertex2i(480,340);
    glVertex2i(480,600);
    glVertex2i(20,600);
    glEnd();

    glColor3f(0.0,0.0,0.1);
    glBegin(GL_POLYGON);
    glVertex2i(0,300);
    glVertex2i(500,300);
    glVertex2i(500,340);
    glVertex2i(0,340);
    glEnd();

    glColor3f(0.3,0.3,0.5);
    glBegin(GL_POLYGON);
    glVertex2i(40,340);
    glVertex2i(80,340);
    glVertex2i(80,580);
    glVertex2i(40,580);
    glEnd();

    glColor3f(0.3,0.3,0.5);
    glBegin(GL_POLYGON);
    glVertex2i(420,340);
    glVertex2i(460,340);
    glVertex2i(460,580);
    glVertex2i(420,580);
    glEnd();

    glColor3f(0.3,0.3,0.6);
    glBegin(GL_POLYGON);
    glVertex2i(30,580);
    glVertex2i(90,580);
    glVertex2i(90,600);
    glVertex2i(30,600);
    glEnd();

    glColor3f(0.3,0.3,0.6);
    glBegin(GL_POLYGON);
    glVertex2i(410,580);
    glVertex2i(470,580);
    glVertex2i(470,600);
    glVertex2i(410,600);
    glEnd();

    circle(250,450,60,0.0,0.0,0.0);

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(190,340);
    glVertex2i(310,340);
    glVertex2i(310,450);
    glVertex2i(190,450);
    glEnd();

    circle(250,450,50,0.5,0.5,0.7);

    glColor3f(0.5,0.5,0.7);
    glBegin(GL_POLYGON);
    glVertex2i(200,340);
    glVertex2i(300,340);
    glVertex2i(300,450);
    glVertex2i(200,450);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glVertex2i(250,500);
    glVertex2i(250,340);
    glEnd();

    //house2         ////////////////////////////////////////////////////////////////
    /*glColor3f(0.9,0.9,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(1100,300);
    glVertex2i(1800,300);
    glVertex2i(1800,800);
    glVertex2i(1100,800);
    glEnd();*/

    glColor3f(0.9,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(1480,650);
    glVertex2i(1800,650);
    glVertex2i(1700,750);
    glVertex2i(1400,750);
    glEnd();

    glColor3f(0.5,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(1100,700);
    glVertex2i(1200,700);
    glVertex2i(1300,750);
    glVertex2i(1300,800);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1300,750);
    glVertex2i(1400,700);
    glVertex2i(1500,700);
    glVertex2i(1300,800);
    glEnd();

    glColor3f(0.9,0.9,0.5);
    glBegin(GL_POLYGON);
    glVertex2i(1120,350);
    glVertex2i(1480,350);
    glVertex2i(1480,700);
    glVertex2i(1120,700);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1200,700);
    glVertex2i(1400,700);
    glVertex2i(1300,750);
    glEnd();

    glColor3f(0.9,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(1140,690);
    glVertex2i(1180,690);
    glVertex2i(1180,700);
    glVertex2i(1140,700);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1420,690);
    glVertex2i(1460,690);
    glVertex2i(1460,700);
    glVertex2i(1420,700);
    glEnd();

    glColor3f(0.9,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(1150,350);
    glVertex2i(1170,350);
    glVertex2i(1170,690);
    glVertex2i(1150,690);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1430,350);
    glVertex2i(1450,350);
    glVertex2i(1450,690);
    glVertex2i(1430,690);
    glEnd();

    glColor3f(0.8,0.8,0.4);
    glBegin(GL_POLYGON);
    glVertex2i(1480,350);
    glVertex2i(1750,350);
    glVertex2i(1750,650);
    glVertex2i(1480,650);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(1240,350);
    glVertex2i(1360,350);
    glVertex2i(1360,500);
    glVertex2i(1240,500);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(1220,500);
    glVertex2i(1380,500);
    glVertex2i(1300,580);
    glEnd();

    circle(1300,650,30,0.6,0.0,0.0);
    circle(1300,500,50,0.9,0.0,0.0);
    glColor3f(0.9,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(1250,350);
    glVertex2i(1350,350);
    glVertex2i(1350,500);
    glVertex2i(1250,500);
    glEnd();

    glColor3f(0.45,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(1100,300);
    glVertex2i(1800,300);
    glVertex2i(1800,350);
    glVertex2i(1100,350);
    glEnd();

    glColor3f(0.8,0.8,1.0);
    glBegin(GL_QUADS);
    glVertex2i(1550,450);
    glVertex2i(1595,450);
    glVertex2i(1595,495);
    glVertex2i(1550,495);
    ////
    glVertex2i(1605,450);
    glVertex2i(1650,450);
    glVertex2i(1650,495);
    glVertex2i(1605,495);
    ////
    glVertex2i(1605,505);
    glVertex2i(1650,505);
    glVertex2i(1650,550);
    glVertex2i(1605,550);
    ////
    glVertex2i(1550,505);
    glVertex2i(1595,505);
    glVertex2i(1595,550);
    glVertex2i(1550,550);
    glEnd();

}

void shop()
{
     glColor3f(0.9,0.9,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(550,300);
    glVertex2i(1050,300);
    glVertex2i(1050,600);
    glVertex2i(550,600);
    glEnd();

    glColor3f(1.0,0.0,0.9);
    glBegin(GL_POLYGON);
    glVertex2i(500,600);
    glVertex2i(1100,600);
    glVertex2i(1050,700);
    glVertex2i(550,700);
    glEnd();

    glColor3f(0.7,0.7,0.7);
    glBegin(GL_POLYGON);
    glVertex2i(600,400);
    glVertex2i(1000,400);
    glVertex2i(1000,550);
    glVertex2i(600,550);
    glEnd();

    glLineWidth(8.0);
    glColor3f(0.4,0.4,0.4);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.7,0.7,0.7);
    glBegin(GL_POLYGON);
    glVertex2i(600,400);
    glVertex2i(1000,400);
    glVertex2i(1000,550);
    glVertex2i(600,550);
    glEnd();(600,400);
    glVertex2i(1000,400);
    glVertex2i(1000,550);
    glVertex2i(600,550);
    glEnd();

        glColor3f(0.2,0.2,0.0);
  RenderString(680,450,GLUT_BITMAP_TIMES_ROMAN_24,"Ice Cream Store");

}

void traffic_signal()
{
    //glColor3f(0.0,0.0,0.0);
    //
    /*glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2i(1500,300);
    glVertex2i(1600,300);
    glVertex2i(1600,700);
    glVertex2i(1500,700);
    glEnd();*/


    glColor3f(0.2,0.2,0.2);
    glBegin(GL_QUADS);
    glVertex2i(1500,680);
    glVertex2i(1600,680);
    glVertex2i(1580,700);
    glVertex2i(1520,700);
    ////
    glVertex2i(1510,490);
    glVertex2i(1590,490);
    glVertex2i(1590,680);
    glVertex2i(1510,680);
    ////
    glVertex2i(1540,300);
    glVertex2i(1560,300);
    glVertex2i(1560,490);
    glVertex2i(1540,490);
    glEnd();
}

void zebra_crossing()
{
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2i(1350,0);
    glVertex2i(1450,0);
    glVertex2i(1500,300);
    glVertex2i(1400,300);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(1393.75,262.5);
    glVertex2f(1493.75,262.5);
    glVertex2f(1500.0,300.0);
    glVertex2f(1400.0,300.0);
    ////
    glVertex2f(1381.25,187.5);
    glVertex2f(1481.25,187.5);
    glVertex2f(1487.5,225.0);
    glVertex2f(1387.5,225.0);
    ////
    glVertex2f(1368.75,112.5);
    glVertex2f(1468.75,112.5);
    glVertex2f(1475.0,150.0);
    glVertex2f(1375.0,150.0);
    ////
    glVertex2f(1356.25,37.5);
    glVertex2f(1456.25,37.5);
    glVertex2f(1462.5,75.0);
    glVertex2f(1362.5,75.0);
    glEnd();
}

void lights()
{
    circle(1550,650,30,0.0,0.0,0.0);
    circle(1550,590,30,0.0,0.0,0.0);
    circle(1550,530,30,0.0,0.0,0.0);
    if(sig==red)
    {
        glColor3i(1,0,0);
        circle(1550,650,30,1.0,0.0,0.0);
    }
    else if(sig==yellow)
    {
        glColor3i(1,1,0);
        circle(1550,590,30,1.0,1.0,0.0);
    }
    else
    {
        glColor3i(0,1,0);
        circle(1550,530,30,0.0,1.0,0.0);
    }
}

void car()
{
    /*glBegin(GL_POLYGON);
    glVertex2f(-100.0,100.0);
    glVertex2f(600.0,100.0);
    glVertex2f(600.0,400.0);
    glVertex2f(-100.0,400.0);
    glEnd();*/
    glColor3f(1.0,0.0,0.0);

    glBegin(GL_POLYGON);
    glVertex2f(pos-100.0,200.0);
    glVertex2f(pos-50.0,300.0);
    glVertex2f(pos,300.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(pos-100.0,200.0);
    glVertex2f(pos+100.0,400.0);
    glVertex2f(pos+300.0,400.0);
    glVertex2f(pos+500.0,200.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(pos+400.0,200.0);
    glVertex2f(pos+600.0,200.0);
    glVertex2f(pos+500.0,300.0);
    glVertex2f(pos+400.0,300.0);
    glEnd();

    circle(pos+50.0,200.0,50,0.05,0.05,0.05);
    circle(pos+400.0,200.0,50,0.05,0.05,0.05);

    //windows

    glColor3i(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(pos+10.0,300.0);
    glVertex2f(pos+190.0,300.0);
    glVertex2f(pos+190.0,390.0);
    glVertex2f(pos+100.0,390.0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(pos+200.0,300.0);
    glVertex2f(pos+390.0,300.0);
    glVertex2f(pos+300.0,390.0);
    glVertex2f(pos+200.0,390.0);
    glEnd();

    if(mov==1)
    {
        pos+=15.0;
    }
    if(pos==760.0)
    {
        while(manpos>200)
        {

        circle(1445.0,manpos-50.0,50,1.0,1.0,1.0);
        manpos=manpos-50.0;
        glFlush();
        sleep(1);
        }

        glColor3f(0.2,0.0,0.0);
        RenderString(1610.0,650.0,GLUT_BITMAP_TIMES_ROMAN_24,"STOP!!");
        glFlush();
        sleep(1);
        sig=yellow;
        lights();
        glColor3f(0.2,0.2,0.0);
        RenderString(1610.0,590.0,GLUT_BITMAP_TIMES_ROMAN_24,"WAIT!!");
        glFlush();
        sleep(1);
        sig=green;
        lights();
        glColor3f(0.0,0.2,0.0);
        RenderString(1610.0,530.0,GLUT_BITMAP_TIMES_ROMAN_24,"GO!!");
        glFlush();
        sleep(1);

    }
    else if(pos==2200.0)
    {
        exit(0);
    }
    glFlush();
}

void scr2()
{
    background(0.6,0.7,1.0);
    road();
    houses();
    shop();
    traffic_signal();
    zebra_crossing();
    lights();
    car();
    glFlush();
    //scr2();
}

void display()
{
   scr1();
}

void nextScreen(int key, int x, int y)
{
switch(key){
	case GLUT_KEY_RIGHT:
	scr2();
	break;

	case GLUT_KEY_DOWN:
	//scr3();
	exit(0);
	break;

	case GLUT_KEY_UP:
	exit(0);
	break;

}



}

void init()
{
glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,2000.0,0.0,1000.0);
}

int main(int argc,char * argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1500,1000);
    glutInitWindowPosition(0,0);
    window=glutCreateWindow("TRAFFIC RULES TEACHING TOOL");
    glutDisplayFunc(display);
    glutSpecialFunc(nextScreen);
    //glutFullScreen();
    init();
    glutMainLoop();
    return 0;
}
