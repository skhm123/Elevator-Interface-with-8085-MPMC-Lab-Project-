#include <REG51.H>
#include <stdio.h>

int floor, tour, speed;

tour = 10;
speed = 10;

Wait (c)
{
int i, j;
if (c == 0)
{
for (i = 0; i <500; i ++)
{
for (j = 0; j <speed; j ++)
{
;
}
}
}
return;
}

above (b),
{
int i, j;
for (i = 1; i <= b; i ++)
{

for (j = 0; j <= 10; j ++)
{
P3 = 1;
wait (0);
P3 = 2;
wait (0);
P3 = 4;
wait (0);
P3 = 8;
wait (0);
}
P2 = floor + i;
}
floor = floor + b;
return;
}
down (b)
{
int i, j;
for (i = 1; i <= b; i ++)
{
for (j = 0; j <= tour; j ++)
{
P3 = 8;
wait (0);
P3 = 4;
wait (0);
P3 = 2;
wait (0);
P3 = 1;
wait (0);
}
P2 = floor-yl;
}
floor = floor-b;
return;
}



control (a)
{
int difference;
if (a> fold)
{
diff = a-floor;
above (the difference);
}

if (a <fold)
{
diff = floor-a;
down (difference);
}
return;
}


main ()
{
int kat1;
floor = 0;
P2 = floor;
while (1)
{
if (P0 == 1)
{
kat1 = 1;
control (1);
}

if (P0 == 2)
{
kat1 = 2;
control (2);
}

if (P0 == 4)
{
kat1 = 3;
control (3);
}

if (P0 == 8)
{
kat1 = 4;
control (4);
}

if (P0 == 16)
{
kat1 = 5;
control (5);
}
}
}
