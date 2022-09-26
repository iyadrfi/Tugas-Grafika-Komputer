#include <windows.h>
#include <GL/glut.h>
#include <GL/glut.h>
void titik ();
main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(600,800);
glutInitWindowPosition(100,100);
glutCreateWindow("Tugas 1 6 Titik");
glClearColor(0.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
glOrtho(1.0,1.0,1.0,1.0,-1.0,1.0);
glutDisplayFunc(titik);
glutMainLoop();
}
void titik()
{
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5.5);
glBegin(GL_POINTS);

glColor3f(1.5, 0.5, 0.5);
glVertex2f(-0.3,0.25);

glColor3f(0.0, 1.0, 1.0);
glVertex2f(-0.2,0.15);

glColor3f(0.0, 0.0, 1.0);
glVertex2f(-0.1,0.25);

glColor3f(1.0, 0.0, 1.0);
glVertex2f(0.0,0.15);

glColor3f(0.5, 1.0, 0.5);
glVertex2f(0.1,0.25);

glColor3f(1.0, 1.0, 0.0);
glVertex2f(0.2,0.15);

glEnd();
glFlush();
}
