#include<windows.h>
#include<GL/glu.h>
#include<GL/glut.h>

GLfloat xMin= -0.5, xMax= 0.5, yMin= -0.5, yMax= 0.5;
GLfloat x1= -0.9, y1=-0.9, x2=0.8, y2= 0.9;



int left=1, right= 2 ,bot=4, top=8;
int c1,c2;
int clip_flag=0, flag= 1;

int get_code(GLfloat x, GLfloat y)
{
    int code= 0;
    if(x<xMin)
        code= code | left;
    if(x>xMax)
        code= code | right;
    if(y<yMin)
        code= code | bot;
    if(y>yMax)
        code= code | top;
    return code;
}

void clip()
{
    int c;
    GLfloat x,y;
    if(c1)
        c=c1;
    else
        c=c2;

    if(c & left)
    {
        x = xMin;
        y= y1+(y2-y1)*((xMin-x1)/(x2-x1));
    }
    if(c & right)
    {
        x = xMax;
        y= y1+(y2-y1)*((xMax-x1)/(x2-x1));
    }
    if(c & bot)
    {
        y = yMin;
        x= x1+(x2-x1)*((yMin-y1)/(y2-y1));
    }
    if(c & right)
    {
        y = yMax;
        x= x1+(x2-x1)*((yMax-y1)/(y2-y1));
    }

    if(c == c1)
    {
        x1=x;
        y1=y;
    }
    else
    {
        x2=x;
        y2=y;
    }

}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,1,1);
    glBegin(GL_LINE_LOOP);
        glVertex2f(xMin,yMin);
        glVertex2f(xMax,yMin);
        glVertex2f(xMax,yMax);
        glVertex2f(xMin,yMax);
    glEnd();

    glColor3f(1,0,0);
    if(flag == 1)
    {
        glBegin(GL_LINES);
            glVertex2f(x1,y1);
            glVertex2f(x2,y2);
        glEnd();
    }

    while(1 & clip_flag == 1)
    {
        c1= get_code(x1,y1);
        c2= get_code(x2,y2);

        if((c1|c2)==0)
            break;
        else if((c1&c2)!=0)
        {
            flag=0;
            break;
        }
        else
            clip();
    }
    glFlush();
}

void key(unsigned char ch, int x, int y)
{
    clip_flag = 1;
    glutPostRedisplay();
}

int main(int argC, char *argV[])
{
    glutInit(&argC, argV);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Cohen-Sutherland Algorithm");
    glutDisplayFunc(Draw);
    glutKeyboardFunc(key);
    glutMainLoop();
    return 0;
}
