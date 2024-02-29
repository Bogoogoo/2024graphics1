#include <GL/glut.h>
void display()
{
    glColor3f(192/255.0, 233/255.0, 160/255.0);
    glutSolidTeapot( 0.3 );
    glColor3f(165/255.0, 186/255.0, 132/255.0);
    glutSolidTeapot( 0.1 );
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
