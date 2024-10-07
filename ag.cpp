#include<GL/glut.h>
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
	}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutCreateWindow("openGL with GLUT");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
