// PROGRAM MENGGAMBAR POLIGON

#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void polygon()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.5, 0.2 , 2.0);

    glBegin(GL_POLYGON);

    glVertex2f(0.2, 0.3);
    glVertex2f(0.7, 0.3);
    glVertex2f(0.8, 0.7);
    glVertex2f(0.3, 0.7);

    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(3.0);

    glBegin(GL_LINES);

    glColor3f(0.9, 1.0, 1.0);
    glVertex2f(0.2, 0.3);
    glVertex2f(0.7, 0.3);

    glColor3f(1.0, 2.0, 0.9);
    glVertex2f(0.7, 0.3);
    glVertex2f(0.8, 0.7);

    glColor3f(1.0, 0.1, 1.0);
    glVertex2f(0.8, 0.7);
    glVertex2f(0.3, 0.7);

    glColor3f(0.3, 1.0, 1.0);
    glVertex2f(0.3, 0.7);
    glVertex2f(0.2, 0.3);

    glEnd();

    glFlush();
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Tugas 1 Polygon");
    Initialize();
    glutDisplayFunc(polygon);
    glutMainLoop();
    return 0;
}
