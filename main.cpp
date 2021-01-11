#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
void display(void){
    glClear (GL_COLOR_BUFFER_BIT);

    ///wall
    glColor3f(1.0,0.0,0.3);
    glBegin(GL_POLYGON);
    glVertex3f(0.1,0.1,0.0);
    glVertex3f(0.9,0.1,0.0);
    glVertex3f(0.9,0.6,0.0);
    glVertex3f(0.1,0.6,0.0);
    glEnd();

    ///rofe
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.1,0.6,0.0);
    glVertex3f(0.9,0.6,0.0);
    glVertex3f(0.5,0.85,0.0);
    glEnd();

    ///window - 1
    glColor3f(0.0,0.5,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.15,0.25,0.0);
    glVertex3f(0.35,0.25,0.0);
    glVertex3f(0.35,0.4,0.0);
    glVertex3f(0.15,0.4,0.0);
    glEnd();

    ///window - 1 - style - 1
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.165,0.25,0.0);
    glVertex3f(0.17,0.25,0.0);
    glVertex3f(0.17,0.4,0.0);
    glVertex3f(0.165,0.4,0.0);
    glEnd();

    ///window - 1 - style - 2
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.182,0.25,0.0);
    glVertex3f(0.187,0.25,0.0);
    glVertex3f(0.187,0.4,0.0);
    glVertex3f(0.182,0.4,0.0);
    glEnd();

    ///window - 1 - style - 3
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.199,0.25,0.0);
    glVertex3f(0.204,0.25,0.0);
    glVertex3f(0.204,0.4,0.0);
    glVertex3f(0.199,0.4,0.0);
    glEnd();

    ///window - 1 - style - 4
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.216,0.25,0.0);
    glVertex3f(0.221,0.25,0.0);
    glVertex3f(0.221,0.4,0.0);
    glVertex3f(0.216,0.4,0.0);
    glEnd();

    ///window - 1 - style - 5
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.233,0.25,0.0);
    glVertex3f(0.238,0.25,0.0);
    glVertex3f(0.238,0.4,0.0);
    glVertex3f(0.233,0.4,0.0);
    glEnd();

    ///window - 1 - style - 6
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.250,0.25,0.0);
    glVertex3f(0.255,0.25,0.0);
    glVertex3f(0.255,0.4,0.0);
    glVertex3f(0.250,0.4,0.0);
    glEnd();

    ///window - 1 - style - 7
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.267,0.25,0.0);
    glVertex3f(0.272,0.25,0.0);
    glVertex3f(0.272,0.4,0.0);
    glVertex3f(0.267,0.4,0.0);
    glEnd();

    ///window - 1 - style - 8
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.284,0.25,0.0);
    glVertex3f(0.289,0.25,0.0);
    glVertex3f(0.289,0.4,0.0);
    glVertex3f(0.284,0.4,0.0);
    glEnd();

    ///window - 1 - style - 9
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.301,0.25,0.0);
    glVertex3f(0.306,0.25,0.0);
    glVertex3f(0.306,0.4,0.0);
    glVertex3f(0.301,0.4,0.0);
    glEnd();

    ///window - 1 - style - 10
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.318,0.25,0.0);
    glVertex3f(0.323,0.25,0.0);
    glVertex3f(0.323,0.4,0.0);
    glVertex3f(0.318,0.4,0.0);
    glEnd();

    ///window - 1 - style - 11
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.335,0.25,0.0);
    glVertex3f(0.34,0.25,0.0);
    glVertex3f(0.34,0.4,0.0);
    glVertex3f(0.335,0.4,0.0);
    glEnd();

    ///door
    glColor3f(0.0,0.5,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.4,0.1,0.0);
    glVertex3f(0.6,0.1,0.0);
    glVertex3f(0.6,0.4,0.0);
    glVertex3f(0.4,0.4,0.0);
    glEnd();

    ///door - left
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.4,0.1,0.0);
    glVertex3f(0.47,0.13,0.0);
    glVertex3f(0.47,0.37,0.0);
    glVertex3f(0.4,0.4,0.0);
    glEnd();

    ///door - right
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.6,0.1,0.0);
    glVertex3f(0.53,0.13,0.0);
    glVertex3f(0.53,0.37,0.0);
    glVertex3f(0.6,0.4,0.0);
    glEnd();

    ///window - 2
    glColor3f(0.0,0.5,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.85,0.25,0.0);
    glVertex3f(0.85,0.4,0.0);
    glVertex3f(0.65,0.4,0.0);
    glVertex3f(0.65,0.25,0.0);
    glEnd();

    ///window - 2 - style - 1
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.833,0.25,0.0);
    glVertex3f(0.833,0.4,0.0);
    glVertex3f(0.828,0.4,0.0);
    glVertex3f(0.828,0.25,0.0);
    glEnd();

    ///window - 2 - style - 2
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.816,0.25,0.0);
    glVertex3f(0.816,0.4,0.0);
    glVertex3f(0.811,0.4,0.0);
    glVertex3f(0.811,0.25,0.0);
    glEnd();

    ///window - 2 - style - 3
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.799,0.25,0.0);
    glVertex3f(0.799,0.4,0.0);
    glVertex3f(0.794,0.4,0.0);
    glVertex3f(0.794,0.25,0.0);
    glEnd();

    ///window - 2 - style - 4
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.782,0.25,0.0);
    glVertex3f(0.782,0.4,0.0);
    glVertex3f(0.777,0.4,0.0);
    glVertex3f(0.777,0.25,0.0);
    glEnd();

    ///window - 2 - style - 5
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.765,0.25,0.0);
    glVertex3f(0.765,0.4,0.0);
    glVertex3f(0.760,0.4,0.0);
    glVertex3f(0.760,0.25,0.0);
    glEnd();

    ///window - 2 - style - 6
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.748,0.25,0.0);
    glVertex3f(0.748,0.4,0.0);
    glVertex3f(0.743,0.4,0.0);
    glVertex3f(0.743,0.25,0.0);
    glEnd();

    ///window - 2 - style - 7
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.731,0.25,0.0);
    glVertex3f(0.731,0.4,0.0);
    glVertex3f(0.726,0.4,0.0);
    glVertex3f(0.726,0.25,0.0);
    glEnd();

    ///window - 2 - style - 8
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.714,0.25,0.0);
    glVertex3f(0.714,0.4,0.0);
    glVertex3f(0.709,0.4,0.0);
    glVertex3f(0.709,0.25,0.0);
    glEnd();

    ///window - 2 - style - 9
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.697,0.25,0.0);
    glVertex3f(0.697,0.4,0.0);
    glVertex3f(0.692,0.4,0.0);
    glVertex3f(0.692,0.25,0.0);
    glEnd();

    ///window - 2 - style - 10
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.680,0.25,0.0);
    glVertex3f(0.680,0.4,0.0);
    glVertex3f(0.675,0.4,0.0);
    glVertex3f(0.675,0.25,0.0);
    glEnd();

    ///window - 2 - style - 11
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.663,0.25,0.0);
    glVertex3f(0.663,0.4,0.0);
    glVertex3f(0.658,0.4,0.0);
    glVertex3f(0.658,0.25,0.0);
    glEnd();

    glFlush ();
}
void init (void){
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (700, 600);
    glutInitWindowPosition (350, 80);
    glutCreateWindow ("My Dream House");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
