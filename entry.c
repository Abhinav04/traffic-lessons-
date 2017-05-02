#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<unistd.h>
#include<sys/wait.h>

//void (*disp[2])(void);
int scr=1,window,last=2;
//disp[0]=scr1;
int window,flag=0;
int flagstop=1,flagstart=0;

/* rotation angle for the triangle. */
float rtri = 0.0f;

/* rotation angle for the quadrilateral. */
float rquad = 0.0f;

float red=0.0f, blue=0.0f, green=0.0f;


float ballX = -0.5f;
float ballY = 0.0f;
float ballZ = 0.0f;


void RenderString(float x, float y, void *font, const char* string)
{
  char *c;

  glRasterPos2f(x, y);

  glutBitmapString(font, string);
}
 

void drawBall(void) {
        glColor3f(0.5, 0.5, 0.5); //set ball colour
        glTranslatef(ballX,ballY,ballZ); //moving it toward the screen a bit on creation
        //glRotatef(ballX,ballX,ballY,ballZ);
        glutSolidSphere (0.3, 20, 20); //create ball.
        glTranslatef(ballX+1.5,ballY,ballZ); //moving it toward the screen a bit on creation
        glutSolidSphere (0.3, 20, 20); //
        }




void scr1(void)
{
//    glClear(GL_COLOR_BUFFER_BIT);

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);        // Clear The Screen And The Depth Buffer
  glLoadIdentity(); 
    //glColor3f(1.0,0.0,0.0);
    //RenderString(100.0,500.0,GLUT_BITMAP_TIMES_ROMAN_24,"Hello opengl\n");
    glColor3f(1,0,0);
    RenderString(140,800,GLUT_BITMAP_TIMES_ROMAN_24,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
    RenderString(140,785,GLUT_BITMAP_TIMES_ROMAN_24,"-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-");
    glColor3f(0,0,1);
    RenderString(140,600,GLUT_BITMAP_TIMES_ROMAN_24,"TRAFFIC RULES TEACHING TOOL");
    RenderString(140,585,GLUT_BITMAP_TIMES_ROMAN_24,"---------------------------");
    glColor3f(0.8,0,0);
    RenderString(140,440,GLUT_BITMAP_TIMES_ROMAN_24,"BY:");
    glColor3f(0.2,0.2,0.2);
    RenderString(140,400,GLUT_BITMAP_TIMES_ROMAN_24,"Abhinav Bagrecha");
    RenderString(140,360,GLUT_BITMAP_TIMES_ROMAN_24,"1PE14CS029");
    RenderString(140,320,GLUT_BITMAP_TIMES_ROMAN_24,"Anmol Sharma");
    RenderString(140,280,GLUT_BITMAP_TIMES_ROMAN_24,"1PE14CS026");
    glColor3f(1,0,0);

 RenderString(140,220,GLUT_BITMAP_TIMES_ROMAN_24,"Guided by:");
    RenderString(140,180,GLUT_BITMAP_TIMES_ROMAN_24,"Mr. K S V K Shrikant");
    RenderString(140,140,GLUT_BITMAP_TIMES_ROMAN_24,"Miss. Bidisha Goswami");
    
    RenderString(140,80,GLUT_BITMAP_TIMES_ROMAN_24,"PRESS    ------>");
    
    glFlush();
}

void scr2()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.2);
    glVertex2f(0.0,999.0);
    glVertex2f(999.0,999.0);
    glVertex2f(999.0,500.0);
    glColor3f(0.5,0.5,0.0);
    glVertex2f(999.0,0.0);
    glColor3f(0.0,0.0,0.2);
    glVertex2f(500.0,0.0);
    glColor3f(0.5,0.5,0.0);
    glVertex2f(0.0,0.0);
    glEnd();
    glColor3f(0,0,0);
    RenderString(140,400,GLUT_BITMAP_TIMES_ROMAN_24,"FIRST SCENE");
    glFlush();
}



void DrawGLScene()
{

if(flag==0)
scr1();

else
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);        // Clear The Screen And The Depth Buffer
  glLoadIdentity();                // Reset The View

  glTranslatef(rtri,0.0f,-9.0f);        // Move Left 1.5 Units And Into The Screen 6.0

  //glRotatef(rtri,1.0f,0.0f,0.0f);        // Rotate The Triangle On The Y axis
  // draw a triangle (in smooth coloring mode)
  glBegin(GL_POLYGON);                // start drawing a polygon
  glColor3f(1.0f,0.0f,0.0f);            // Set The Color To Red
  glVertex3f(-1.0f, 1.0f, 0.0f);        // Top left
  glVertex3f(0.4f, 1.0f, 0.0f);

  glVertex3f(1.0f, 0.4f, 0.0f);

  //glColor3f(0.0f,1.0f,0.0f);            // Set The Color To Green
  glVertex3f( 1.0f,0.0f, 0.0f);        // Bottom Right
  //glColor3f(0.0f,0.0f,1.0f);            // Set The Color To Blue
  glVertex3f(-1.0f,0.0f, 0.0f);// Bottom Left

  //glVertex3f();
  glEnd();                    // we're done with the polygon (smooth color interpolation)
  drawBall();

if(flagstop==1)
{
rtri+=0;
}

else{
  rtri+=0.005f;                    // Increase The Rotation Variable For The Triangle
  if(rtri>2)
      rtri=-2.0f;
  rquad-=15.0f;                    // Decrease The Rotation Variable For The Quad
}
  // swap the buffers to display, since double buffering is used.


	glLoadIdentity();


glOrtho(0.0,999.0,0.0,999.0,0.0,999.0);


glColor3f(0.0,0.0,0.0);
	
    glTranslatef(700.0,600.0,0.0);	
    glutSolidSphere(20,30,30);
glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,40.0,0.0);
    glutSolidSphere(20,30,30);
glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,-80.0,0.0);
    glutSolidSphere(20,30,30);		
   // glTranslatef(0,-2,0);
    //glutSolidSphere(1,30,30);

if(red==1.0 && green==0.0 && blue==0.0)
				{
				 glColor3f(red,green,blue);
	
   				 glTranslatef(0.0,80.0,0.0);	
    				glutSolidSphere(21,30,30);
				}
else if(red==1.0 && green==1.0 && blue==0.0)
{
 				glColor3f(red,green,blue);
	
   				 glTranslatef(0.0,40.0,0.0);	
    				glutSolidSphere(21,30,30);


				//go();
				
}

else if(red==0.0 && green==1.0 && blue==0.0)
{
 				glColor3f(red,green,blue);
	
   				// glTranslatef(0.0,200.0,0.0);	
    				glutSolidSphere(21,30,30);
}


	
  glutSwapBuffers();
}

}






void closewindow()
{
     glutDestroyWindow(window);
     exit(0);
}

void nextScreen(int key, int x, int y)
{
switch(key){
	case GLUT_KEY_LEFT:
	flag=1;
	//display();
	break;

		case GLUT_KEY_UP :
				red = 1.0;
				green = 0.0;
				blue = 0.0;
				flagstop=1;					
				 break;
		case GLUT_KEY_DOWN :
				red = 0.0;
				green = 1.0;
				blue = 0.0; 
				flagstop=0;		
				break;
		case GLUT_KEY_RIGHT :
				red = 1.0;
				green = 1.0;
				blue = 0.0; break;			

}
	
	

}

void InitGL(int Width, int Height)
{
  // This Will Clear The Background Color To Black
  glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
  glClearDepth(1.0);                // Enables Clearing Of The Depth Buffer
  glDepthFunc(GL_LESS);                // The Type Of Depth Test To Do
  glEnable(GL_DEPTH_TEST);            // Enables Depth Testing
  glShadeModel(GL_SMOOTH);            // Enables Smooth Color Shading

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();                // Reset The Projection Matrix

  gluPerspective(45.0f,(GLfloat)Width/(GLfloat)Height,0.1f,100.0f);

  glMatrixMode(GL_MODELVIEW);
}

void ReSizeGLScene(int Width, int Height)
{
  if (Height==0)                // Prevent A Divide By Zero If The Window Is Too Small
    Height=1;

  glViewport(0, 0, Width, Height);        // Reset The Current Viewport And Perspective Transformation

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();

  gluPerspective(45.0f,(GLfloat)Width/(GLfloat)Height,0.1f,100.0f);
  glMatrixMode(GL_MODELVIEW);
}



void init()
{
glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,999.0,0.0,999.0);
}

int main(int argc,char * argv[])
{
    glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_ALPHA | GLUT_DEPTH);
    glutInitWindowSize(680,480);
    glutInitWindowPosition(0,0);
    window=glutCreateWindow("TRAFFIC RULES TEACHING TOOL");
    glutDisplayFunc(&DrawGLScene);
    glutSpecialFunc(nextScreen);

glClearColor(1.0,1.0,1.0,1.0);


glClearDepth(1.0);                // Enables Clearing Of The Depth Buffer
  glDepthFunc(GL_LESS);                // The Type Of Depth Test To Do
  glEnable(GL_DEPTH_TEST);            // Enables Depth Testing
  glShadeModel(GL_SMOOTH);            // Enables Smooth Color Shading

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();                // Reset The Projection Matrix

 gluPerspective(45.0f,(GLfloat)680/(GLfloat)480,0.1f,100.0f);

 glutIdleFunc(&DrawGLScene);

  /* Register the function called when our window is resized. */
  glutReshapeFunc(&ReSizeGLScene);

  glMatrixMode(GL_MODELVIEW);


	
    //glutFullScreen();
    //init();
    glutMainLoop();
    return 0;
}
