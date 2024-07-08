#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

GLfloat	tx	=  0.0;
GLfloat	ty	=  0.0;
GLfloat	tx1	=  0.0;
GLfloat	ty1	=  0.0;

static float	x	=  0.0;
static float	y	= 0.0;

static float	yx	=  0.0;
static float	yy	= 0.0;

static float	car_run	=  0.0;

static float	cld	=  140.0;
static float	cld1	= -90.0;
static float	cld2	= -127.0;
static float	cld3	= -140.0;
static float   apple=0.0;
 void init()

{
    glClearColor(1.0f,1.0f,1.0f,0.0f);
    glOrtho(0,100,-10,100,0,100);

}

void delay()
{
    for(int i=0;i<100000000;i++);
}
void cloud_move(){
    //if(cld>=0|| cld<0)
    cld=cld+.5;
    if(cld>300)
        cld = -70;

    //if(cld1>=0|| cld1<0)
    cld1=cld1+.5;
    if(cld1>300)
        cld1 = -70;

    //if(cld2>=0|| cld2<0)
    cld2=cld2+.3;
    if(cld2>300)
        cld2 = -70;

   // if(cld3>=0|| cld3<0)
    cld3=cld3+.4;
    if(cld3>300)
        cld3 = -70;

        glutPostRedisplay();
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

void sky(){

 glColor3f(1.0, 1.0, 1.000);
 cloud_move();
 circle(4,3,5,92);
     circle(4,3,10,92);
      circle(4,3,15,92);
       circle(4,3,7,96);
        circle(4,3,12,96);

     circle(4,3,35,90);
     circle(4,3,40,90);
      circle(4,3,45,90);
       circle(4,3,37,94);
        circle(4,3,42,95);

}

void sky2(){

        glPushMatrix();
        glTranslatef(cld,1,0);
        sky();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(cld1,-2,0);
        sky();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(cld2,2,0);
        sky();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(cld3,0,0);
        sky();
        glPopMatrix();

}

void red_bird()
{
    glColor3ub(20, 48, 206);
        circle(1.4,1,51,33);
         glColor3ub(206, 61, 17);
        circle(0.6,0.7,49.7,33);


          //eye
           glColor3ub(0,0,0);
          circle(0.2,0.2,49.7,33);

          //lip
           glColor3ub(206, 69, 19);
     glBegin(GL_TRIANGLES);

glVertex2d(48.3,31);


 glColor3ub(206, 46, 18);
  glVertex2d(49.2,33.2);
      glVertex2d(49.2,32.2);
    glEnd();


          //pakha

     glColor3ub(206, 69, 19);
     glBegin(GL_QUADS);

      glVertex2d(50.5,34);
      glVertex2d(51.5,34);
       glColor3ub(20, 48, 206);
      glVertex2d(53,35.5);
      glVertex2d(49,35.5);
    glEnd();
    //tail
    glColor3ub(206, 69, 19);
     glBegin(GL_TRIANGLES);

      glVertex2d(54,35.5);
      glVertex2d(54,33);
 glColor3ub(20, 48, 206);
      glVertex2d(52,33);


    glEnd();

}
void yellow_bird()
{
    glColor3ub(236, 255, 94);
        circle(1.4,1,5,75);
         glColor3ub(60, 229, 13);
        circle(0.6,0.7,7,75);


          //eye
           glColor3ub(0,0,0);
          circle(0.2,0.2,7,75);

          //lip
           glColor3ub(60, 229, 13);
     glBegin(GL_TRIANGLES);

      glVertex2d(7,74.8);
      glVertex2d(7,75.2);
 glColor3ub(206, 46, 18);
      glVertex2d(8,73.7);
    glEnd();


          //pakha

     glColor3ub(242, 234, 19);
     glBegin(GL_QUADS);

      glVertex2d(4.5,75.5);
      glVertex2d(5.5,75.5);
       glColor3ub(60, 229, 13);
      glVertex2d(6.5,77);
      glVertex2d(3.5,77);
    glEnd();
    //tail
    glColor3ub(60, 229, 13);
     glBegin(GL_TRIANGLES);

      glVertex2d(2,78);
      glVertex2d(2,75);
 glColor3ub(242, 234, 19);
      glVertex2d(4,75);


    glEnd();



    //2
        glColor3ub(229, 4, 29);
        circle(1.4,1,25,75);
         glColor3ub(242, 234, 19);
        circle(0.6,0.7,27,75);


          //eye
           glColor3ub(0,0,0);
          circle(0.2,0.2,27,75);

          //lip
           glColor3ub(0,0,0);
     glBegin(GL_TRIANGLES);

      glVertex2d(27,74.8);
      glVertex2d(27,75.2);
 glColor3ub(229, 4, 29);
      glVertex2d(28,73.7);
    glEnd();


          //pakha

     glColor3ub(242, 234, 19);
     glBegin(GL_QUADS);

      glVertex2d(24.5,75.5);
      glVertex2d(25.5,75.5);
       glColor3ub(229, 4, 29);
      glVertex2d(26.5,77);
      glVertex2d(23.5,77);
    glEnd();
    //tail
    glColor3ub(60, 229, 13);
     glBegin(GL_TRIANGLES);

      glVertex2d(22,78);
      glVertex2d(22,75);
 glColor3ub(229, 4, 29);
      glVertex2d(24,75);


    glEnd();


}
void red_bird_fly()
{
    x=x-1;
    if (x<1)
        //x=20;
    glutPostRedisplay();
    y=y+.8;
    if (y<1)
        //y=20;
    glutPostRedisplay();
}

void apple_fall()
{
    apple=apple-1;
    if (apple<1)
        //apple=0;

    glutPostRedisplay();
}
void yellow_bird_fly()
{
    yx=yx+1;
    if (yx>100)
        yx=0;
    glutPostRedisplay();

}

void car_Run()
{
    car_run=car_run+1;
    if (car_run>100)
        car_run=0;
    glutPostRedisplay();
}
void sky1()
{
     glColor3ub(14, 138, 239);
     glBegin(GL_QUADS);

      glVertex2d(0,50);
      glVertex2d(100,50);
      glVertex2d(100,100);
      glVertex2d(0,100);
    glEnd();
        glColor3ub(15, 158, 37);

    circle(4,6,1,51);
     circle(4,5,4,51);
      circle(4,5,8,51);
       circle(4,3,12,51);
        circle(4,6,14,51);
         circle(4,3,18,51);
          circle(4,6,20,51);
           circle(4,6,1,51);
     circle(4,5,24,51);

       circle(4,3,78,51);
        circle(4,6,84,51);
         circle(4,3,88,51);
          circle(4,6,100,51);
           circle(4,3,80,51);
        circle(4,6,80,51);
         circle(4,3,70,51);
          circle(4,6,100,51);
           circle(4,6,65,51);
         circle(4,3,67,51);

          circle(4,6,100,51);
}
void fountain()
{
    //lower round

        glColor3ub(196, 103, 3);
        circle(13,12,47,18);

     glColor3ub(0, 208, 255);
        circle(10,9,47,18);

        //lower stand
    glColor3ub(119, 26, 68);
       circle(2,2,47,24);
       circle(2,2,47,22);
       circle(2.5,2,47,20);
        circle(3,2,47,18);

     //middle circle
        glColor3ub(196, 103, 3);
        circle(7,6,47,29);
           glColor3ub(0, 208, 255);
        circle(5,4,47,29);



        //upper stand
      glColor3ub(119, 26, 68);
       circle(1.5,1,47,33);

     glColor3ub(119, 26, 68);
       circle(1.5,1.5,47,32);

      glColor3ub(119, 26, 68);
       circle(1.8,1.5,47,31);


   glColor3ub(119, 26, 68);
       circle(2,1.5,47,29);


     //upper circle
      glColor3ub(196, 103, 3);
        circle(4,3,47,36);

          glColor3ub(0, 208, 255);
        circle(2,1,47,36);




}
void home()
{
    //lowerpart
   glColor3ub(76, 201, 34);
     glBegin(GL_QUADS);

      glVertex2d(0,0);
      glVertex2d(100,0);
      glVertex2d(100,50);
      glVertex2d(0,50);
    glEnd();

//cloud



  glColor3ub(249, 255, 254);

    circle(3,2,5,82);
     circle(3,2,10,82);
      circle(3,2,15,82);
       circle(3,2,7,84);
        circle(3,2,12,84);

         circle(3,2,38,78);
     circle(3,2,43,78);
      circle(3,2,48,78);
       circle(3,2,40,80);
        circle(3,2,45,81);




//body
     glColor3ub(67, 73, 219);
     glBegin(GL_QUADS);

      glVertex2d(35,40);
      glVertex2d(55,40);
      glVertex2d(55,55);
      glVertex2d(35,55);
    glEnd();


 glColor3ub(68, 39, 62);
     glBegin(GL_QUADS);

      glVertex2d(36,40);
      glVertex2d(54,40);
      glVertex2d(54,52);
      glVertex2d(36,52);
    glEnd();


       glColor3ub(178, 23, 160);
     glBegin(GL_QUADS);

      glVertex2d(35,50);
      glVertex2d(55,50);
      glVertex2d(55,55);
      glVertex2d(35,55);
    glEnd();


    //door


       glColor3ub(135, 63, 120);
     glBegin(GL_POLYGON);

      glVertex2d(43,40);
      glVertex2d(47,40);
      glVertex2d(47,48);
      glVertex2d(46,49);
       glVertex2d(44,49);
      glVertex2d(43,48);

    glEnd();

 glColor3ub(96, 229, 216);
     glBegin(GL_QUADS);

      glVertex2d(38,40);
      glVertex2d(42,40);
      glVertex2d(42,49);
      glVertex2d(38,49);
    glEnd();


    glColor3ub(96, 229, 216);
     glBegin(GL_QUADS);

      glVertex2d(48,40);
      glVertex2d(52,40);
      glVertex2d(52,49);
      glVertex2d(48,49);
    glEnd();


     glColor3ub(96, 229, 216);
     glBegin(GL_QUADS);

      glVertex2d(48,40);
      glVertex2d(52,40);
      glVertex2d(52,49);
      glVertex2d(48,49);
    glEnd();


     glColor3ub(239, 136, 193);
     glBegin(GL_QUADS);

      glVertex2d(48,49);
      glVertex2d(52,49);
      glVertex2d(53,50);
      glVertex2d(47,50);
    glEnd();





//m left

     glColor3ub(239, 136, 193);
     glBegin(GL_QUADS);

      glVertex2d(42,49);
      glVertex2d(43,50);
      glVertex2d(37,50);
      glVertex2d(38,49);
    glEnd();

//left
       glColor3ub(239, 136, 193);
     glBegin(GL_QUADS);

      glVertex2d(30,40);
      glVertex2d(35,40);
      glVertex2d(35,56);
      glVertex2d(30,56);

    glEnd();

      glColor3ub(162, 145, 183);
     glBegin(GL_QUADS);

      glVertex2d(35,56);
      glVertex2d(36,57);
      glVertex2d(29,57);
      glVertex2d(30,56);

       glEnd();


    //back left
      glColor3ub(224, 167, 229);
     glBegin(GL_QUADS);

      glVertex2d(37,55);
      glVertex2d(40,55);
      glVertex2d(40,58);
      glVertex2d(37,58);

       glEnd();
         glColor3ub(219, 74, 16);
     glBegin(GL_TRIANGLES);

      glVertex2d(36,58);
      glVertex2d(41,58);
      glColor3ub(100, 78, 17);
      glVertex2d(39,67);
  glEnd();

        //back right
      glColor3ub(224, 167, 229);
     glBegin(GL_QUADS);

      glVertex2d(50,55);
      glVertex2d(53,55);
      glVertex2d(53,58);
      glVertex2d(50,58);
      glEnd();

       glColor3ub(219, 74, 16);
     glBegin(GL_TRIANGLES);

      glVertex2d(49,58);
      glVertex2d(54,58);
      glColor3ub(100, 78, 17);
      glVertex2d(52,67);


       glEnd();
        glColor3ub(247, 14, 227);
       glBegin(GL_TRIANGLES);

      glVertex2d(29,57);
      glVertex2d(36,57);
         glColor3ub(130, 14, 195);
      glVertex2d(33,68);

    glEnd();
    //window
      glColor3ub(68, 53, 61);
     glBegin(GL_QUADS);

      glVertex2d(31,51);
      glVertex2d(34,51);
      glVertex2d(34,55);
      glVertex2d(31,55);

    glEnd();

    //right
   glColor3ub(239, 136, 193);
     glBegin(GL_QUADS);

      glVertex2d(55,40);
      glVertex2d(60,40);
      glVertex2d(60,56);
      glVertex2d(55,56);
    glEnd();

    glColor3ub(147, 72, 114);
     glBegin(GL_QUADS);

      glVertex2d(60,56);
      glVertex2d(61,57);
      glVertex2d(54,57);
      glVertex2d(55,56);
    glEnd();

 glColor3ub(247, 14, 227);
     glBegin(GL_TRIANGLES);

      glVertex2d(54,57);
      glVertex2d(61,57);
        glColor3ub(130, 14, 195);
      glVertex2d(58,68);

    glEnd();

  //window
      glColor3ub(68, 53, 61);
     glBegin(GL_QUADS);

      glVertex2d(56,51);
      glVertex2d(59,51);
      glVertex2d(59,55);
      glVertex2d(56,55);

    glEnd();



    //middle

      glColor3ub(117, 180, 183);
     glBegin(GL_QUADS);

      glVertex2d(43,50);
      glVertex2d(47,50);
      glVertex2d(47,53);
      glVertex2d(43,53);
    glEnd();

      glColor3ub(220, 173, 221);
     glBegin(GL_QUADS);

      glVertex2d(43,53);
      glVertex2d(47,53);
      glVertex2d(48,54);
      glVertex2d(42,54);
    glEnd();

    //top

      glColor3ub(247, 14, 227);
     glBegin(GL_TRIANGLES);

      glVertex2d(42,54);
      glVertex2d(48,54);
     glColor3ub(130, 14, 195);
      glVertex2d(45,59);

    glEnd();

     glColor3ub(45, 56, 58);
     glBegin(GL_QUADS);

      glVertex2d(44,51);
      glVertex2d(44.5,51);
      glVertex2d(44.5,52);
      glVertex2d(44,52);
    glEnd();



      glColor3ub(45, 56, 58);
     glBegin(GL_QUADS);

      glVertex2d(45,51);
      glVertex2d(45.5,51);
      glVertex2d(45.5,52);
      glVertex2d(45,52);
    glEnd();

      glColor3ub(45, 56, 58);
     glBegin(GL_QUADS);

      glVertex2d(46,51);
      glVertex2d(46.5,51);
      glVertex2d(46.5,52);
      glVertex2d(46,52);
    glEnd();


     glColor3ub(234, 202, 107);
     glBegin(GL_QUADS);

      glVertex2d(42,55);
      glVertex2d(48,55);
      glVertex2d(48,64);
      glVertex2d(42,64);
    glEnd();

     glColor3ub(163, 119, 159);
     glBegin(GL_QUADS);

      glVertex2d(42,58);
      glVertex2d(48,58);
      glVertex2d(49,60);
      glVertex2d(41,60);
    glEnd();
//window
     glColor3ub(56, 51, 55);
     glBegin(GL_QUADS);

      glVertex2d(43,60);
      glVertex2d(44.5,60);
      glVertex2d(44.5,63);
      glVertex2d(43,63);
    glEnd();


   glColor3ub(56, 51, 55);
     glBegin(GL_QUADS);

      glVertex2d(45.5,60);
      glVertex2d(47,60);
      glVertex2d(47,63);
      glVertex2d(45.5,63);
    glEnd();


    //top

      glColor3ub(247, 14, 227);
     glBegin(GL_TRIANGLES);

      glVertex2d(42,54);
      glVertex2d(48,54);
      glColor3ub(100, 14, 190);
      glVertex2d(45,59);

    glEnd();

    glColor3ub(206, 51, 136);
     glBegin(GL_TRIANGLES);

      glVertex2d(41,64);
      glVertex2d(49,64);

    glColor3ub(93, 50, 95);
      glVertex2d(45.5,78);

    glEnd();
  //shiri
     glColor3ub(196, 190, 195);
     glBegin(GL_QUADS);

      glVertex2d(30,40);
      glVertex2d(27,38);
      glVertex2d(63,38);
      glVertex2d(60,40);
    glEnd();


         glColor3ub(88, 91, 96);
     glBegin(GL_QUADS);

      glVertex2d(27,38);
      glVertex2d(27,36);
      glVertex2d(63,36);
      glVertex2d(63,38);
    glEnd();



         glColor3ub(196, 190, 195);
     glBegin(GL_QUADS);

      glVertex2d(27,36);
      glVertex2d(24,35);
      glVertex2d(66,35);
      glVertex2d(63,36);
    glEnd();




         glColor3ub(88, 91, 96);
     glBegin(GL_QUADS);

      glVertex2d(30,35);
      glVertex2d(24,32);
      glVertex2d(66,32);
      glVertex2d(66,35);
    glEnd();


     glColor3ub(102, 98, 101);
     glBegin(GL_QUADS);

      glVertex2d(24,35);
       glVertex2d(24,32);
      glVertex2d(66,32);
    glVertex2d(66,35);

 glColor3ub(70, 72, 76);
     glBegin(GL_QUADS);

      glVertex2d(24,32);
      glVertex2d(8,0);
      glVertex2d(88,0);
      glVertex2d(66,32);
    glEnd();


//door lock
glColor3ub(163,95,0);
circle(0.9,0.9,45,44);
glColor3ub(135, 63, 120);
circle(0.8,0.9,45,45);
 //line
     glColor3ub(0,0,0);
     glBegin(GL_LINES);
      glVertex2d(45,40);
      glVertex2d(45,49);
      glEnd();
}
void sun()
{
    //cloud with sun

      glColor3ub(224, 71, 0);

    circle(4,4,85,80);



 glColor3ub(249, 255, 254);
         circle(4,3,80,75);
     circle(4,3,85,75);
      circle(4,3,90,75);
       circle(4,3,82,77);
        circle(4,3,92,78);

}



void tree()
{
    //tree



 glColor3ub(117, 69, 10);
     glBegin(GL_TRIANGLES);

      glVertex2d(5,30);
      glVertex2d(9,30);
      glVertex2d(7,65);

    glEnd();


    //leaf


      glColor3ub(54, 201, 56);

    circle(4,7,3,65);
     circle(4,5,5,55);
      circle(4,3,7,62);
       circle(4,5,10,62);
        circle(4,6,8,66);

         circle(4,4,4,61);
     circle(4,3,5,60);
      circle(4,3,7,62);
       circle(4,5,3,67);

//apple
          glColor3ub(234, 7, 7);

    circle(0.5,1,3,68);

      circle(0.5,1,6,67);
       circle(0.5,1,9,68);
    circle(0.5,1,0,67);
    circle(0.5,1,2,65);
     circle(0.5,1,5,64);
      circle(0.5,1,10,65);
       circle(0.5,1,7,64);
        circle(0.5,1,3,61);
         circle(0.5,1,6,60);
          circle(0.5,1,8,61);
           circle(0.5,1,11,60);
            circle(0.5,1,5,56);
             circle(0.5,1,7,57);
               circle(0.5,1,8,56);
                circle(0.5,1,3,56);
                  circle(0.5,1,4,53);

apple_fall();
   for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(0,apple-1,0);
      circle(0.5,1,10,65);
      circle(0.5,1,5,56);
       glPopMatrix();
   }



//tree
  glColor3ub(63, 63, 63);
     glBegin(GL_TRIANGLES);

      glVertex2d(68,46);
      glVertex2d(70,46);
      glVertex2d(69,80);

    glEnd();
//leaf

 glColor3ub(19, 163, 45);
     glBegin(GL_TRIANGLES);

      glVertex2d(62,70);
      glVertex2d(76,70);
      glVertex2d(69,80);

    glEnd();

 glColor3ub(19, 163, 45);
     glBegin(GL_TRIANGLES);

      glVertex2d(62,60);
      glVertex2d(76,60);
      glVertex2d(69,75);

    glEnd();

     glColor3ub(19, 163, 45);
     glBegin(GL_TRIANGLES);

      glVertex2d(62,49);
      glVertex2d(76,49);
      glVertex2d(69,65);

    glEnd();



//tree2
     glColor3ub(63, 63, 63);
     glBegin(GL_TRIANGLES);

      glVertex2d(91,46);
      glVertex2d(93,46);
      glVertex2d(92,80);

    glEnd();

    //leaf

     glColor3ub(19, 163, 45);
     glBegin(GL_TRIANGLES);

      glVertex2d(86,70);
      glVertex2d(97,70);
      glVertex2d(92,80);

    glEnd();


     glColor3ub(19, 163, 45);
     glBegin(GL_TRIANGLES);

      glVertex2d(86,60);
      glVertex2d(97,60);
      glVertex2d(92,75);

    glEnd();

      glColor3ub(19, 163, 45);
     glBegin(GL_TRIANGLES);

      glVertex2d(86,49);
      glVertex2d(97,49);
      glVertex2d(92,65);

    glEnd();




}
void pond()
{
            //pond


    glColor3ub(63, 63, 63);
     glBegin(GL_QUADS);
      glVertex2d(75,30);
      glVertex2d(100,30);
      glVertex2d(95,43);
      glVertex2d(61,44);
    glEnd();
  glColor3ub(0, 208, 255);
     glBegin(GL_QUADS);
      glVertex2d(75,30);
      glVertex2d(100,30);
      glVertex2d(95,42);
      glVertex2d(63,42);
    glEnd();

}
void piler()
{
                //piller left
glColor3ub(165, 6, 27);
     glBegin(GL_QUADS);
      glVertex2d(11,18);
      glVertex2d(17,18);
      glVertex2d(17,45);
      glVertex2d(11,45);
    glEnd();
      //upper
         glColor3ub(124, 6, 115);
        circle(5,4,14,45);
  glColor3ub(155, 29, 145);
        circle(4,3,14,48);

    glColor3ub(247, 252, 251);
        circle(3,6,14,55);



//piller root
 glColor3ub(112, 6, 32);
        circle(6,6,14,15);
  glColor3ub(155, 29, 145);
        circle(5,5,14,18);

    glColor3ub(165, 6, 27);
        circle(4,4,14,21);



  //piller Right
glColor3ub(165, 6, 27);
     glBegin(GL_QUADS);
      glVertex2d(75,20);
      glVertex2d(81,20);
      glVertex2d(81,44);
      glVertex2d(75,44);
    glEnd();


      //piller root
  glColor3ub(112, 6, 32);
        circle(6,6,78,15);

        glColor3ub(155, 29, 145);
        circle(5,5,78,18);

        glColor3ub(165, 6, 27);
        circle(4,4,78,21);

      //up
        glColor3ub(124, 6, 115);
        circle(5,4,78,45);

        glColor3ub(155, 29, 145);
        circle(4,3,78,48);

        glColor3ub(247, 252, 251);
        circle(3,6,78,55);


}
void wall()
{
    //left side
   glColor3ub(114, 4, 74);
     glBegin(GL_QUADS);
      glVertex2d(0,30);
      glVertex2d(0,10);
      glVertex2d(15,10);
      glVertex2d(15,30);
    glEnd();
    glColor3ub(114, 4, 74);
     glBegin(GL_QUADS);
      glVertex2d(15,30);
      glVertex2d(15,10);
      glVertex2d(24,32);
      glVertex2d(24,37);
    glEnd();



    //right side
   glColor3ub(114, 4, 74);
     glBegin(GL_QUADS);
      glVertex2d(75,30);
      glVertex2d(75,15);
      glVertex2d(100,15);
      glVertex2d(100,30);
    glEnd();
    glColor3ub(114, 4, 74);
     glBegin(GL_QUADS);
      glVertex2d(75,30);
      glVertex2d(75,15);
      glVertex2d(64,32);
      glVertex2d(64,37);
    glEnd();

        glColor3ub(70, 72, 76);
     glBegin(GL_QUADS);
      glVertex2d(0,-10);
      glVertex2d(100,-10);
      glVertex2d(100,15);
      glVertex2d(0,15);
    glEnd();
}

void car()
{

    //cars



	glPushMatrix();//static part static thakbe
    glColor3f(1.0, 0.0, 0.5);

    glTranslatef(tx,ty,0);
    glBegin(GL_QUADS);
        glVertex2d(8.0,3.0);
        glVertex2d(31.0, 3.0);
        glVertex2d(31.0, 8.0);
        glVertex2d(8.0,8.0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(13.0,12.0);
        glVertex2d(11.0,8.0);
        glVertex2d(28.0, 8.0);
        glVertex2d(26.0, 12.0);
    glEnd();
     glColor3f(0.0f,0.0f,1.0f);
     glBegin(GL_QUADS);
        glVertex2d(14.0,11.0);
        glVertex2d(12.0,7.0);
        glVertex2d(27.0, 7.0);
        glVertex2d(25.0, 11.0);
    glEnd();
    glColor3f(1.0f,0.0f,0.5f);
     glBegin(GL_QUADS);
        glVertex2d(19.0,7.0);
        glVertex2d(21.0,7.0);
        glVertex2d(21.0, 11.0);
        glVertex2d(19.0, 11.0);
    glEnd();
     glColor3f(0.0f,0.0f,0.0f);
    circle(2.5,2.5,14,4);
    circle(2.5,2.5,24,4);

    glColor3ub(247, 244, 245);
    circle(1,1,14,4);
    circle(1,1,24,4);
    //circle(4,4);
    glPopMatrix();
}

void myDisplay()
{   delay();

    glClear(GL_COLOR_BUFFER_BIT);
     glColor3f(1.0f,1.0f,1.0f);


    sky1();
    home();
     sun();
     tree();
    pond();
    wall();


    piler();
    fountain();

   red_bird_fly();
   for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(x+i,y+1,0);
       red_bird();
       glPopMatrix();
   }

   yellow_bird_fly();
   for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(yx+i,0,0);
       yellow_bird();
       glPopMatrix();
   }


//road
glColor3ub(22, 21, 21);
     glBegin(GL_QUADS);
      glVertex2d(0,-10);
      glVertex2d(100,-10);
      glVertex2d(100,5);
      glVertex2d(0,5);
    glEnd();
    glColor3ub(252, 249, 249);
    glBegin(GL_LINES);
    glVertex2d(0.0,0);
    glVertex2d(100.0,0);
    glEnd();

    car_Run();
   for(int i=0; i<1; i++)
   {
       glPushMatrix();
       glTranslatef(car_run+i,0,0);
       car();
       glPopMatrix();
   }

    sky2();
    glFlush();

}

void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				tx -=1;
				//tx1-=5;
				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				tx +=1;
				//tx1+=5;
				glutPostRedisplay();
				break;

	  default:
			break;
	}
}
int main()
{
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(1280,720);
glutInitWindowPosition(0,0);
glutCreateWindow("Sohana's Castle");
init();
glutDisplayFunc(myDisplay);
//glutSpecialFunc(spe_key);
glutMainLoop();
return 0;
}
