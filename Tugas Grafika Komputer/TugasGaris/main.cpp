#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void garis()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);

    glLineWidth(2.5);
    glBegin(GL_LINES);

    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.2, 0.5, 0.0);
    glVertex3f(0.9, 0.5, 0.0);

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
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(250, 250);
    glutCreateWindow("Tugas 1 Garis ");
    Initialize();
    glutDisplayFunc(garis);
    glutMainLoop();
    return 0;
}
