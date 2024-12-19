#include <iostream>
#include <GLUT/glut.h>
#include <SFML/Audio.hpp>

#include <cmath>
#define PI  3.14159265358979323846
using namespace std;

GLfloat scoreboard_position_x = -0.65f;
GLfloat scoreboard_position_y = -1.2f;
GLfloat scoreboard_scale = 1.3f;

void drawString(const std::string& str, GLfloat x, GLfloat y) {
    glRasterPos2f(x, y);
    for (char c : str) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c);
    }
}
void scoreboard() {
 
    glPushMatrix();
  // glTranslatef(scoreboard_position_x,scoreboard_position_y, 0.0f);
  // glRotatef(character_rotation, 0.0f, 0.0f, 1.0f);  // Rotate around z-axis
 //   glScalef(scoreboard_scale, scoreboard_scale, 1.0);
    //Score Board
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0); // Black

    glVertex2f(0.16, 0.84);
    glVertex2f(0.84, 0.84);
    glVertex2f(0.84, 0.16);
    glVertex2f(0.16, 0.16);
    glEnd();

    //Score Board
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0); // Yellow

    glVertex2f(0.2, 0.8);
    glVertex2f(0.8, 0.8);
    glVertex2f(0.8, 0.2);
    glVertex2f(0.2, 0.2);
    glEnd();

    //Horizontal Line
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0); // Black

    glVertex2f(0.2, 0.6);
    glVertex2f(0.8, 0.6);
    glEnd();

    //Vertical Line
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0); // Black

    glVertex2f(0.5, 0.8);
    glVertex2f(0.5, 0.6);
    glEnd();

    // Colon Upper
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0); // Black

    glVertex2f(0.49, 0.45);
    glVertex2f(0.51, 0.45);
    glVertex2f(0.51, 0.43);
    glVertex2f(0.49, 0.43);
    glEnd();

    // Colon Below
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0); // Black

    glVertex2f(0.49, 0.37);
    glVertex2f(0.51, 0.37);
    glVertex2f(0.51, 0.35);
    glVertex2f(0.49, 0.35);
    glEnd();
    
    glColor3f(1.0, 0.0, 0.0);  // Set color to red for the goal message
  drawString("player-1 :", 0.28, 0.7);
    
    glColor3f(1.0, 0.0, 0.0);  // Set color to red for the goal message
  drawString("player-1 :", 0.28, 0.39);
    
    glColor3f(1.0, 0.0, 0.0);  // Set color to red for the goal message
  drawString("player-2 :", 0.58, 0.7);
    
    glColor3f(1.0, 0.0, 0.0);  // Set color to red for the goal message
  drawString("player-2 :", 0.58, 0.39);
    
    glColor3f(1.0, 0.0, 0.0);  // Set color to red for the goal message
  drawString("player-2 :", 0.58, 0.25);
    
    glPopMatrix();
}
void gallery() {
    //Sky
    glBegin(GL_QUADS);
    glColor3ub(135, 206, 250); // Sky Blue

    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glVertex2f(1, 1);
    glVertex2f(-1, 1);
    glEnd();

    //Field
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 0); // Green

    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, 0);
    glVertex2f(-1, 0);
    glEnd();

    //Field White line Polygon
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // White
    glVertex2f(-1, -0.4);
    glVertex2f(1, -0.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255); // White
    glVertex2f(0, -0.4);
    glVertex2f(0, -1);
    glEnd();

    //Fench Left
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128); // Gray color

    glVertex2f(-1, 0);
    glVertex2f(-0.8, 0);
    glVertex2f(0.73, 0.2);
    glVertex2f(-1, 0.2);
    glEnd();

    //Fench Right
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128); // Gray color

    glVertex2f(0.8, 0);
    glVertex2f(1, 0);
    glVertex2f(1, 0.2);
    glVertex2f(0.73, 0.2);
    glEnd();


    //Lower Portion
    glBegin(GL_QUADS);
    glColor3ub(115, 79, 150); // Dark Lavender

    glVertex2f(-0.8, -0.23);
    glVertex2f(0.8, -0.23);
    glVertex2f(0.8, 0);
    glVertex2f(-0.8, 0);
    glEnd();

    //Roof
    glBegin(GL_QUADS);
    glColor3ub(115, 79, 150); // Dark Lavender

    glVertex2f(-0.8, 0.6);
    glVertex2f(0.8, 0.6);
    glVertex2f(0.8, 0.7);
    glVertex2f(-0.8, 0.7);
    glEnd();

    //Roof Polygon
    glBegin(GL_POLYGON);
    glColor3ub(191, 148, 228); // Light Lavender

    glVertex2f(-0.8, 0.7);
    glVertex2f(-0.6, 0.8);
    glVertex2f(-0.4, 0.7);
    glVertex2f(-0.2, 0.8);
    glVertex2f(0, 0.7);
    glVertex2f(0.2, 0.8);
    glVertex2f(0.4, 0.7);
    glVertex2f(0.6, 0.8);
    glVertex2f(0.8, 0.7);
    glVertex2f(-0.8, 0.7);
    glEnd();

    //Gallery Lower Portion
    glBegin(GL_QUADS);
    glColor3ub(255, 165, 0); // Orange color

    glVertex2f(-0.8, 0);
    glVertex2f(0.8, 0);
    glVertex2f(0.73, 0.2);
    glVertex2f(-0.73, 0.2);
    glEnd();

    //Gallery Middle Portion
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255); // Blue color

    glVertex2f(-0.73, 0.2);
    glVertex2f(0.73, 0.2);
    glVertex2f(0.67, 0.4);
    glVertex2f(-0.67, 0.4);
    glEnd();

    //Gallery Upper Portion
    glBegin(GL_QUADS);
    glColor3ub(255, 165, 0); // Orange color

    glVertex2f(-0.67, 0.4);
    glVertex2f(0.67, 0.4);
    glVertex2f(0.6, 0.6);
    glVertex2f(-0.6, 0.6);
    glEnd();


    //Gallery Door
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 0); // Yellow

    glVertex2f(-0.1, 0.16);
    glVertex2f(0.1, 0.16);
    glVertex2f(0.1, 0);
    glVertex2f(-0.1, 0);
    glEnd();

    //Gallery Door Upper Portion
    glBegin(GL_QUADS);
    glColor3ub(135, 206, 250); // Sky Blue

    glVertex2f(-0.1, 0.4);
    glVertex2f(0.1, 0.4);
    glVertex2f(0.1, 0.2);
    glVertex2f(-0.1, 0.2);
    glEnd();


    //Piller Left 1
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); // White

    glVertex2f(-0.72, 0.6);
    glVertex2f(-0.68, 0.6);
    glVertex2f(-0.68, 0);
    glVertex2f(-0.72, 0);
    glEnd();

    //Piller Left 2
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); // White

    glVertex2f(-0.32, 0.6);
    glVertex2f(-0.28, 0.6);
    glVertex2f(-0.28, 0);
    glVertex2f(-0.32, 0);
    glEnd();

    //Piller Right 1
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); // White

    glVertex2f(0.28, 0.6);
    glVertex2f(0.32, 0.6);
    glVertex2f(0.32, 0);
    glVertex2f(0.28, 0);
    glEnd();

    //Piller Right 2
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); // White

    glVertex2f(0.68, 0.6);
    glVertex2f(0.72, 0.6);
    glVertex2f(0.72, 0);
    glVertex2f(0.68, 0);
    glEnd();
    


}
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    //gallery
    gallery();
    scoreboard();

    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutInitWindowSize(320, 320);   // Set the window's initial width & height
    glutInitWindowPosition(100, -1000); // Set the window's position
    // glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 640) / 2,
    //     (glutGet(GLUT_SCREEN_HEIGHT) - 480) / 2);
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
