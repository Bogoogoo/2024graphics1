#include <GL/glut.h>
#include <math.h>
void display()
{
    glBegin(GL_POLYGON);
    for(float a=0 ; a<=3.14159*2; a+=0.1){
        glVertex2f(0.2*cos(a)+0.45,0.2*sin(a)+0.45);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(float a=0 ; a<=3.14159*2; a+=0.1){
        glVertex2f(0.5*cos(a),0.5*sin(a));
    }
    glEnd();
    glBegin(GL_POLYGON);
    for(float a=0 ; a<=3.14159*2; a+=0.1){
        glVertex2f(0.2*cos(a)-0.45,0.2*sin(a)+0.45);
    }
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("2024電腦圖學第02週");
    glutDisplayFunc(display);

    glutMainLoop();
}
