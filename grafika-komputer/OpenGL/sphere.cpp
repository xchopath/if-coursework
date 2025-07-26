#include <GL/glut.h>

constexpr float RADIUS = 1.0f;
constexpr int SLICES = 40;
constexpr int STACKS = 40;

void initGL() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0, 0, 5,  0, 0, 0,  0, 1, 0);
    glColor3f(0.2f, 0.6f, 1.0f);
    glutSolidSphere(RADIUS, SLICES, STACKS);
    glutSwapBuffers();
}

void reshape(int w, int h) {
    if (h == 0) h = 1;
    float aspect = static_cast<float>(w) / h;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, aspect, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("OpenGL Sphere");
    initGL();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
}
