#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
float x1,y1,x2,y2,m,i,j;
float dx,dy;
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
//write your code here

if(m>0 && m<=1)
{
while(x1<=x2 && y1<=y2)
{
    x1=x1+1;
    y1=y1+m;
    glVertex3f(x1/100,y1/100,0.0);
   printf("%f %f",x1,y1);

}
}
else if(m>1)
{
    while(x1<=x2 && y1<=y2)
{
    x1=x1+(1/m);
    y1=y1+1;
   glVertex3f(x1/100,y1/100,0.0);
   printf("%f %f",x1,y1);
}
}

else if(m>-1 && m<=0)
{
    while(x1>=x2 && y1>=y2)
{
    x1=x1-1;
    y1=y1-m;
   glVertex3f(x1/100,y1/100,0.0);
   printf("%f %f",x1,y1);
}
}
else if(m<-1)

  {

    while(x1>=x2 && y1>=y2)
{
    x1=x1-(1/m);
    y1=y1-1;
    glVertex3f(x1/100,y1/100,0.0);
    printf("%f %f",x1,y1);
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

    //glVertex3f(x1/100,y1/100,0.0);write your code here
    printf("Enter value of X1 :");
    scanf("%f",&x1);
    printf("Enter value of y1 :");
    scanf("%f",&y1);
    printf("Enter value of X2 :");
    scanf("%f",&x2);
    printf("Enter value of Y2 :");
    scanf("%f",&y2);
    dx=x2-x1;
    dy=y2-y1;
    m=dy/dx;


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