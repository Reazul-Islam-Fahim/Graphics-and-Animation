/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include<windows.h>
#ifdef __APPLE__
//#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>

void init()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(0,1366,0,650,0,650);
}

static float	tx	=  0.0;
static float	ty	=  0.0;

static float	tx1	=  0.0;
static float	ty1	=  0.0;
float p=0;
float q=0;
float t=0;

//float p=-2.3;
void DrawCircle(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}



void myDisplay()

{
    if(t==1)
    {
     if(p>=-20)
     p=p-0.02;

  else{
        p=0;
        p=p+0.05;
  }}
if(t==1)
{
  if(q>=-2)
  {
      q=q-0.8;
  }
  else if(q<20)
  {
      q=q+0.8;
  }
}


    glutPostRedisplay();



    glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.31, 0.74, 0.95);

    glBegin(GL_POLYGON);
    glVertex2i(0,240);
glVertex2i(1365,240);
glVertex2i(1365,650);
glVertex2i(0,650);
glEnd();

glColor3f(0.98, 1.0, 0.99);
glBegin(GL_POLYGON);

glVertex2i(216,614);
glVertex2i(212,598);
glVertex2i(217,594);
glVertex2i(223,592);
glVertex2i(230,589);
glVertex2i(239,589);
glVertex2i(248,589);
glVertex2i(257,589);
glVertex2i(267,591);
glVertex2i(273,594);
glVertex2i(279,593);
glVertex2i(288,589);
glVertex2i(301,587);
glVertex2i(309,589);
glVertex2i(317,591);
glVertex2i(324,592);
glVertex2i(330,596);
glVertex2i(336,600);
glVertex2i(337,607);
glVertex2i(334,613);
glVertex2i(327,619);
glVertex2i(320,619);
glVertex2i(312,620);
glVertex2i(303,623);
glVertex2i(301,630);
glVertex2i(295,635);
glVertex2i(289,636);
glVertex2i(281,637);
glVertex2i(270,638);
glVertex2i(265,636);
glVertex2i(260,635);
glVertex2i(256,631);
glVertex2i(251,631);
glVertex2i(248,636);
glVertex2i(241,640);
glVertex2i(236,644);
glVertex2i(227,644);
glVertex2i(217,644);
glVertex2i(207,644);
glVertex2i(199,642);
glVertex2i(188,638);
glVertex2i(175,629);
glVertex2i(168,630);
glVertex2i(160,630);
glVertex2i(153,627);
glVertex2i(145,622);
glVertex2i(145,617);
glVertex2i(137,617);
glVertex2i(127,616);
glVertex2i(114,609);
glVertex2i(114,604);
glVertex2i(117,600);
glVertex2i(121,597);
glVertex2i(130,593);
glVertex2i(143,593);
glVertex2i(155,595);
glVertex2i(161,598);
glVertex2i(170,595);
glVertex2i(179,591);
glVertex2i(190,591);
glVertex2i(197,593);
glVertex2i(203,594);
glVertex2i(212,598);

glEnd();

glColor3f(0.98, 1.0, 0.99);
glBegin(GL_POLYGON);
glVertex2i(718,599);
glVertex2i(714,567);
glVertex2i(721,562);
glVertex2i(727,560);
glVertex2i(733,557);
glVertex2i(740,556);
glVertex2i(748,555);
glVertex2i(756,553);
glVertex2i(764,553);
glVertex2i(772,553);
glVertex2i(779,553);
glVertex2i(786,555);
glVertex2i(795,558);
glVertex2i(806,562);
glVertex2i(811,559);
glVertex2i(817,557);
glVertex2i(823,555);
glVertex2i(830,553);
glVertex2i(840,552);
glVertex2i(850,551);
glVertex2i(860,554);
glVertex2i(869,554);
glVertex2i(877,557);
glVertex2i(886,561);
glVertex2i(894,565);
glVertex2i(898,568);
glVertex2i(902,573);
glVertex2i(904,577);
glVertex2i(904,586);
glVertex2i(898,591);
glVertex2i(892,595);
glVertex2i(887,597);
glVertex2i(881,598);
glVertex2i(872,601);
glVertex2i(867,602);
glVertex2i(862,602);
glVertex2i(855,602);
glVertex2i(850,602);
glVertex2i(847,605);
glVertex2i(848,610);
glVertex2i(847,612);
glVertex2i(843,617);
glVertex2i(837,620);
glVertex2i(829,622);
glVertex2i(822,624);
glVertex2i(815,624);
glVertex2i(805,624);
glVertex2i(795,624);
glVertex2i(785,622);
glVertex2i(778,622);
glVertex2i(773,618);
glVertex2i(768,621);
glVertex2i(764,624);
glVertex2i(759,627);
glVertex2i(753,631);
glVertex2i(748,633);
glVertex2i(741,636);
glVertex2i(734,636);
glVertex2i(724,636);
glVertex2i(714,636);
glVertex2i(702,633);
glVertex2i(692,632);
glVertex2i(683,629);
glVertex2i(673,625);
glVertex2i(666,621);
glVertex2i(657,617);
glVertex2i(648,617);
glVertex2i(637,617);
glVertex2i(631,616);
glVertex2i(622,614);
glVertex2i(616,611);
glVertex2i(612,608);
glVertex2i(608,599);
glVertex2i(597,599);
glVertex2i(586,598);
glVertex2i(577,594);
glVertex2i(569,589);
glVertex2i(564,584);
glVertex2i(562,574);
glVertex2i(568,568);
glVertex2i(578,563);
glVertex2i(587,562);
glVertex2i(599,560);
glVertex2i(609,561);
glVertex2i(619,561);
glVertex2i(629,564);
glVertex2i(636,567);
glVertex2i(640,568);
glVertex2i(646,565);
glVertex2i(655,562);
glVertex2i(667,559);
glVertex2i(677,559);
glVertex2i(688,559);
glVertex2i(697,561);
glVertex2i(706,564);
glVertex2i(714,567);

glEnd();

glColor3f(0.46, 0.81, 0.95);
glBegin(GL_POLYGON);
glVertex2i(1156,441);
glVertex2i(1156,305);
glVertex2i(1365,310);
glVertex2i(1365,448);
glVertex2i(1346,462);
glVertex2i(1349,468);
glVertex2i(1353,473);
glVertex2i(1351,482);
glVertex2i(1338,485);
glVertex2i(1334,486);
glVertex2i(1335,492);
glVertex2i(1334,497);
glVertex2i(1330,499);
glVertex2i(1325,502);
glVertex2i(1319,503);
glVertex2i(1311,503);
glVertex2i(1305,503);
glVertex2i(1306,509);
glVertex2i(1305,514);
glVertex2i(1301,518);
glVertex2i(1295,521);
glVertex2i(1288,525);
glVertex2i(1279,526);
glVertex2i(1272,526);
glVertex2i(1261,526);
glVertex2i(1252,524);
glVertex2i(1241,520);
glVertex2i(1232,517);
glVertex2i(1230,512);
glVertex2i(1228,504);
glVertex2i(1223,503);
glVertex2i(1218,505);
glVertex2i(1210,505);
glVertex2i(1201,504);
glVertex2i(1194,499);
glVertex2i(1189,491);
glVertex2i(1146,490);
glVertex2i(1142,498);
glVertex2i(1134,501);
glVertex2i(1124,504);
glVertex2i(1114,504);
glVertex2i(1104,502);
glVertex2i(1098,501);
glVertex2i(1095,508);
glVertex2i(1091,513);
glVertex2i(1084,517);
glVertex2i(1078,520);
glVertex2i(1069,523);
glVertex2i(1058,524);
glVertex2i(1046,522);
glVertex2i(1038,520);
glVertex2i(1030,516);
glVertex2i(1024,523);
glVertex2i(1009,531);
glVertex2i(998,532);
glVertex2i(994,535);
glVertex2i(992,541);
glVertex2i(984,544);
glVertex2i(977,545);
glVertex2i(971,545);
glVertex2i(963,544);
glVertex2i(954,537);
glVertex2i(942,532);
glVertex2i(934,529);
glVertex2i(926,525);
glVertex2i(920,522);
glVertex2i(911,525);
glVertex2i(904,527);
glVertex2i(896,529);
glVertex2i(887,530);
glVertex2i(876,527);
glVertex2i(863,524);
glVertex2i(852,518);
glVertex2i(842,520);
glVertex2i(832,521);
glVertex2i(824,517);
glVertex2i(816,512);
glVertex2i(815,506);
glVertex2i(810,500);
glVertex2i(803,496);
glVertex2i(796,491);
glVertex2i(790,485);
glVertex2i(776,481);
glVertex2i(767,475);
glVertex2i(767,467);
glVertex2i(775,460);
glVertex2i(774,300);
glVertex2i(1155,305);

glEnd();




glColor3f(0.46, 0.81, 0.95);
glBegin(GL_POLYGON);
glVertex2i(166,394);
glVertex2i(377,322);
glVertex2i(368,464);
glVertex2i(347,465);
glVertex2i(347,469);
glVertex2i(350,473);
glVertex2i(349,478);
glVertex2i(345,482);
glVertex2i(340,484);
glVertex2i(332,486);
glVertex2i(330,487);
glVertex2i(323,487);
glVertex2i(311,483);
glVertex2i(307,488);
glVertex2i(304,490);
glVertex2i(299,492);
glVertex2i(293,496);
glVertex2i(296,499);
glVertex2i(297,504);
glVertex2i(297,510);
glVertex2i(301,512);
glVertex2i(303,518);
glVertex2i(294,525);
glVertex2i(287,526);
glVertex2i(281,526);
glVertex2i(275,526);
glVertex2i(262,528);
glVertex2i(243,526);
glVertex2i(235,524);
glVertex2i(225,520);
glVertex2i(220,517);
glVertex2i(228,529);
glVertex2i(224,537);
glVertex2i(217,539);
glVertex2i(211,543);
glVertex2i(205,543);
glVertex2i(196,539);
glVertex2i(187,542);
glVertex2i(180,544);
glVertex2i(180,550);
glVertex2i(176,554);
glVertex2i(171,558);
glVertex2i(165,559);
glVertex2i(153,559);
glVertex2i(146,556);
glVertex2i(140,548);
glVertex2i(125,544);
glVertex2i(114,542);
glVertex2i(105,538);
glVertex2i(93,529);
glVertex2i(85,520);
glVertex2i(76,518);
glVertex2i(65,512);
glVertex2i(61,504);
glVertex2i(67,498);
glVertex2i(68,490);
glVertex2i(57,489);
glVertex2i(51,486);
glVertex2i(43,482);
glVertex2i(38,479);
glVertex2i(33,473);
glVertex2i(23,475);
glVertex2i(13,475);
glVertex2i(3,472);
glVertex2i(0,465);
glVertex2i(3,456);
glVertex2i(8,452);
glVertex2i(2,442);
glVertex2i(0,314);
glEnd();



glColor3f(0.46, 0.81, 0.95);
glBegin(GL_POLYGON);
glVertex2i(583,313);
glVertex2i(791,305);
glVertex2i(772,455);
glVertex2i(764,456);
glVertex2i(756,456);
glVertex2i(751,456);
glVertex2i(745,452);
glVertex2i(741,458);
glVertex2i(738,464);
glVertex2i(736,469);
glVertex2i(732,475);
glVertex2i(724,477);
glVertex2i(716,479);
glVertex2i(709,479);
glVertex2i(701,477);
glVertex2i(696,475);
glVertex2i(694,472);
glVertex2i(686,470);
glVertex2i(680,468);
glVertex2i(672,462);
glVertex2i(666,457);
glVertex2i(663,451);
glVertex2i(656,451);
glVertex2i(649,452);
glVertex2i(645,453);
glVertex2i(645,458);
glVertex2i(645,461);
glVertex2i(643,467);
glVertex2i(638,471);
glVertex2i(636,472);
glVertex2i(642,483);
glVertex2i(640,491);
glVertex2i(636,496);
glVertex2i(624,497);
glVertex2i(618,502);
glVertex2i(609,507);
glVertex2i(607,514);
glVertex2i(603,524);
glVertex2i(592,525);
glVertex2i(584,525);
glVertex2i(573,525);
glVertex2i(565,516);
glVertex2i(543,517);
glVertex2i(533,522);
glVertex2i(524,523);
glVertex2i(510,523);
glVertex2i(500,520);
glVertex2i(494,519);
glVertex2i(484,512);
glVertex2i(478,503);
glVertex2i(480,495);
glVertex2i(458,483);
glVertex2i(448,485);
glVertex2i(439,485);
glVertex2i(430,480);
glVertex2i(422,473);
glVertex2i(414,465);
glVertex2i(420,306);
glEnd();



glColor3f(0.78, 0.91, 0.98);
glBegin(GL_POLYGON);

glVertex2i(1155,292);
glVertex2i(1365,289);
glVertex2i(1365,372);
glVertex2i(1356,381);
glVertex2i(1364,387);
glVertex2i(1365,397);
glVertex2i(1358,405);
glVertex2i(1347,404);
glVertex2i(1332,401);
glVertex2i(1327,410);
glVertex2i(1318,415);
glVertex2i(1300,419);
glVertex2i(1299,431);
glVertex2i(1300,440);
glVertex2i(1291,448);
glVertex2i(1282,448);
glVertex2i(1277,454);
glVertex2i(1272,459);
glVertex2i(1267,464);
glVertex2i(1261,467);
glVertex2i(1251,472);
glVertex2i(1246,473);
glVertex2i(1235,473);
glVertex2i(1228,475);
glVertex2i(1225,484);
glVertex2i(1215,485);
glVertex2i(1202,486);
glVertex2i(1193,480);
glVertex2i(1184,473);
glVertex2i(1165,469);
glVertex2i(1147,468);
glVertex2i(1140,460);
glVertex2i(1140,453);
glVertex2i(1129,453);
glVertex2i(1117,455);
glVertex2i(1102,455);
glVertex2i(1086,455);
glVertex2i(1075,453);
glVertex2i(1067,447);
glVertex2i(1067,437);
glVertex2i(1068,427);
glVertex2i(1062,421);
glVertex2i(1053,414);
glVertex2i(1046,415);
glVertex2i(1036,416);
glVertex2i(1028,414);
glVertex2i(1019,409);
glVertex2i(1018,403);
glVertex2i(1019,396);
glVertex2i(1011,394);
glVertex2i(1004,394);
glVertex2i(991,395);
glVertex2i(982,391);
glVertex2i(978,383);
glVertex2i(984,377);
glVertex2i(986,373);
glVertex2i(974,371);
glVertex2i(959,362);
glVertex2i(958,290);
glEnd();

glColor3f(0.78, 0.91, 0.98);
glBegin(GL_POLYGON);
glVertex2i(803,291);
glVertex2i(959,289);
glVertex2i(960,360);
glVertex2i(947,369);
glVertex2i(949,376);
glVertex2i(955,382);
glVertex2i(953,391);
glVertex2i(949,395);
glVertex2i(943,404);
glVertex2i(939,405);
glVertex2i(934,413);
glVertex2i(924,413);
glVertex2i(911,413);
glVertex2i(902,409);
glVertex2i(891,402);
glVertex2i(881,397);
glVertex2i(872,401);
glVertex2i(873,413);
glVertex2i(882,419);
glVertex2i(888,433);
glVertex2i(885,442);
glVertex2i(874,449);
glVertex2i(861,452);
glVertex2i(847,455);
glVertex2i(828,450);
glVertex2i(821,447);
glVertex2i(800,448);
glVertex2i(785,456);
glVertex2i(768,453);
glVertex2i(758,446);
glVertex2i(759,437);
glVertex2i(746,431);
glVertex2i(733,428);
glVertex2i(721,423);
glVertex2i(715,415);
glVertex2i(719,408);
glVertex2i(727,408);
glVertex2i(721,397);
glVertex2i(722,388);
glVertex2i(702,382);
glVertex2i(703,292);
glEnd();


glColor3f(0.78, 0.91, 0.98);
glBegin(GL_POLYGON);

glVertex2i(307,290);
glVertex2i(704,291);
glVertex2i(703,382);
glVertex2i(700,389);
glVertex2i(695,394);
glVertex2i(688,397);
glVertex2i(680,397);
glVertex2i(676,397);
glVertex2i(673,403);
glVertex2i(665,407);
glVertex2i(654,407);
glVertex2i(641,405);
glVertex2i(636,398);
glVertex2i(623,386);
glVertex2i(592,385);
glVertex2i(592,389);
glVertex2i(600,401);
glVertex2i(592,408);
glVertex2i(581,415);
glVertex2i(573,416);
glVertex2i(564,427);
glVertex2i(547,435);
glVertex2i(547,445);
glVertex2i(539,450);
glVertex2i(530,450);
glVertex2i(518,447);
glVertex2i(507,450);
glVertex2i(495,456);
glVertex2i(483,459);
glVertex2i(468,459);
glVertex2i(458,456);
glVertex2i(448,450);
glVertex2i(435,455);
glVertex2i(426,462);
glVertex2i(411,464);
glVertex2i(410,470);
glVertex2i(402,476);
glVertex2i(389,476);
glVertex2i(378,473);
glVertex2i(367,463);
glVertex2i(336,449);
glVertex2i(330,449);
glVertex2i(320,453);
glVertex2i(309,453);
glVertex2i(293,449);
glVertex2i(279,441);
glVertex2i(268,432);
glVertex2i(253,434);
glVertex2i(244,434);
glVertex2i(231,433);
glVertex2i(215,423);
glVertex2i(174,422);
glVertex2i(174,426);
glVertex2i(171,433);
glVertex2i(155,434);
glVertex2i(144,434);
glVertex2i(137,434);
glVertex2i(136,441);
glVertex2i(125,448);
glVertex2i(120,455);
glVertex2i(106,456);
glVertex2i(94,457);
glVertex2i(79,457);
glVertex2i(72,451);
glVertex2i(59,439);
glVertex2i(59,434);
glVertex2i(51,434);
glVertex2i(45,435);
glVertex2i(32,432);
glVertex2i(29,425);
glVertex2i(29,419);
glVertex2i(29,415);
glVertex2i(23,415);
glVertex2i(17,415);
glVertex2i(10,409);
glVertex2i(10,402);
glVertex2i(14,396);
glVertex2i(19,395);
glVertex2i(11,388);
glVertex2i(0,381);
glVertex2i(0,290);
glEnd();

glColor3f(0.56, 0.86, 0.97);
glBegin(GL_POLYGON);
glVertex2i(1365,240);
glVertex2i(0,240);
glVertex2i(0,175);
glVertex2i(1365,63);
glEnd();

glColor3f(0.9, 0.89, 0.87);
glBegin(GL_POLYGON);
glVertex2i(1,2);
glVertex2i(1365,1);
glVertex2i(1365,63);
glVertex2i(0,175);
glEnd();

glColor3f(0.96, 0.53, 0.73);
glBegin(GL_POLYGON);
glVertex2i(258,505);
glVertex2i(215,499);
glVertex2i(192,494);
glVertex2i(157,486);
glVertex2i(78,452);
glVertex2i(69,426);
glVertex2i(170,411);
glVertex2i(175,421);
glVertex2i(189,431);
glVertex2i(195,430);
glVertex2i(193,408);
glVertex2i(252,402);
glVertex2i(236,131);
glVertex2i(242,130);
glVertex2i(259,401);
glVertex2i(356,402);
glVertex2i(359,423);
glVertex2i(366,423);
glVertex2i(365,407);
glVertex2i(371,405);
glVertex2i(370,399);
glVertex2i(396,397);
glVertex2i(418,397);
glVertex2i(433,399);
glVertex2i(445,405);
glVertex2i(445,433);
glVertex2i(383,468);
glVertex2i(340,482);
glVertex2i(298,498);
glVertex2i(266,503);
glVertex2i(266,514);
glVertex2i(259,516);
glEnd();


//chair

glColor3f(0.79, 0.66, 0.53);
glBegin(GL_POLYGON);
glVertex2i(224,21);
glVertex2i(29,286);
glVertex2i(37,294);
glVertex2i(233,29);

glEnd();

glColor3f(0.79, 0.66, 0.53);
glBegin(GL_POLYGON);
glVertex2i(327,56);
glVertex2i(142,301);
glVertex2i(151,308);
glVertex2i(337,62);
glEnd();

glColor3f(0.79, 0.66, 0.53);
glBegin(GL_POLYGON);
glVertex2i(328,57);
glVertex2i(141,299);
glVertex2i(149,309);
glVertex2i(338,62);

glEnd();

glColor3f(0.79, 0.66, 0.53);
glBegin(GL_POLYGON);
glVertex2i(323,71);
glVertex2i(227,36);
glVertex2i(224,43);
glVertex2i(316,77);

glEnd();

glColor3f(0.79, 0.66, 0.53);
glBegin(GL_POLYGON);
glVertex2i(237,126);
glVertex2i(34,61);
glVertex2i(31,73);
glVertex2i(233,138);

glEnd();

glColor3f(0.79, 0.66, 0.53);
glBegin(GL_POLYGON);
glVertex2i(47,76);
glVertex2i(90,211);
glVertex2i(104,203);
glVertex2i(60,74);
glEnd();

glColor3f(0.79, 0.66, 0.53);
glBegin(GL_POLYGON);
glVertex2i(213,235);
glVertex2i(224,228);
glVertex2i(206,184);
glVertex2i(198,197);
glEnd();

glColor3f(0.79, 0.66, 0.53);
glBegin(GL_POLYGON);
glVertex2i(59,284);
glVertex2i(44,281);
glVertex2i(47,270);
glVertex2i(60,275);

glEnd();

glColor3f(0.97, 0.09, 0.25);
glBegin(GL_POLYGON);
glVertex2i(199,195);
glVertex2i(188,208);
glVertex2i(178,224);
glVertex2i(174,235);
glVertex2i(165,252);
glVertex2i(155,277);
glVertex2i(153,288);
glVertex2i(146,297);
glVertex2i(113,291);
glVertex2i(55,286);
glVertex2i(67,259);
glVertex2i(85,236);
glVertex2i(103,209);
glVertex2i(133,172);
glVertex2i(158,134);
glVertex2i(171,132);
glVertex2i(186,130);
glVertex2i(201,131);
glVertex2i(215,134);
glVertex2i(230,139);
glVertex2i(237,140);
glVertex2i(238,128);
glVertex2i(276,134);
glVertex2i(280,141);
glVertex2i(277,147);
glVertex2i(269,147);
glVertex2i(257,149);
glVertex2i(247,154);
glVertex2i(237,158);
glVertex2i(226,167);
glVertex2i(219,176);
glVertex2i(210,184);
glVertex2i(206,187);
glEnd();

//Minions
//shoes


glColor3f(0.21, 0.21, 0.21);
glBegin(GL_POLYGON);
glVertex2i(649,66);
glVertex2i(647,64);
glVertex2i(641,60);
glVertex2i(634,56);
glVertex2i(627,49);
glVertex2i(624,41);
glVertex2i(623,34);
glVertex2i(628,29);
glVertex2i(640,29);
glVertex2i(649,29);
glVertex2i(661,30);
glVertex2i(674,32);
glVertex2i(683,38);
glVertex2i(693,41);
glVertex2i(700,42);
glVertex2i(700,67);
glVertex2i(684,65);
glVertex2i(664,65);
glEnd();

glColor3f(0.21, 0.21, 0.21);
glBegin(GL_POLYGON);
glVertex2i(728,64);
glVertex2i(726,57);
glVertex2i(723,40);
glVertex2i(734,36);
glVertex2i(746,36);
glVertex2i(755,33);
glVertex2i(764,31);
glVertex2i(776,28);
glVertex2i(790,27);
glVertex2i(803,26);
glVertex2i(810,27);
glVertex2i(813,30);
glVertex2i(811,35);
glVertex2i(813,43);
glVertex2i(807,51);
glVertex2i(797,56);
glVertex2i(786,59);
glVertex2i(781,60);
glVertex2i(781,64);
glVertex2i(766,61);
glVertex2i(753,61);
glVertex2i(740,62);
glVertex2i(733,64);

glEnd();
//body
glColor3f(0.35, 0.53, 0.63);
glBegin(GL_POLYGON);
glVertex2i(716,152);
glVertex2i(723,85);
glVertex2i(720,64);
glVertex2i(785,64);
glVertex2i(788,75);
glVertex2i(791,82);
glVertex2i(802,86);
glVertex2i(814,95);
glVertex2i(827,100);
glVertex2i(837,107);
glVertex2i(846,114);
glVertex2i(861,125);
glVertex2i(868,137);
glVertex2i(875,148);
glVertex2i(876,164);
glVertex2i(873,181);
glVertex2i(834,179);
glVertex2i(834,210);
glVertex2i(836,236);
glVertex2i(837,261);
glVertex2i(837,271);
glVertex2i(774,271);
glVertex2i(709,274);
glVertex2i(562,140);
glVertex2i(574,124);
glVertex2i(577,118);
glVertex2i(582,113);
glVertex2i(588,109);
glVertex2i(596,103);
glVertex2i(607,98);
glVertex2i(618,91);
glVertex2i(625,88);
glVertex2i(633,84);
glVertex2i(641,76);
glVertex2i(647,66);
glVertex2i(676,66);
glVertex2i(705,66);
glVertex2i(708,85);
glVertex2i(723,86);
glEnd();

//head
glColor3f(0.97, 0.85, 0.43);
glBegin(GL_POLYGON);
glVertex2i(574,411);
glVertex2i(575,425);
glVertex2i(577,442);
glVertex2i(579,467);
glVertex2i(582,481);
glVertex2i(586,496);
glVertex2i(595,511);
glVertex2i(603,521);
glVertex2i(612,532);
glVertex2i(619,541);
glVertex2i(626,546);
glVertex2i(633,552);
glVertex2i(639,555);
glVertex2i(647,559);
glVertex2i(654,565);
glVertex2i(666,569);
glVertex2i(673,571);
glVertex2i(681,572);
glVertex2i(694,576);
glVertex2i(705,577);
glVertex2i(714,579);
glVertex2i(726,580);
glVertex2i(735,580);
glVertex2i(747,580);
glVertex2i(757,575);
glVertex2i(848,519);
glVertex2i(855,512);
glVertex2i(860,505);
glVertex2i(864,495);
glVertex2i(868,484);
glVertex2i(872,476);
glVertex2i(875,466);
glVertex2i(876,411);
glVertex2i(873,401);
glVertex2i(872,392);
glVertex2i(871,383);
glVertex2i(870,371);
glVertex2i(870,361);
glVertex2i(869,354);
glVertex2i(869,348);
glVertex2i(869,339);
glVertex2i(870,327);
glVertex2i(859,284);
glVertex2i(773,273);
glVertex2i(740,274);
glVertex2i(722,273);
glVertex2i(706,273);
glVertex2i(583,237);
glVertex2i(559,302);
glVertex2i(561,341);
glVertex2i(565,357);
glVertex2i(567,369);
glVertex2i(570,376);
glVertex2i(573,393);
glVertex2i(574,404);


glEnd();

glColor3f(0.35, 0.53, 0.63);
glBegin(GL_POLYGON);
glVertex2i(812,248);
glVertex2i(835,291);
glVertex2i(844,306);
glVertex2i(849,311);
glVertex2i(857,319);
glVertex2i(870,326);
glVertex2i(867,299);
glVertex2i(844,263);
glVertex2i(822,231);
glEnd();


glColor3f(0.35, 0.53, 0.63);
glBegin(GL_POLYGON);
glVertex2i(566,370);
glVertex2i(557,337);
glVertex2i(561,343);
glVertex2i(566,348);
glVertex2i(570,344);
glVertex2i(574,340);
glVertex2i(580,333);
glVertex2i(585,322);
glVertex2i(589,314);
glVertex2i(597,288);
glVertex2i(620,298);
glVertex2i(612,315);
glVertex2i(610,322);
glVertex2i(608,329);
glVertex2i(606,337);
glVertex2i(603,342);
glVertex2i(600,346);
glVertex2i(592,355);
glVertex2i(584,363);
glVertex2i(577,367);
glVertex2i(572,369);

glEnd();
//r hand
glColor3f(0.97, 0.85, 0.43);
glBegin(GL_POLYGON);
glVertex2i(860,257);
glVertex2i(835,245);
glVertex2i(833,180);
glVertex2i(866,182);
glVertex2i(869,226);
glVertex2i(872,242);
glVertex2i(881,234);
glVertex2i(888,227);
glVertex2i(897,224);
glVertex2i(905,227);
glVertex2i(910,231);
glVertex2i(912,235);
glVertex2i(912,240);
glVertex2i(907,251);
glVertex2i(887,263);
glVertex2i(866,272);
glVertex2i(852,270);
glVertex2i(843,260);
glVertex2i(835,245);
glEnd();


glColor3f(0.96, 0.95, 0.95);
glBegin(GL_POLYGON);
glVertex2i(765,501);
glVertex2i(735,551);
glVertex2i(753,557);
glVertex2i(771,555);
glVertex2i(786,554);
glVertex2i(802,547);
glVertex2i(813,537);
glVertex2i(826,528);
glVertex2i(833,516);
glVertex2i(841,500);
glVertex2i(840,477);
glVertex2i(829,461);
glVertex2i(823,452);
glVertex2i(817,447);
glVertex2i(811,443);
glVertex2i(801,440);
glVertex2i(791,436);
glVertex2i(777,435);
glVertex2i(765,435);
glVertex2i(755,437);
glVertex2i(744,440);
glVertex2i(734,442);
glVertex2i(723,447);
glVertex2i(714,452);
glVertex2i(704,455);
glVertex2i(693,461);
glVertex2i(684,484);
glVertex2i(687,508);
glVertex2i(696,529);
glVertex2i(719,548);
glVertex2i(738,554);
glEnd();

//eye
glColor3f(0.28, 0.28, 0.28);
glBegin(GL_POLYGON);
glVertex2i(578,475);
glVertex2i(582,479);
glVertex2i(587,482);
glVertex2i(593,485);
glVertex2i(601,489);
glVertex2i(611,491);
glVertex2i(621,494);
glVertex2i(632,498);
glVertex2i(644,499);
glVertex2i(652,501);
glVertex2i(659,501);
glVertex2i(660,491);
glVertex2i(658,486);
glVertex2i(657,479);
glVertex2i(656,470);
glVertex2i(655,464);
glVertex2i(647,464);
glVertex2i(637,465);
glVertex2i(627,465);
glVertex2i(617,462);
glVertex2i(609,461);
glVertex2i(600,458);
glVertex2i(591,454);
glVertex2i(584,451);
glVertex2i(579,447);
glVertex2i(577,441);

glEnd();


glColor3f(0.28, 0.28, 0.28);
glBegin(GL_POLYGON);
glVertex2i(882,449);
glVertex2i(877,453);
glVertex2i(873,458);
glVertex2i(866,463);
glVertex2i(861,466);
glVertex2i(857,469);
glVertex2i(855,464);
glVertex2i(854,457);
glVertex2i(851,452);
glVertex2i(848,444);
glVertex2i(849,437);
glVertex2i(856,435);
glVertex2i(860,432);
glVertex2i(866,428);
glVertex2i(871,424);
glVertex2i(877,418);
glVertex2i(880,409);
glVertex2i(882,421);
glVertex2i(882,428);
glVertex2i(883,440);
glVertex2i(883,444);
glEnd();


//eye

glColor3f(0.73, 0.73, 0.73);
glBegin(GL_POLYGON);
glVertex2i(654,460);
glVertex2i(675,460);
glVertex2i(683,506);
glVertex2i(656,506);


glEnd();
//eyerish
glPushMatrix();
glColor3f(0.73, 0.73, 0.73);

DrawCircle(764,481,94,86,500);
 glPopMatrix();
    //2nd circle
  glPushMatrix();

	glColor3f(1.0, 1.0, 1.0);
//glTranslatef(tx+400,ty-75,0);

DrawCircle(764,481,76,70,700);


	glPopMatrix();
	//3rd circle
 glPushMatrix();

	glColor3f(0.62, 0.38, 0.22);
glTranslatef(tx-8,ty-20,0);
DrawCircle(764,481,30,30,500);



	glPopMatrix();


	//4th circle
 glPushMatrix();

	glColor3f(0.0, 0.0, 0.0);
glTranslatef(tx-12,ty-22,0);
DrawCircle(764,481,15,15,500);



	glPopMatrix();







	//Guitar
glColor3f(0.37, 0.25, 0.22);
glBegin(GL_POLYGON);
glVertex2i(621,205);
glVertex2i(573,123);
glVertex2i(579,123);
glVertex2i(584,123);
glVertex2i(592,123);
glVertex2i(598,122);
glVertex2i(604,124);
glVertex2i(613,128);
glVertex2i(619,131);
glVertex2i(622,135);
glVertex2i(625,138);
glVertex2i(629,140);
glVertex2i(634,145);
glVertex2i(639,150);
glVertex2i(640,155);
glVertex2i(640,166);
glVertex2i(647,161);
glVertex2i(658,160);
glVertex2i(667,160);
glVertex2i(675,160);
glVertex2i(683,159);
glVertex2i(689,159);
glVertex2i(697,159);
glVertex2i(702,161);
glVertex2i(708,162);
glVertex2i(711,169);
glVertex2i(715,177);
glVertex2i(717,185);
glVertex2i(721,194);
glVertex2i(723,201);
glVertex2i(725,212);
glVertex2i(718,258);
glVertex2i(714,263);
glVertex2i(707,271);
glVertex2i(700,278);
glVertex2i(693,283);
glVertex2i(685,288);
glEnd();

glColor3f(0.71, 0.51, 0.34);
glBegin(GL_POLYGON);
glVertex2i(598,266);
glVertex2i(552,278);
glVertex2i(542,267);
glVertex2i(537,262);
glVertex2i(533,256);
glVertex2i(528,250);
glVertex2i(523,242);
glVertex2i(519,235);
glVertex2i(516,229);
glVertex2i(515,222);
glVertex2i(514,210);
glVertex2i(514,202);
glVertex2i(514,192);
glVertex2i(517,180);
glVertex2i(520,166);
glVertex2i(524,157);
glVertex2i(530,149);
glVertex2i(536,145);
glVertex2i(541,141);
glVertex2i(548,135);
glVertex2i(554,129);
glVertex2i(564,125);
glVertex2i(576,123);
glVertex2i(584,127);
glVertex2i(593,129);
glVertex2i(600,132);
glVertex2i(608,135);
glVertex2i(612,139);
glVertex2i(616,144);
glVertex2i(622,149);
glVertex2i(626,155);
glVertex2i(629,158);
glVertex2i(634,160);
glVertex2i(642,160);
glVertex2i(650,162);
glVertex2i(656,162);
glVertex2i(662,162);
glVertex2i(669,162);
glVertex2i(675,162);
glVertex2i(685,162);
glVertex2i(693,165);
glVertex2i(697,170);
glVertex2i(702,179);
glVertex2i(705,186);
glVertex2i(710,204);
glVertex2i(712,224);
glVertex2i(706,256);
glVertex2i(705,263);
glVertex2i(703,270);
glVertex2i(697,276);
glVertex2i(692,281);
glVertex2i(686,286);
glVertex2i(682,291);
glVertex2i(676,294);
glVertex2i(669,296);
glVertex2i(660,295);
glVertex2i(646,292);
glEnd();

glColor3f(0.55, 0.41, 0.27);
glBegin(GL_POLYGON);
glVertex2i(552,174);
glVertex2i(552,161);
glVertex2i(544,157);
glVertex2i(541,159);
glVertex2i(537,233);
glVertex2i(549,235);
glVertex2i(566,164);
glVertex2i(557,161);
glEnd();


//Guitar circle
 glPushMatrix();
glColor3f(0.02, 0.03, 0.05);
DrawCircle(645,228,25,30,500);
glPopMatrix();


glColor3f(0.86, 0.8, 0.72);
glBegin(GL_POLYGON);
glVertex2i(714,254);
glVertex2i(713,245);
glVertex2i(713,239);
glVertex2i(714,230);
glVertex2i(715,223);
glVertex2i(718,220);
glVertex2i(746,229);
glVertex2i(786,242);
glVertex2i(848,264);
glVertex2i(930,291);
glVertex2i(926,312);
glVertex2i(855,294);
glEnd();

//st
glColor3f(0.43, 0.36, 0.33);
glBegin(GL_LINES);
glVertex2i(769,268);
glVertex2i(769,261);
glVertex2i(769,261);
glVertex2i(771,254);
glVertex2i(771,254);
glVertex2i(772,250);
glVertex2i(772,250);
glVertex2i(773,246);
glVertex2i(773,246);
glVertex2i(774,242);
glVertex2i(774,242);
glVertex2i(778,240);
glVertex2i(791,273);
glVertex2i(800,247);
glVertex2i(811,279);
glVertex2i(820,255);
glVertex2i(834,287);
glVertex2i(842,264);
glVertex2i(859,295);
glVertex2i(866,272);
glVertex2i(882,300);
glVertex2i(888,277);
glVertex2i(902,307);
glVertex2i(909,281);
glEnd();


//guitat head
glColor3f(0.37, 0.25, 0.22);
glBegin(GL_POLYGON);
glVertex2i(970,318);
glVertex2i(927,286);
glVertex2i(927,281);
glVertex2i(1008,299);
glVertex2i(999,339);
glVertex2i(994,337);


glEnd();
glColor3f(0.71, 0.51, 0.34);
glBegin(GL_POLYGON);
glVertex2i(921,325);
glVertex2i(960,331);
glVertex2i(994,338);
glVertex2i(1002,303);
glVertex2i(956,291);
glVertex2i(927,285);

glEnd();

//p
glColor3f(0.9, 0.88, 0.86);
glBegin(GL_POLYGON);
glVertex2i(950,262);
glVertex2i(945,259);
glVertex2i(940,260);
glVertex2i(943,267);
glVertex2i(942,285);
glVertex2i(948,287);
glVertex2i(950,270);
glVertex2i(957,266);
glVertex2i(955,262);
glEnd();


glColor3f(0.9, 0.88, 0.86);
glBegin(GL_POLYGON);
glVertex2i(995,261);
glVertex2i(989,255);
glVertex2i(980,255);
glVertex2i(981,261);
glVertex2i(986,266);
glVertex2i(976,297);
glVertex2i(983,298);
glVertex2i(993,269);
glVertex2i(1003,264);
glVertex2i(1002,257);
glVertex2i(998,256);
glEnd();

glColor3f(0.9, 0.88, 0.86);
glBegin(GL_POLYGON);
glVertex2i(966,374);
glVertex2i(959,374);
glVertex2i(958,369);
glVertex2i(961,365);
glVertex2i(964,365);
glVertex2i(965,355);
glVertex2i(970,336);
glVertex2i(977,337);
glVertex2i(970,365);
glVertex2i(976,366);
glVertex2i(974,372);
glVertex2i(970,373);
glEnd();


glColor3f(0.9, 0.88, 0.86);
glBegin(GL_POLYGON);
glVertex2i(930,352);
glVertex2i(924,352);
glVertex2i(922,345);
glVertex2i(929,343);
glVertex2i(932,330);
glVertex2i(937,330);
glVertex2i(935,345);
glVertex2i(938,348);
glVertex2i(939,351);
glVertex2i(934,355);
glEnd();

//Guitar point head
glPushMatrix();
glColor3f(0.8, 0.79, 0.78);
DrawCircle(931,318,4,4,20);
glPopMatrix();

glPushMatrix();
glColor3f(0.8, 0.79, 0.78);
DrawCircle(976,327,4,4,20);
glPopMatrix();

glPushMatrix();
glColor3f(0.8, 0.79, 0.78);
DrawCircle(968,314,4,4,20);
glPopMatrix();

glPushMatrix();
glColor3f(0.8, 0.79, 0.78);
DrawCircle(934,297,4,4,20);
glPopMatrix();

//Guitar Strings
glColor3f(1.0, 1.0, 1.0);
glBegin(GL_LINES);
glVertex2i(932,312);
glVertex2i(548,207);
glVertex2i(976,320);
glVertex2i(549,202);
glVertex2i(968,310);
glVertex2i(550,194);
glVertex2i(932,297);
glVertex2i(551,187);
glEnd();


// l hand
glColor3f(0.97, 0.85, 0.43);
glBegin(GL_POLYGON);
glVertex2i(519,295);
glVertex2i(518,286);
glVertex2i(524,283);
glVertex2i(532,277);
glVertex2i(542,250);
glVertex2i(567,247);
glVertex2i(571,283);
glVertex2i(552,297);
glVertex2i(550,304);
glVertex2i(582,316);
glVertex2i(562,339);
glVertex2i(541,323);
glEnd();

glPushMatrix();

glTranslatef(-12,0,0);
glRotatef(q,0.0, 0.0, 1);


//glTranslatef(0,50,0);
	//glTranslatef(tx,ty,0);

//Lhand fingers
glBegin(GL_POLYGON);
glColor3f(0.25, 0.24, 0.23);
glVertex2i(569,275);
glVertex2i(580,288);
glVertex2i(590,294);
glVertex2i(603,303);
glVertex2i(612,313);
glVertex2i(619,316);
glVertex2i(623,316);
glVertex2i(629,316);
glVertex2i(634,312);
glVertex2i(633,305);
glVertex2i(630,301);
glVertex2i(633,301);
glVertex2i(639,303);
glVertex2i(645,302);
glVertex2i(652,302);
glVertex2i(658,293);
glVertex2i(657,287);
glVertex2i(653,280);
glVertex2i(645,272);
glVertex2i(637,271);
glVertex2i(636,266);
glVertex2i(644,266);
glVertex2i(650,270);
glVertex2i(655,270);
glVertex2i(654,258);
glVertex2i(647,251);
glVertex2i(632,243);
glVertex2i(615,242);
glVertex2i(598,242);
glVertex2i(581,248);
glVertex2i(570,247);
glVertex2i(559,245);
glVertex2i(552,252);
glVertex2i(551,261);
glVertex2i(551,273);
glVertex2i(556,285);
glVertex2i(561,291);
glVertex2i(568,294);
glVertex2i(575,293);
glVertex2i(580,288);
glEnd();
glPopMatrix();



glPushMatrix();
glTranslatef(tx1,ty1,0);
glColor3f(0.25, 0.24, 0.23);
glBegin(GL_POLYGON);
glVertex2i(p+911,261);
glVertex2i(p+883,253);
glVertex2i(p+877,262);
glVertex2i(p+868,269);
glVertex2i(p+866,273);
glVertex2i(p+865,276);
glVertex2i(p+865,280);
glVertex2i(p+865,285);
glVertex2i(p+867,290);
glVertex2i(p+871,294);
glVertex2i(p+877,295);
glVertex2i(p+882,291);
glVertex2i(p+888,284);
glVertex2i(p+892,280);
glVertex2i(p+898,280);
glVertex2i(p+897,289);
glVertex2i(p+892,292);
glVertex2i(p+888,295);
glVertex2i(p+883,300);
glVertex2i(p+882,306);
glVertex2i(p+881,312);
glVertex2i(p+884,317);
glVertex2i(p+888,321);
glVertex2i(p+894,322);
glVertex2i(p+900,322);
glVertex2i(p+906,321);
glVertex2i(p+913,316);
glVertex2i(p+920,309);
glVertex2i(p+925,297);
glVertex2i(p+926,286);
glVertex2i(p+926,274);
glVertex2i(p+926,266);
glVertex2i(p+928,261);
glVertex2i(p+926,254);
glVertex2i(p+924,249);
glVertex2i(p+917,241);
glVertex2i(p+912,238);
glVertex2i(p+899,236);
glVertex2i(p+890,237);
glVertex2i(p+886,241);
glVertex2i(p+882,243);
glVertex2i(p+882,248);
glVertex2i(p+883,252);
glVertex2i(p+883,253);
glEnd();
glPopMatrix();



//Mouth
glColor3f(0.25, 0.1, 0.1);
glBegin(GL_POLYGON);
glVertex2i(698,334);
glVertex2i(808,339);
glVertex2i(805,320);
glVertex2i(801,312);
glVertex2i(797,305);
glVertex2i(789,299);
glVertex2i(779,293);
glVertex2i(768,290);
glVertex2i(754,288);
glVertex2i(743,288);
glVertex2i(730,291);
glVertex2i(720,296);
glVertex2i(707,304);
glVertex2i(699,316);
glVertex2i(696,328);
glEnd();

//Teeth
glColor3f(0.91, 0.9, 0.88);
glBegin(GL_POLYGON);
glVertex2i(755,337);
glVertex2i(700,335);
glVertex2i(698,329);
glVertex2i(701,328);
glVertex2i(707,327);
glVertex2i(714,327);
glVertex2i(718,330);
glVertex2i(722,328);
glVertex2i(728,326);
glVertex2i(752,326);
glVertex2i(755,329);
glVertex2i(757,331);
glVertex2i(761,328);
glVertex2i(763,327);
glVertex2i(783,326);
glVertex2i(788,327);
glVertex2i(790,331);
glVertex2i(795,328);
glVertex2i(802,327);
glVertex2i(805,327);
glVertex2i(806,338);
glVertex2i(793,340);
glEnd();
glFlush();
}

void myplay()
{
    //Rhand finger


//glFlush();

}




void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_UP:
				//ty +=5;
				PlaySound("banana.wav", NULL, SND_ASYNC|SND_FILENAME);
				t=1;

glutPostRedisplay();
				break;






		case GLUT_KEY_DOWN:
				//ty +=5;
				PlaySound(NULL, NULL, 0);
				t=0;
                glutPostRedisplay();
				break;






	  default:
			break;
	}
}




int main()
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(200,200);
    glutCreateWindow("DEMO");
    init();
    glutDisplayFunc(myDisplay);
//    glutKeyboardFunc(my_keyboard);
	glutSpecialFunc(spe_key);
//	glutMouseFunc(my_mouse);
    glutMainLoop();
    return 0;
}
