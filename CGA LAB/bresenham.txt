#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
float x1,y1,x2,y2,m,i,j,p;
int dx=0,dy=0;
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glEnd();

    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POINTS);
    p=(2*dy)-dx;
    for(i=x1,j=y1;i<=x2,j<=y2; ){
        if(p>=0){
            i=i+1;
            j=j+1;
            if((i>x2)||(j>y2)){
                break;
            }
            printf("%0.2f %0.2f\n",i,j);
            glVertex3f ((i/100), (j/100), 0.0);
            p=p+(2*dy)-(2*dx);
            }
            else if(p<0){
            i=i+1;
            if((i>x2)||(j>y2)){
                break;
            }
            printf("%0.2f %0.2f\n",i,j);
            glVertex3f ((i/100), (j/100), 0.0);
            p=p+(2*dy);
            }
        }
glEnd();

/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{

    printf("Enter first point: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter second point: ");
    scanf("%f %f",&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}