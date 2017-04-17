#include <stdlib.h>
#include<stdio.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

// all variables initialized to 1.0, meaning
// the triangle will initially be white
float red=0.0f, blue=0.0f, green=0.0f;

// angle for rotating triangle
float angle = 0.0f;

void changeSize(int w, int h) {

	// Prevent a divide by zero, when window is too short
	// (you cant make a window of zero width).
	if (h == 0)
		h = 1;
	float ratio =  w * 1.0 / h;

        // Use the Projection Matrix
	glMatrixMode(GL_PROJECTION);

        // Reset Matrix
	glLoadIdentity();

	// Set the viewport to be the entire window
	glViewport(0, 0, w, h);

	// Set the correct perspective.
	gluPerspective(45.0f, ratio, 1.0f, 100.0f);
	//glOrtho(0.0,500.0,0.0,500.0,500.0,500.0);
	// Get Back to the Modelview
	glMatrixMode(GL_MODELVIEW);
}

void renderScene(void) {

	// Clear Color and Depth Buffers
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Reset transformations
	glLoadIdentity();

	// Set the camera
	//gluLookAt(	1.0f, 1.0f, 10.0f,
			//0.0f, 0.0f,  0.0f,
			//0.0f, 1.0f,  0.0f);

glOrtho(0.0,999.0,0.0,999.0,0.0,999.0);

	//glRotatef(angle, 0.0f, 1.0f, 0.0f);

	glColor3f(0.0,0.0,0.0);
	
    glTranslatef(500.0,500.0,0.0);	
    glutSolidSphere(50,30,30);
glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,100.0,0.0);
    glutSolidSphere(50,30,30);
glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,-200.0,0.0);
    glutSolidSphere(50,30,30);		
   // glTranslatef(0,-2,0);
    //glutSolidSphere(1,30,30);

if(red==1.0 && green==0.0 && blue==0.0)
				{
				 glColor3f(red,green,blue);
	
   				 glTranslatef(0.0,200.0,0.0);	
    				glutSolidSphere(50,30,30);
				}
else if(red==1.0 && green==1.0 && blue==0.0)
{
 				glColor3f(red,green,blue);
	
   				 glTranslatef(0.0,100.0,0.0);	
    				glutSolidSphere(50,30,30);		
}

else if(red==0.0 && green==1.0 && blue==0.0)
{
 				glColor3f(red,green,blue);
	
   				// glTranslatef(0.0,200.0,0.0);	
    				glutSolidSphere(50,30,30);
}


	glutSwapBuffers();
}

void processNormalKeys(unsigned char key, int x, int y) {

	if (key == 27)
		exit(0);
}

void processSpecialKeys(int key, int x, int y) {

	switch(key) {
		case GLUT_KEY_UP :
				red = 1.0;
				green = 0.0;
				blue = 0.0;
									
				 break;
		case GLUT_KEY_DOWN :
				red = 0.0;
				green = 1.0;
				blue = 0.0; break;
		case GLUT_KEY_LEFT :
				exit(0); break;
		case GLUT_KEY_RIGHT :
				red = 1.0;
				green = 1.0;
				blue = 0.0; break;
	}
}

int main(int argc, char **argv) {

	// init GLUT and create window
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100 ,100);
	glutInitWindowSize(320,320);
	glutCreateWindow("Light signal");

	// register callbacks
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);
	glutIdleFunc(renderScene);
	
	glClearColor(1.0,1.0,1.0,1.0);

	// here are the new entries
	//glutKeyboardFunc(processNormalKeys);
	glutSpecialFunc(processSpecialKeys);

	// enter GLUT event processing cycle
	glutMainLoop();

	return 1;
}

