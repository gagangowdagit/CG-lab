 #include <GL/glut.h>  // Include the GLUT header file

    void display() {
        glClear(GL_COLOR_BUFFER_BIT);  // Clear the display
    
        // Draw a simple line
        glColor3f(1.0, 0.0, 0.0);  // Red color
        glBegin(GL_LINES);
            glVertex2f(-0.5f, 0.0f);  // First point
            glVertex2f(0.5f, 0.0f);   // Second point
        glEnd();
    
        // Draw a line strip
        glColor3f(0.0, 1.0, 0.0);  // Green color
        glBegin(GL_LINE_STRIP);
            glVertex2f(-0.5f, 0.5f);  // First point
            glVertex2f(0.0f, 0.8f);   // Second point
            glVertex2f(0.5f, 0.5f);   // Third point
        glEnd();
    
        // Draw a line loop
        glColor3f(0.0, 0.0, 1.0);  // Blue color
        glBegin(GL_LINE_LOOP);
            glVertex2f(-0.5f, -0.5f);  // First point
            glVertex2f(0.5f, -0.5f);   // Second point
            glVertex2f(0.5f, -0.8f);   // Third point
            glVertex2f(-0.5f, -0.8f);  // Fourth point
        glEnd();
    
        glFlush();  // Render now
    }
    
    void init() {
        // Set the background color to white
        glClearColor(1.0, 1.0, 1.0, 1.0);
        // Set up the orthographic projection
        glMatrixMode(GL_PROJECTION);
        gluOrtho2D(-1.0, 1.0, -1.0, 1.0);  // Set the coordinate system
    }
    
    int main(int argc, char** argv) {
        glutInit(&argc, argv);  // Initialize the GLUT library
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  // Single buffer, RGB mode
        glutInitWindowSize(500, 500);  // Set window size
        glutCreateWindow("OpenGL Line, Line Strip, and Line Loop Example");  // Create a window with a title
        init();  // Call the init function
        glutDisplayFunc(display);  // Register the display callback function
        glutMainLoop();  // Enter the event-processing loop
        return 0;
    }
