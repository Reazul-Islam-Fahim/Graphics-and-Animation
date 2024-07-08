#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

GLfloat	txx	=  0.0;
GLfloat	ty	=  0.0;
static float	pm	=  0.0;
static float	bm	=  0.0;
static float	cm	=  40.0;
static float	sbm	=  0.0;

int d=1,n=0,flap=0,f=0,m=0,s=0,m1=0;
int serial=0;

static void Timer(int value)
{
    serial += 1;

    glutPostRedisplay();
    // 100 milliseconds
    glutTimerFunc(1000, Timer, 0);
}
void delay(){
    for(int i=0;i<100000000;i++);
}
void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI= 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<100;i++)
    {
        angle = 2 * PI * i/100;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)* ry));
    }
    glEnd();
}
void tree(int tlw, int tlh, int trwx, int trwy)
{

    glColor3ub(68, 43, 2);
    glBegin(GL_TRIANGLES);
        glVertex2d(trwx, trwy);//2
        glVertex2d(trwx+2, trwy);//1
        glVertex2d(tlw, tlh);//15
    glEnd();
    glColor3ub(11, 30, 11);
    glBegin(GL_POLYGON);
        glVertex2d(tlw, tlh);//1
        glVertex2d(tlw-2, tlh-10);//2
        glVertex2d(tlw-1, tlh-10);//3
        glVertex2d(tlw-2, tlh-15);//4
        glVertex2d(tlw-1, tlh-15);//5
        glVertex2d(tlw-2, tlh-20);//6
        glVertex2d(tlw-1, tlh-20);//7
        glVertex2d(tlw-2, tlh-25);//8
        glVertex2d(tlw+2, tlh-25);//9
        glVertex2d(tlw+1, tlh-20);//10
        glVertex2d(tlw+2, tlh-20);//11
        glVertex2d(tlw+1, tlh-15);//12
        glVertex2d(tlw+2, tlh-15);//13
        glVertex2d(tlw+1, tlh-10);//14
        glVertex2d(tlw+2, tlh-10);//15
    glEnd();

}
void tree1(int tlw, int tlh, int trwx, int trwy)
{

    glColor3ub(68, 43, 2);
    glBegin(GL_TRIANGLES);
        glVertex2d(trwx, trwy);//2
        glVertex2d(trwx+2, trwy);//1
        glVertex2d(tlw, tlh);//15
    glEnd();
    glColor3ub(9, 56, 3);
    glBegin(GL_POLYGON);
        glVertex2d(tlw, tlh);//1
        glVertex2d(tlw-2, tlh-10);//2
        glVertex2d(tlw-1, tlh-10);//3
        glVertex2d(tlw-2, tlh-15);//4
        glVertex2d(tlw-1, tlh-15);//5
        glVertex2d(tlw-2, tlh-20);//6
        glVertex2d(tlw-1, tlh-20);//7
        glVertex2d(tlw-2, tlh-25);//8
        glVertex2d(tlw+2, tlh-25);//9
        glVertex2d(tlw+1, tlh-20);//10
        glVertex2d(tlw+2, tlh-20);//11
        glVertex2d(tlw+1, tlh-15);//12
        glVertex2d(tlw+2, tlh-15);//13
        glVertex2d(tlw+1, tlh-10);//14
        glVertex2d(tlw+2, tlh-10);//15
    glEnd();

}
void sky()
{
        //NightBackground-UpperHalf with star and moon
    glColor3ub(6, 0, 43);//DarkBlue background
    glBegin(GL_POLYGON);
    glVertex2d(1.0, 26.0);
    glVertex2d(49,50);
    glVertex2d(51,50);
    glVertex2d(99,26);
    //glColor3ub(0, 16, 40);
    glVertex2d(99,99);
    glVertex2d(1,99);
    glEnd();
    glColor3ub(6, 0, 43);
    glBegin(GL_QUADS);
    glVertex2d(10,95);
    glVertex2d(8,94);
    glVertex2d(10,93);
    glVertex2d(12,94);
    glEnd();
    glColor3ub(251, 252, 234);//OffWhite Moon
    circle(5,9,25,88);
    glColor3ub(6, 0, 43);
    glColor3ub(11, 30, 11);
    circle(24,7,25,50);
    glColor3ub(11, 30, 11);
    circle(14,15,10,50);
}
void road_footpath()
{
    //Green Ground and Black road
    glColor3ub(17, 45, 17);//DarkGreen Ground
    glBegin(GL_POLYGON);
    glVertex2d(1, 1.0);
    glVertex2d(99,1);
    glVertex2d(99,26);
    glVertex2d(51,50);
    glVertex2d(49,50);
    glVertex2d(1,50);
    glEnd();

    glColor3ub(0, 0, 2);//Road
    glBegin(GL_QUADS);
    glVertex2d(25,1);
    glVertex2d(75,1);
    glVertex2d(51,50);
    glVertex2d(49,50);
    glEnd();
    glColor3ub(231, 232, 218);//RoadLine White-Left
    glBegin(GL_QUADS);
    glVertex2d(26,1);
    glVertex2d(29,1);
    glVertex2d(49,50);
    glVertex2d(49,50);
    glEnd();
    glColor3ub(231, 232, 218);//RoadLine White-Right
    glBegin(GL_QUADS);
    glVertex2d(71,1);
    glVertex2d(74,1);
    glVertex2d(51,50);
    glVertex2d(51,50);
    glEnd();
    glColor3ub(235, 255, 17);//RoadLine Yellow_Middle
    glBegin(GL_QUADS);
    glVertex2d(49,1);
    glVertex2d(51,1);
    glVertex2d(50,50);
    glVertex2d(50,50);
    glEnd();

    //Footpath
    glColor3ub(160, 155, 136);//FootPath-Left
    glBegin(GL_QUADS);
    glVertex2d(15,1);
    glVertex2d(25,1);
    glVertex2d(49,50);
    glVertex2d(49,50);
    glEnd();
    glColor3ub(124, 113, 91);
    glBegin(GL_QUADS);
    glVertex2d(23,1);
    glVertex2d(25,1);
    glVertex2d(49,50);
    glVertex2d(49,50);
    glEnd();

    glColor3ub(160, 155, 136);//FootPath-right
    glBegin(GL_QUADS);
    glVertex2d(75,1);
    glVertex2d(85,1);
    glVertex2d(51,50);
    glVertex2d(51,50);
    glEnd();
    glColor3ub(124, 113, 91);
    glBegin(GL_QUADS);
    glVertex2d(75,1);
    glVertex2d(77,1);
    glVertex2d(51,50);
    glVertex2d(51,50);
    glEnd();

}
void borderLine()
{
    //WhiteBorder
    glColor3f(1.0f, 1.0f, 1.0f);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2d(1.0, 1.0);
    glVertex2d(99,1);
    glVertex2d(99,1);
    glVertex2d(99,99);
    glVertex2d(99,99);
    glVertex2d(1,99);
    glVertex2d(1,99);
    glVertex2d(1,1);
    glEnd();
}
void starBlinker()
{
    glColor3ub(6, 0, 43);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2d(50.0, 99.0);
    glColor3ub(0, 16, 40);
    glVertex2d(50,50);
    glEnd();
}

void river()
{
       glColor3ub(36, 51, 94);
    circle(10,5,74,40);
    circle(13,7,82,35);
    circle(10,14,86,30);
    circle(5,15,93,16);
    glBegin(GL_QUADS);
    glVertex2d(95, 1);
    glVertex2d(99,1);
    glVertex2d(99,43);
    glVertex2d(75,40);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2d(59,46);
    glVertex2d(99,1);
    glColor3ub(1, 42, 104);
    glVertex2d(99, 46);

    glEnd();

}
void tree_pack()
{
    // back Row tree
   glColor3ub(22, 58, 22);
    circle(2,1,5.5,49);
    tree(5,90,4,49);

    glColor3ub(22, 58, 22);
    circle(2,1,10.5,49);
    tree(10,89,9,49);

    glColor3ub(22, 58, 22);
    circle(2,1,15.5,49);
    tree(15,88,14,49);

    glColor3ub(22, 58, 22);
    circle(2,1,20.5,49);
    tree(20,87,19,49);

    glColor3ub(22, 58, 22);
    circle(2,1,25.5,49);
    tree(25,86,24,49);

    glColor3ub(22, 58, 22);
    circle(2,1,30.5,49);
    tree(30,85,29,49);

    glColor3ub(22, 58, 22);
    circle(2,1,35.5,49);
    tree(35,84,34,49);

    glColor3ub(22, 58, 22);
    circle(2,1,40.5,49);
    tree(40,83,39,49);

    glColor3ub(22, 58, 22);
    circle(2,1,45.5,49);
    tree(45,82,44,49);
    //footpath into jangle
    glColor3ub(104, 92, 62);
    glBegin(GL_QUADS);
    glVertex2d(1,46);
    glVertex2d(1,43);
    glColor3ub(40, 40, 39);
    glVertex2d(45,43);
    glVertex2d(47,46);
    glEnd();
    glColor3ub(33, 32, 30);
    glBegin(GL_QUADS);
    glVertex2d(1,42);
    glVertex2d(1,43.5);
    //glColor3ub(40, 40, 39);
    glVertex2d(44.5,43.5);
    glVertex2d(43.5,42);
    glEnd();


   //front row tree
     glColor3ub(22, 58, 21);
    circle(2,1,1.5,39);
    tree1(1,80,1,39);

    glColor3ub(22, 58, 21);
    circle(2,1,8.5,39);
    tree1(8,79,7,39);

    glColor3ub(22, 58, 21);
    circle(2,1,13.5,39);
    tree1(13,78,12,39);

    glColor3ub(22, 58, 21);
    circle(2,1,17.5,39);
    tree1(17,77,16,39);

    glColor3ub(22, 58, 21);
    circle(2,1,23.5,39);
    tree1(23,75,22,39);

    glColor3ub(22, 58, 21);
    circle(2,1,27.5,39);
    tree1(27,74,26,39);

    glColor3ub(22, 58, 21);
    circle(2,1,33.5,39);
    tree1(33,73,32,39);

    glColor3ub(22, 58, 21);
    circle(2,1,38.5,39);
    tree1(38,72,37,39);

    glColor3ub(22, 58, 21);
    circle(2,1,5.5,30);
    tree1(5,71,4,30);

    glColor3ub(22, 58, 21);
    circle(2,1,11.5,30);
    tree(11,70,10,30);

    glColor3ub(22, 58, 21);
    circle(2,1,7.5,15);
    tree(7,65,6,15);


    //footpath into jangle
    glColor3ub(104, 92, 62);
    glBegin(GL_QUADS);
    glVertex2d(1,5);
    glVertex2d(1,14);
    glColor3ub(40, 40, 39);
    glVertex2d(27,14);
    glVertex2d(21,5);
    glEnd();
    glColor3ub(33, 32, 30);
    glBegin(GL_QUADS);
    glVertex2d(1,4);
    glVertex2d(1,6);
    //glColor3ub(40, 40, 39);
    glVertex2d(19,6);
    glVertex2d(17,4);
    glEnd();
}
void planeMove(){
pm=pm-.6;
    if(pm<-100)
        pm = 50;
        glutPostRedisplay();
}
void boatMove(){
bm=bm+.1;
    if(bm>+99)
        bm = 0;
        glutPostRedisplay();
}
void blinkerMove(){
sbm=sbm+1.5;
    if(sbm>+99)
        sbm = 0;
        glutPostRedisplay();
}

void carMove(){
        cm=cm-.5;
        if(cm < 0)
        cm = 40;
        glutPostRedisplay();
}
void plane()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(90,90,0);
    glVertex3f(89,89,0);
    glVertex3f(90,89,0);
    glVertex3f(93,89,0);
    glVertex3f(93,90,0);
    glVertex3f(94,91,0);
    glEnd();

    glColor3f(1,1,1);
    circle(.1,.1,90,90);
    glColor3f(0,0,1);
    circle(.1,.1,93,90);
    glColor3f(1,0,0);
    circle(.1,.1,93,89.5);

}
void boat()
{

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(59,45,0);
    glVertex3f(65,45,0);
    glVertex3f(66,48,0);
    glVertex3f(61,48,0);
    glVertex3f(61,51,0);
    glVertex3f(60,51,0);
    glVertex3f(60,48.5,0);
    glVertex3f(58,48,0);
    glEnd();
    glColor3f(1,1,1);
    circle(.1,.1,60,47);
    glColor3f(1,1,1);
    circle(.1,.1,61,47);
    glColor3f(1,1,1);
    circle(.1,.1,62,47);
    glColor3f(1,1,1);
    circle(.1,.1,63,47);
    glColor3f(1,1,1);
    circle(.1,.1,64,47);
    glColor3ub(249, 252, 75);
    circle(.2,.2,61,51);

    glColor3ub(6, 0, 43);
    glBegin(GL_QUADS);
    glVertex2d(40,99);
    glVertex2d(50,60);
    glVertex2d(50,51);
    glVertex2d(41,99);
    glEnd();

}
void blinker()
{

    glColor3ub(6, 0, 43);
    glBegin(GL_QUADS);
    glVertex2d(40,99);
    glVertex2d(50,60);
    glVertex2d(50,51);
    glVertex2d(41,99);
    glEnd();

}

void star(int x, int y)
{
    glColor3ub(244, 247, 247);
    glBegin(GL_QUADS);
    glVertex2d(x,y);
    glVertex2d(x+0.5,y+0.5);
    glVertex2d(x+1,y);
    glVertex2d(x+0.5,y-0.5);
    glEnd();
}
void starPack()
{
    star(80,80);
    star(78,40);
    star(80,65);
    star(78,35);
    star(88,97);
    star(86,37);
    star(70,70);
    star(70,42);
    star(60,60);
    star(40,90);
    star(50,86);
    star(10,95);
    star(13,88);
    star(11,80);
    star(90,84);
    star(88,23);
    star(95,12);
    circle(0.1,0.1, 85,85);
    circle(0.1,0.1, 85,45);
    circle(0.1,0.1, 70,80);
    circle(0.1,0.1, 70,39);
    circle(0.1,0.1, 60,81);
    circle(0.1,0.1, 50,93);
    circle(0.1,0.1, 50,70);
    circle(0.1,0.1, 55,55);
    circle(0.1,0.1, 55,65);
    circle(0.1,0.1, 45,55);
    circle(0.1,0.1, 47,53);
    circle(0.1,0.1, 49,57);
    circle(0.1,0.1, 75,90);
    circle(0.1,0.1, 78,94);
    circle(0.1,0.1, 90,66);
    circle(0.1,0.1, 90,32);
    circle(0.1,0.1, 84,70);
    circle(0.1,0.1, 84,30);
    circle(0.1,0.1, 73,70);
    circle(0.1,0.1, 14,60);
    circle(0.1,0.1, 95,14);
}
void starPackReflect()
{
    star(78,40);
    star(78,35);
    star(86,37);
    star(70,42);
    star(88,23);
    star(95,12);
    circle(0.1,0.1, 85,45);
    circle(0.1,0.1, 70,39);
    circle(0.1,0.1, 90,32);
    circle(0.1,0.1, 84,30);
    circle(0.1,0.1, 95,14);
}
void jetiboat()
{
    //jeti with boat

    boatMove();
    for(int i=0;i<1;i++)
     {

     glPushMatrix();
     glTranslatef(bm+(8*i),0-i,0);
     glColor3ub(160, 155, 136);
    glBegin(GL_QUADS);
    glVertex2d(84,21);
    glVertex2d(92,10);
    glVertex2d(99,10);
    glVertex2d(99,19);
    glEnd();
    glColor3ub(35, 28, 22);
    glBegin(GL_TRIANGLES);
    glVertex2d(84,21);
    glVertex2d(99,23);
    glVertex2d(99,15);
    glEnd();
    glColor3ub(107, 103, 100);
    glBegin(GL_TRIANGLES);
    glVertex2d(85,21);
    glVertex2d(99,22);
    glVertex2d(99,16);
    glEnd();
     glPopMatrix();
     }



    glColor3ub(160, 155, 136);
    glBegin(GL_QUADS);
    glVertex2d(80,5);
    glVertex2d(95,5);
    glColor3ub(7, 3, 0);
    glVertex2d(90,15);
    glVertex2d(75,15);
    glEnd();
    glColor3ub(124, 113, 91);
    glBegin(GL_TRIANGLES);
    glVertex2d(77,5);
    glVertex2d(95,5);
    glVertex2d(95,2);
    glEnd();
}
void car()
{
    glColor3ub(58, 43, 145);
    glBegin(GL_QUADS);
    glVertex2d(47,10);
    glVertex2d(53,10);
    glVertex2d(52,13);
    glVertex2d(48,13);
    glEnd();
    glColor3ub(62, 48, 127);
    glBegin(GL_QUADS);
    glVertex2d(47,10);
    glVertex2d(47,6);
    glVertex2d(53,6);
    glVertex2d(53,10);
    glEnd();
    glColor3ub(193, 62, 58);
    glBegin(GL_QUADS);
    glVertex2d(47.2,7);
    glVertex2d(47.2,2);
    glVertex2d(52.8,2);
    glVertex2d(52.8,7);
    glEnd();
    glColor3ub(249, 252, 75);
    circle(.3,.2,52.6,7);
    glColor3ub(249, 252, 75);
    circle(.3,.2,47.4,7);
    glColor3ub(25, 23, 23);
    glBegin(GL_QUADS);
    glVertex2d(47.4,6.8);
    glVertex2d(47.4,4);
    glVertex2d(52.6,4);
    glVertex2d(52.6,6.8);
    glEnd();
    glColor3ub(249, 249, 247);
    circle(.3,.6,47.5,3.5);
    glColor3ub(249, 249, 247);
    circle(.3,.6,48.2,3.5);
    glColor3ub(249, 249, 247);
    circle(.3,.6,52.3,3.5);
    glColor3ub(249, 249, 247);
    circle(.3,.6,51.6,3.5);

}
void tent()
{
    glColor3ub(35, 104, 60);
    glBegin(GL_TRIANGLES);
    glVertex2d(25,30);
    glVertex2d(20,45);
    glColor3ub(51, 44, 42);
    glVertex2d(15,30);
    glEnd();
    glColor3ub(96, 39, 29);
    glBegin(GL_QUADS);
    glVertex2d(20,45);
    glVertex2d(25,30);
    glColor3ub(51, 44, 42);
    glVertex2d(30,35);
    glVertex2d(25,45);
    glEnd();
    glColor3ub(23, 61, 18);
    glBegin(GL_QUADS);
    glVertex2d(19,38);
    glVertex2d(19,30);
    glVertex2d(21,30);
    glVertex2d(21,38);
    glEnd();

    //fire
    glColor3ub(241, 247, 81);
    circle(1.5,1.5,17,25);
    glColor3ub(241, 247, 81);
    glBegin(GL_TRIANGLES);
    glVertex2d(17,25);
    glVertex2d(18,25);
    glColor3ub(244, 88, 70);
    glVertex2d(17.5,30);
    glEnd();
    glColor3ub(241, 247, 81);
    glBegin(GL_TRIANGLES);
    glVertex2d(16,25);
    glVertex2d(17,25);
    glColor3ub(244, 88, 70);
    glVertex2d(16.5,30);
    glEnd();
    glColor3ub(241, 247, 81);
    glBegin(GL_TRIANGLES);
    glVertex2d(16.5,25);
    glVertex2d(17.5,25);
    glColor3ub(244, 88, 70);
    glVertex2d(17,33);
    glEnd();
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    delay();
    sky();
    starPack();
    road_footpath();
    river();
    starPackReflect();
        boatMove();
    for(int i=0;i<1;i++)
     {

     glPushMatrix();
     glTranslatef(bm+(8*i),0-i,0);
     boat();
     glPopMatrix();
    }
    blinkerMove();
    for(int i=0;i<1;i++)
     {

     glPushMatrix();
     glTranslatef(sbm+(8*i),0-i,0);
     blinker();
     glPopMatrix();
    }
    planeMove();
     for(int i=0;i<1;i++)
     {

     glPushMatrix();
     glTranslatef(pm+(8*i),0-i,0);
     plane();
     glPopMatrix();

    }

    tree_pack();



    carMove();
    for(int i=0;i<1;i++)
     {

     glPushMatrix();
     glTranslatef(0,cm+(8*i),0);
     car();
     glPopMatrix();

    }

    tent();
    jetiboat();
    borderLine();
	glFlush();
}

void init(void)
{
	glClearColor (0, 0, 0, 0);
	glOrtho(0, 100.0, 0, 100.0, 0, 100.0);
}


void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				pm -=1;
				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				pm +=1;
				glutPostRedisplay();
				break;
	  default:
			break;
	}
}



int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1200, 600);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Night Mode: Cox's Bazar–Tekhnaf Marine Drive");
	init();
	glutDisplayFunc(display);
//	glutSpecialFunc(spe_key);//up,down,left......
	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}

