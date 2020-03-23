

#include <iostream>
#include<graphics.h>
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>

#include <winbgim.h>
#include <mmsystem.h>
using namespace std;
int raza1=12.5, raza2=25, raza3=37.5,c[3],randul;
int ok=0;
int raze1[4][4],raze2[4][4],raze3[4][4],cul1[4][4],cul2[4][4],cul3[4][4],tablam[4][4];
int limba();
struct pozlaterale
{
    int x;
    int y;
    int r;
} a[13];
struct pozcarou
{
    int x;
    int y;
    int r;
} b[10];
struct pozanterioare
{

    int culoare;
    int poz[4][4];
} poz1,poz2;
void pozitii()
{
    //cercurile initial se pot afla doar in una din cele 12 pozitii de inceput - aici sunt coordonatele si raza pozitiilor in vect a
    //in vect b sunt coordonatele cercurilor din carou, raza va fi determinata later on de matrice
    a[1].x=100, a[1].y=100, a[1].r=raza1;
    a[2].x=200, a[2].y=100, a[2].r=raza1;
    a[3].x=100, a[3].y=175, a[3].r=raza2;
    a[4].x=200, a[4].y=175, a[4].r=raza2;
    a[5].x=100, a[5].y=275, a[5].r=raza3;
    a[6].x=200, a[6].y=275, a[6].r=raza3;
    a[7].x=800, a[7].y=100, a[7].r=raza1;
    a[8].x=700, a[8].y=100, a[8].r=raza1;
    a[9].x=800, a[9].y=175, a[9].r=raza2;
    a[10].x=700, a[10].y=175, a[10].r=raza2;
    a[11].x=800, a[11].y=275, a[11].r=raza3;
    a[12].x=700, a[12].y=275, a[12].r=raza3;

    b[1].x=350, b[1].y=100;
    b[2].x=450, b[2].y=100;
    b[3].x=550, b[3].y=100;
    b[4].x=350, b[4].y=200;
    b[5].x=450, b[5].y=200;
    b[6].x=550, b[6].y=200;
    b[7].x=350, b[7].y=300;
    b[8].x=450, b[8].y=300;
    b[9].x=550, b[9].y=300;
}
int dep7();
int gata()
{
    if(getpixel(b[1].x,b[1].y)==12&&(getpixel(b[1].x,b[1].y)==getpixel(b[2].x,b[2].y)&&getpixel(b[1].x,b[1].y)==getpixel(b[3].x,b[3].y)))
         {
            readimagefile("rpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[4].x,b[4].y)==12&&(getpixel(b[4].x,b[4].y)==getpixel(b[5].x,b[5].y)&&getpixel(b[4].x,b[4].y)==getpixel(b[6].x,b[6].y)))
         {
            readimagefile("rpwon.jpg",0,0,900,400);
             if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[7].x,b[7].y)==12&&(getpixel(b[7].x,b[7].y)==getpixel(b[8].x,b[8].y)&&getpixel(b[7].x,b[7].y)==getpixel(b[9].x,b[9].y)))
         {
            readimagefile("rpwon.jpg",0,0,900,400);
             if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[1].x,b[1].y)==12&&(getpixel(b[1].x,b[1].y)==getpixel(b[4].x,b[4].y)&&getpixel(b[1].x,b[1].y)==getpixel(b[7].x,b[7].y)))
         {
            readimagefile("rpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[2].x,b[2].y)==12&&(getpixel(b[2].x,b[2].y)==getpixel(b[5].x,b[5].y)&&getpixel(b[2].x,b[2].y)==getpixel(b[8].x,b[8].y)))
         {
            readimagefile("rpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[3].x,b[3].y)==12&&(getpixel(b[3].x,b[3].y)==getpixel(b[6].x,b[6].y)&&getpixel(b[3].x,b[3].y)==getpixel(b[9].x,b[9].y)))
         {
            readimagefile("rpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[1].x,b[1].y)==12&&(getpixel(b[1].x,b[1].y)==getpixel(b[5].x,b[5].y)&&getpixel(b[1].x,b[1].y)==getpixel(b[9].x,b[9].y)))
         {
            readimagefile("rpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[3].x,b[3].y)==12&&(getpixel(b[3].x,b[3].y)==getpixel(b[5].x,b[5].y)&&getpixel(b[3].x,b[3].y)==getpixel(b[7].x,b[7].y)))
        {
            readimagefile("rpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }

    if(getpixel(b[1].x,b[1].y)==9&&(getpixel(b[1].x,b[1].y)==getpixel(b[2].x,b[2].y)&&getpixel(b[1].x,b[1].y)==getpixel(b[3].x,b[3].y)))
        {
            readimagefile("bpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[4].x,b[4].y)==9&&(getpixel(b[4].x,b[4].y)==getpixel(b[5].x,b[5].y)&&getpixel(b[4].x,b[4].y)==getpixel(b[6].x,b[6].y)))
        {
            readimagefile("bpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[7].x,b[7].y)==9&&(getpixel(b[7].x,b[7].y)==getpixel(b[8].x,b[8].y)&&getpixel(b[7].x,b[7].y)==getpixel(b[9].x,b[9].y)))
        {
            readimagefile("bpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[1].x,b[1].y)==9&&(getpixel(b[1].x,b[1].y)==getpixel(b[4].x,b[4].y)&&getpixel(b[1].x,b[1].y)==getpixel(b[7].x,b[7].y)))
        {
            readimagefile("bpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[2].x,b[2].y)==9&&(getpixel(b[2].x,b[2].y)==getpixel(b[5].x,b[5].y)&&getpixel(b[2].x,b[2].y)==getpixel(b[8].x,b[8].y)))
        {
            readimagefile("bpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[3].x,b[3].y)==9&&(getpixel(b[3].x,b[3].y)==getpixel(b[6].x,b[6].y)&&getpixel(b[3].x,b[3].y)==getpixel(b[9].x,b[9].y)))
        {
            readimagefile("bpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[1].x,b[1].y)==9&&(getpixel(b[1].x,b[1].y)==getpixel(b[5].x,b[5].y)&&getpixel(b[1].x,b[1].y)==getpixel(b[9].x,b[9].y)))
        {
            readimagefile("bpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    if(getpixel(b[3].x,b[3].y)==9&&(getpixel(b[3].x,b[3].y)==getpixel(b[5].x,b[5].y)&&getpixel(b[3].x,b[3].y)==getpixel(b[7].x,b[7].y)))
        {
            readimagefile("bpwon.jpg",0,0,900,400);
            if(dep7()==1)limba();
            return 1;
        }
    return 0;
}
int interiorcerc(int i,int x,int y)
{
    //verific daca un punct e in interior cerc
    if((x-a[i].x)*(x-a[i].x)+(y-a[i].y)*(y-a[i].y)<=a[i].r*a[i].r)
        return 1;
    return 0;
}
int interiorcerc2(int i,int x,int y)
{
    //verific daca un punct e in interior cerc
    if((x-b[i].x)*(x-b[i].x)+(y-b[i].y)*(y-b[i].y)<=b[i].r*b[i].r)
        return 1;
    return 0;
}
int validare(int raza,int i,int j)
{
    if (raza>raze1[i][j])
        return 1;
    return 0;
}
void fereastra()
{
    initwindow(900,400,"TABLA");
    readimagefile("rp.jpg",300,0,600,45);
}
void cerc(int r,int c,int x,int y)
{
    //fct de desenare cerc umplut
    setcolor(c);
    setfillstyle(SOLID_FILL,c);
    circle(x,y,r);
    floodfill(x+1,y+1,c);
}
void tabla()
{
    //desenez tabla si cercurile initiale
    cerc(raza1,12,100,100);
    cerc(raza1,12, 200,100);
    cerc(raza2,12,100,175);
    cerc(raza2,12,200,175);
    cerc(raza3,12,100,275);
    cerc(raza3,12,200,275);
    setcolor(WHITE);
    line(400,50,400,350);
    line(500,50,500,350);
    line(300,150,600,150);
    line(300,250,600,250);
    cerc(raza1,9,800,100);
    cerc(raza1,9,700,100);
    cerc(raza2,9,700,175);
    cerc(raza2,9,800,175);
    cerc(raza3,9,700,275);
    cerc(raza3,9,800,275);
    readimagefile("rp.jpg",300,0,600,45);
}
void mutarep1(int raza,int c1,int c2);
void mutarep2(int raza,int c1,int c2);
void click()
{
    //feedback de click
    int x;
    int y;
    int k;
    int c1,c2;
    int raza;
    while(!kbhit()&&!gata())
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN, x, y);


            if(getpixel(x,y)!=0&&getpixel(x,y)!=15)
            {
                int i,j;
                int culoareselect=getpixel(x,y);
                if(x<300||x>600)
                {
                    for(i=1; i<=12; i++)
                        if(interiorcerc(i,x,y))
                        {
                            setcolor(RED);
                            circle(a[i].x,a[i].y,a[i].r);
                            circle(a[i].x,a[i].y,a[i].r+1);
                            circle(a[i].x,a[i].y,a[i].r+2);
                            circle(a[i].x,a[i].y,a[i].r+3);
                            circle(a[i].x,a[i].y,a[i].r+4);
                            circle(a[i].x,a[i].y,a[i].r+5);
                            if(!ok)j=i;
                            else k=i;
                            raza=a[i].r;
                        }
                    if(ok&&j!=k)
                    {
                        setcolor(BLACK);
                        circle(a[j].x,a[j].y,a[j].r);
                        circle(a[j].x,a[j].y,a[j].r+1);
                        circle(a[j].x,a[j].y,a[j].r+2);
                        circle(a[j].x,a[j].y,a[j].r+3);
                        circle(a[j].x,a[j].y,a[j].r+4);
                        circle(a[j].x,a[j].y,a[j].r+5);
                        j=k;
                    }
                    ok=1;
                    if (culoareselect==12&&randul==1||randul==0)
                    {
                        mutarep1(raza,a[j].x,a[j].y);
                        randul=2;
                    }
                    if (culoareselect==9&&randul==2)
                    {
                        mutarep2(raza,a[j].x,a[j].y);
                        randul=1;
                    }
                }
                else
                {
                    for(i=1; i<=9; i++)
                        if(interiorcerc2(i,x,y))
                        {
                            setcolor(RED);
                            circle(b[i].x,b[i].y,b[i].r);
                            circle(b[i].x,b[i].y,b[i].r+1);
                            circle(b[i].x,b[i].y,b[i].r+2);
                            circle(b[i].x,b[i].y,b[i].r+3);
                            circle(b[i].x,b[i].y,b[i].r+4);
                            circle(b[i].x,b[i].y,b[i].r+5);
                            k=i;
                            raza=b[i].r;
                            cout<<i<<'\n';
                            if(i%3==0) c2=3;
                            else
                                c2=i%3;
                            c1=(i-c2)/3+1;
                            cout<<c1<<' '<<c2<<'\n';
                        }
                    if(ok&&j!=k)
                    {
                        setcolor(BLACK);
                        circle(b[j].x,b[j].y,b[j].r);
                        circle(b[j].x,b[j].y,b[j].r+1);
                        circle(b[j].x,b[j].y,b[j].r+2);
                        circle(b[j].x,b[j].y,b[j].r+3);
                        circle(b[j].x,b[j].y,b[j].r+4);
                        circle(b[j].x,b[j].y,b[j].r+5);
                        j=k;
                    }
                    if (culoareselect==12&&randul==1||randul==0)
                    {
                        mutarep1(raza,b[j].x,b[j].y);
                        randul=2;
                    }
                    if (culoareselect==9&&randul==2)
                    {
                        mutarep2(raza,b[j].x,b[j].y);
                        randul=1;
                    }
                }
            }
        }
    }
}

void mutarep1(int raza,int c1,int c2)
{
    int x,y,ok;
    ok=0;
    int k;
    int cul;
    int coord1,coord2;
    if(c2==100)
    {
        coord1=1;
        if(c1==350)coord2=1;
        if(c1==450)coord2=2;
        if(c1==550)coord2=3;
    }
    if(c2==200)
    {
        coord1=2;
        if(c1==350)coord2=1;
        if(c1==450)coord2=2;
        if(c1==550)coord2=3;
    }
    if(c2==300)
    {
        coord1=2;
        if(c1==350)coord2=1;
        if(c1==450)coord2=2;
        if(c1==550)coord2=3;
    }
    int a=0,c=0;
    while(!kbhit())
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN, x, y);
            if((x>300&&x<600)&&(y>50&&y<350))
            {
                if((x>300&&x<400)&&(y>50&&y<150)&&validare(raza,1,1))
                {
                    cerc(37.5,0,b[1].x,b[1].y);
                    cerc(raza,12,b[1].x,b[1].y);
                    if(raze1[1][1])
                    {
                        raze3[1][1]=raze2[1][1];
                        raze2[1][1]=raze1[1][1];
                        cul3[1][1]=cul2[1][1];
                        cul2[1][1]=cul1[1][1];
                    }
                    raze1[1][1]=raza;
                    cul1[1][1]=12;
                    b[1].r=raza;
                    ok=1;
                    a=1;
                    c=1;
                }
                if((x>400&&x<500)&&(y>50&&y<150)&&validare(raza,1,2))
                {
                    cerc(37.5,0,b[2].x,b[2].y);

                    cerc(raza,12,b[2].x,b[2].y);
                    if(raze1[1][2])
                    {
                        raze3[1][2]=raze2[1][2];
                        raze2[1][2]=raze1[1][2];
                        cul3[1][2]=cul2[1][2];
                        cul2[1][2]=cul1[1][2];
                    }
                    raze1[1][2]=raza;
                    cul1[1][2]=12;
                    b[2].r=raza;
                    ok=1;
                    a=1;
                    c=2;
                }
                if((x>500&&x<600)&&(y>50&&y<150)&&validare(raza,1,3))
                {
                    cerc(37.5,0,b[3].x,b[3].y);
                    cerc(raza,12,b[3].x,b[3].y);
                    if(raze1[1][3])
                    {
                        raze3[1][3]=raze2[1][3];
                        raze2[1][3]=raze1[1][3];
                        cul3[1][3]=cul2[1][3];
                        cul2[1][3]=cul1[1][3];
                    }
                    raze1[1][3]=raza;
                    cul1[1][3]=12;
                    b[3].r=raza;
                    ok=1;
                    a=1;
                    c=3;
                }
                if((x>300&&x<400)&&(y>150&&y<250)&&validare(raza,2,1))
                {
                    cerc(37.5,0,b[4].x,b[4].y);
                    cerc(raza,12,b[4].x,b[4].y);
                    if(raze1[2][1])
                    {
                        raze3[2][1]=raze2[2][1];
                        raze2[2][1]=raze1[2][1];
                        cul3[2][1]=cul2[2][1];
                        cul2[2][1]=cul1[2][1];
                    }
                    raze1[2][1]=raza;
                    cul1[2][1]=12;
                    b[4].r=raza;
                    ok=1;
                    a=2;
                    c=1;
                }
                if((x>400&&x<500)&&(y>150&&y<250)&&validare(raza,2,2))
                {
                    cerc(37.5,0,b[5].x,b[5].y);
                    cerc(raza,12,b[5].x,b[5].y);
                    if(raze1[2][2])
                    {
                        raze3[2][2]=raze2[2][2];
                        raze2[2][2]=raze1[2][2];
                        cul3[2][2]=cul2[2][2];
                        cul2[2][2]=cul1[2][2];
                    }
                    raze1[2][2]=raza;
                    cul1[2][2]=12;
                    b[5].r=raza;
                    ok=1;
                    a=2;
                    c=2;
                }
                if((x>500&&x<600)&&(y>150&&y<250)&&validare(raza,2,3))
                {
                    cerc(37.5,0,b[6].x,b[6].y);
                    cerc(raza,12,b[6].x,b[6].y);
                    if(raze1[2][3])
                    {
                        raze3[2][3]=raze2[2][3];
                        raze2[2][3]=raze1[2][3];
                        cul3[2][3]=cul2[2][3];
                        cul2[2][3]=cul1[2][3];
                    }
                    raze1[2][3]=raza;
                    cul1[2][3]=12;
                    b[6].r=raza;
                    ok=1;
                    a=2;
                    c=3;
                }
                if((x>300&&x<400)&&(y>250&&y<350)&&validare(raza,3,1))
                {
                    cerc(37.5,0,b[7].x,b[7].y);
                    cerc(raza,12,b[7].x,b[7].y);
                    if(raze1[3][1])
                    {
                        raze3[3][1]=raze2[3][1];
                        raze2[3][1]=raze1[3][1];
                        cul3[3][1]=cul2[3][1];
                        cul2[3][1]=cul1[3][1];
                    }
                    raze1[3][1]=raza;
                    cul1[3][1]=12;
                    b[7].r=raza;
                    ok=1;
                    a=3;
                    c=1;
                }
                if((x>400&&x<500)&&(y>250&&y<350)&&validare(raza,3,2))
                {
                    cerc(37.5,0,b[8].x,b[8].y);
                    cerc(raza,12,b[8].x,b[8].y);
                    if(raze1[3][2])
                    {
                        raze3[3][2]=raze2[3][2];
                        raze2[3][2]=raze1[3][2];
                        cul3[3][2]=cul2[3][2];
                        cul2[3][2]=cul1[3][2];
                    }
                    raze1[3][2]=raza;
                    cul1[3][2]=12;
                    b[8].r=raza;
                    ok=1;
                    a=3;
                    c=2;
                }
                if((x>500&&x<600)&&(y>250&&y<350)&&validare(raza,3,3))
                {
                    cerc(37.5,0,b[9].x,b[9].y);
                    cerc(raza,12,b[9].x,b[9].y);
                    if(raze1[3][3])
                    {
                        raze3[3][3]=raze2[3][3];
                        raze2[3][3]=raze1[3][3];
                        cul3[3][3]=cul2[3][3];
                        cul2[3][3]=cul1[3][3];
                    }
                    raze1[3][3]=raza;
                    cul1[3][3]=12;
                    b[1].r=raza;
                    ok=1;
                    a=3;
                    c=3;
                }
                if (ok)
                {
                    cerc(raza,0,c1,c2);
                    cerc(raza+1,0,c1,c2);
                    cerc(raza+2,0,c1,c2);
                    cerc(raza+3,0,c1,c2);
                    cerc(raza+4,0,c1,c2);
                    cerc(raza+5,0,c1,c2);
                    {
                        raze1[coord1][coord2]=raze2[coord1][coord2];
                        cul1[coord1][coord2]=cul2[coord1][coord2];
                        raze2[coord1][coord2]=raze3[coord1][coord2];
                        cul2[coord1][coord2]=cul3[coord1][coord2];
                        cerc(raze1[coord1][coord2],cul1[coord1][coord2],c1,c2);
                    }
                    break;
                }
            }
        }
    }
    readimagefile("bp.jpg",300,0,600,45);
}

void mutarep2(int raza,int c1,int c2)
{
    int x,y,ok;
    ok=0;
    int k;
    int cul;
    int coord1,coord2;
    if(c2==100)
    {
        coord1=1;
        if(c1==350)coord2=1;
        if(c1==450)coord2=2;
        if(c1==550)coord2=3;
    }
    if(c2==200)
    {
        coord1=2;
        if(c1==350)coord2=1;
        if(c1==450)coord2=2;
        if(c1==550)coord2=3;
    }
    if(c2==300)
    {
        coord1=2;
        if(c1==350)coord2=1;
        if(c1==450)coord2=2;
        if(c1==550)coord2=3;
    }

    int a=0,c=0;
    while(!kbhit())
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN, x, y);
            if((x>300&&x<600)&&(y>50&&y<350))
            {
                if((x>300&&x<400)&&(y>50&&y<150)&&validare(raza,1,1))
                {
                    cerc(37.5,0,b[1].x,b[1].y);
                    cerc(raza,9,b[1].x,b[1].y);
                    if(raze1[1][1])
                    {
                        raze3[1][1]=raze2[1][1];
                        raze2[1][1]=raze1[1][1];
                        cul3[1][1]=cul2[1][1];
                        cul2[1][1]=cul1[1][1];
                    }
                    raze1[1][1]=raza;
                    cul1[1][1]=9;
                    b[1].r=raza;
                    ok=1;
                    a=1;
                    c=1;
                }
                if((x>400&&x<500)&&(y>50&&y<150)&&validare(raza,1,2))
                {
                    cerc(37.5,0,b[2].x,b[2].y);
                    cerc(raza,9,b[2].x,b[2].y);
                    if(raze1[1][2])
                    {
                        raze3[1][2]=raze2[1][2];
                        raze2[1][2]=raze1[1][2];
                        cul3[1][2]=cul2[1][2];
                        cul2[1][2]=cul1[1][2];
                    }
                    raze1[1][2]=raza;
                    cul1[1][2]=9;
                    b[2].r=raza;
                    ok=1;
                    a=1;
                    c=2;
                }
                if((x>500&&x<600)&&(y>50&&y<150)&&validare(raza,1,3))
                {
                    cerc(37.5,0,b[3].x,b[3].y);
                    cerc(raza,9,b[3].x,b[3].y);
                    if(raze1[1][3])
                    {
                        raze3[1][3]=raze2[1][3];
                        raze2[1][3]=raze1[1][3];
                        cul3[1][3]=cul2[1][3];
                        cul2[1][3]=cul1[1][3];
                    }
                    raze1[1][3]=raza;
                    cul1[1][3]=9;
                    b[3].r=raza;
                    ok=1;
                    a=1;
                    c=3;
                }
                if((x>300&&x<400)&&(y>150&&y<250)&&validare(raza,2,1))
                {
                    cerc(37.5,0,b[4].x,b[4].y);
                    cerc(raza,9,b[4].x,b[4].y);
                    if(raze1[2][1])
                    {
                        raze3[2][1]=raze2[2][1];
                        raze2[2][1]=raze1[2][1];
                        cul3[2][1]=cul2[2][1];
                        cul2[2][1]=cul1[2][1];
                    }
                    raze1[2][1]=raza;
                    cul1[2][1]=9;
                    b[4].r=raza;
                    ok=1;
                    a=2;
                    c=1;
                }
                if((x>400&&x<500)&&(y>150&&y<250)&&validare(raza,2,2))
                {
                    cerc(37.5,0,b[5].x,b[5].y);
                    cerc(raza,9,b[5].x,b[5].y);
                    if(raze1[2][2])
                    {
                        raze3[2][2]=raze2[2][2];
                        raze2[2][2]=raze1[2][2];
                        cul3[2][2]=cul2[2][2];
                        cul2[2][2]=cul1[2][2];
                    }
                    raze1[2][2]=raza;
                    cul1[2][2]=9;
                    b[5].r=raza;
                    ok=1;
                    a=2;
                    c=2;
                }
                if((x>500&&x<600)&&(y>150&&y<250)&&validare(raza,2,3))
                {
                    cerc(37.5,0,b[6].x,b[6].y);
                    cerc(raza,9,b[6].x,b[6].y);
                    if(raze1[2][3])
                    {
                        raze3[2][3]=raze2[2][3];
                        raze2[2][3]=raze1[2][3];
                        cul3[2][3]=cul2[2][3];
                        cul2[2][3]=cul1[2][3];
                    }
                    raze1[2][3]=raza;
                    cul1[2][3]=9;
                    b[6].r=raza;
                    ok=1;
                    a=2;
                    c=3;
                }
                if((x>300&&x<400)&&(y>250&&y<350)&&validare(raza,3,1))
                {
                    cerc(37.5,0,b[7].x,b[7].y);
                    cerc(raza,9,b[7].x,b[7].y);
                    if(raze1[3][1])
                    {
                        raze3[3][1]=raze2[3][1];
                        raze2[3][1]=raze1[3][1];
                        cul3[3][1]=cul2[3][1];
                        cul2[3][1]=cul1[3][1];
                    }
                    raze1[3][1]=raza;
                    cul1[3][1]=9;
                    b[7].r=raza;
                    ok=1;
                    a=3;
                    c=1;
                }
                if((x>400&&x<500)&&(y>250&&y<350)&&validare(raza,3,2))
                {
                    cerc(37.5,0,b[8].x,b[8].y);
                    cerc(raza,9,b[8].x,b[8].y);
                    if(raze1[3][2])
                    {
                        raze3[3][2]=raze2[3][2];
                        raze2[3][2]=raze1[3][2];
                        cul3[3][2]=cul2[3][2];
                        cul2[3][2]=cul1[3][2];
                    }
                    raze1[3][2]=raza;
                    cul1[3][2]=9;
                    b[8].r=raza;
                    ok=1;
                    a=3;
                    c=2;
                }
                if((x>500&&x<600)&&(y>250&&y<350)&&validare(raza,3,3))
                {
                    cerc(37.5,0,b[9].x,b[9].y);
                    cerc(raza,9,b[9].x,b[9].y);
                    if(raze1[3][3])
                    {
                        raze3[3][3]=raze2[3][3];
                        raze2[3][3]=raze1[3][3];
                        cul3[3][3]=cul2[3][3];
                        cul2[3][3]=cul1[3][3];
                    }
                    raze1[3][3]=raza;
                    cul1[3][3]=9;
                    b[1].r=raza;
                    ok=1;
                    a=3;
                    c=3;
                }readimagefile("rp.jpg",300,0,600,45);
                if (ok)
                {
                    cerc(raza,0,c1,c2);
                    cerc(raza+1,0,c1,c2);
                    cerc(raza+2,0,c1,c2);
                    cerc(raza+3,0,c1,c2);
                    cerc(raza+4,0,c1,c2);
                    cerc(raza+5,0,c1,c2);
                    {
                        raze1[coord1][coord2]=raze2[coord1][coord2];
                        cul1[coord1][coord2]=cul2[coord1][coord2];
                        raze2[coord1][coord2]=raze3[coord1][coord2];
                        cul2[coord1][coord2]=cul3[coord1][coord2];
                        cerc(raze1[coord1][coord2],cul1[coord1][coord2],c1,c2);
                    }

                    break;
                }
            }
        }
    }

}
void jocpvsp()
{
    initwindow(900,400,"GOBBLET GOBBLERS");
    tabla();
    pozitii();

        click();

    getch();
}
void jocpcr()
{
    initwindow(900,400,"GOBBLET GOBBLERS");
    tabla();
    pozitii();

        click();

    getch();
}
void pcrandom()
{
    srand(time(NULL));
    int pion=rand()%6+1;
    int lin=rand()%3+1;
    int col=rand()%3+1;cout<<pion<<" "<<lin<<" "<<col;

}

int sfx;
int menuro();
int menueng();

int limba()
{
    int x,y;
    initwindow(900,400,"Gobblet Gobblers");
    sf::Music music;
    music.openFromFile("music.ogg");
    music.play();
    music.setLoop(true);
    readimagefile("limba.jpg",0,0,900,400);
    while(!kbhit())
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN, x, y);
            if((x>310&&x<500)&&(y>150&&y<215))
            {
                music.stop();
               if( menuro()==1)return 1;
            }
            else if((x>310&&x<480)&&(y>255&&y<400))
            {
                music.stop();
                if (menueng()==1) return 1;
            }
        }
        return 0;
}
int menuro()
{
    int x,y,dep;
    sf::Music music;
    music.openFromFile("music.ogg");
    music.play();
    music.setLoop(true);
    readimagefile("menuro.jpg",0,0,900,400);//imagine meniu romana
    dep=1;
    while(!kbhit())
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN, x, y);
            if(dep==1)
            {
                if((x>730&&x<790)&&(y>145&&y<195))
                {
                    readimagefile("play1.jpg",0,0,900,400);
                    dep=2;
                }
                else if ((x>715&&x<805)&&(y>200&&y<230))
                {
                    readimagefile("instructiuni.jpg",0,0,900,400);
                    dep=3;
                }
                else if ((x>730&&x<790)&&(y>235&&y<265))
                {
                    readimagefile("options.jpg",225,100,675,300);
                    dep=5;
                }
                else if ((x>735&&x<785)&&(y>270&&y<300))
                {
                    readimagefile("credits.jpg",0,0,900,400);
                    dep=6;
                }
                else if ((x>745&&x<778)&&(y>305&&y<335))
                {

                    return 1;
                }
            }
            else if(dep==2)
            {
                if((x>185&&x<315)&&(y>170&&y<210))
                {

                    jocpvsp();
                    if(gata())
                        dep=7;

                }
                else if((x>610&&x<720)&&(y>170&&y<210))
                {
                    cout<<"pvspc";
                }
                else
                    if((x>860&&x<900)&&(y>10&&y<40))//verifica casuta x instructiuni
                    {
                        readimagefile("menuro.jpg",0,0,900,400);//revine la meniu
                        dep=1;
                    }
            }
            else if(dep==3)
            {
                if((x>860&&x<900)&&(y>10&&y<40))//verifica casuta x instructiuni
                {
                    readimagefile("menuro.jpg",0,0,900,400);//revine la meniu
                    dep=1;
                }
                else if((x>815&&x<890)&&(y>353&&y<383))
                {
                    readimagefile("instructiuni2.jpg",0,0,900,400);
                    dep=4;
                }
            }
            else if(dep==4)
            {
                if((x>860&&x<900)&&(y>10&&y<40))//verifica casuta x instructiuni
                {
                    readimagefile("menuro.jpg",0,0,900,400);//revine la meniu
                    dep=1;
                }
            }
            else if(dep==5)
            {
                if((x>513&&x<539)&&(y>145&&y<177))
                    sfx=1;
                else if((x>543&&x<573)&&(y>145&&y<177))
                    sfx=0;
                else if((x>513&&x<539)&&(y>203&&y<233))
                {
                    music.play();
                    music.setLoop(true);
                }
                else if((x>543&&x<573)&&(y>203&&y<233))
                    music.stop();
                else if((x>638&&x<663)&&(y>112&&y<134))
                {
                    readimagefile("menuro.jpg",0,0,900,400);//revine la meniu
                    dep=1;
                }
            }

        }
        else
            if(dep==6)
        {
            if((x>860&&x<900)&&(y>10&&y<40))//verifica casuta x instructiuni
            {
                readimagefile("menuro.jpg",0,0,900,400);//revine la meniu
                dep=1;
            }
        }
        else
        if(dep==7)
        cout<<x<<" "<<y<<" ";
    }
    return 0;
}
int  menueng()
{
    int x,y,dep;
    sf::Music music;
    music.openFromFile("music.ogg");
    music.play();
    music.setLoop(true);
    readimagefile("menueng.jpg",0,0,900,400);//imagine meniu romana
    dep=1;
    while(!kbhit())
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN, x, y);
            if(dep==1)
            {
                if((x>730&&x<790)&&(y>145&&y<195))
                {
                    readimagefile("play1.jpg",0,0,900,400);
                    dep=2;
                }
                else if ((x>715&&x<805)&&(y>200&&y<230))
                {
                    readimagefile("instructions.jpg",0,0,900,400);
                    dep=3;
                }
                else if ((x>730&&x<790)&&(y>235&&y<265))
                {
                    readimagefile("options.jpg",225,100,675,300);
                    dep=5;
                }
                else if ((x>735&&x<785)&&(y>270&&y<300))
                {
                    readimagefile("credits.jpg",0,0,900,400);
                    dep=6;
                }
                else if ((x>745&&x<778)&&(y>305&&y<335))
                {

                    // getch();
                    return 1;
                }
            }
            else if(dep==2)
            {
                if((x>185&&x<315)&&(y>170&&y<210))
                {

                    jocpvsp();

                }
                else if((x>610&&x<720)&&(y>170&&y<210))
                {

                    cout<<"pvspc";
                }
                else

                    if((x>860&&x<900)&&(y>10&&y<40))//verifica casuta x instructiuni
                    {
                        readimagefile("menueng.jpg",0,0,900,400);//revine la meniu
                        dep=1;
                    }
            }
            else if(dep==3)
            {
                if((x>860&&x<900)&&(y>10&&y<40))//verifica casuta x instructiuni
                {
                    readimagefile("menueng.jpg",0,0,900,400);//revine la meniu
                    dep=1;
                }
                else if((x>815&&x<890)&&(y>353&&y<383))
                {
                    readimagefile("instructions2.jpg",0,0,900,400);
                    dep=4;
                }
            }
            else if(dep==4)
            {
                if((x>860&&x<900)&&(y>10&&y<40))//verifica casuta x instructiuni
                {
                    readimagefile("menueng.jpg",0,0,900,400);//revine la meniu
                    dep=1;
                }
            }
            else if(dep==5)
            {
                if((x>513&&x<539)&&(y>145&&y<177))
                    sfx=1;
                else if((x>543&&x<573)&&(y>145&&y<177))
                    sfx=0;
                else if((x>513&&x<539)&&(y>203&&y<233))
                {
                    music.play();
                    music.setLoop(true);
                }
                else if((x>543&&x<573)&&(y>203&&y<233))
                    music.stop();
                else if((x>638&&x<663)&&(y>112&&y<134))
                {
                    readimagefile("menueng.jpg",0,0,900,400);//revine la meniu
                    dep=1;
                }
            }
        }
        else if(dep==6)
        {
            if((x>860&&x<900)&&(y>10&&y<40))//verifica casuta x instructiuni
            {
                readimagefile("menueng.jpg",0,0,900,400);//revine la meniu
                dep=1;
            }
        }
    }
    return 0;
}
int dep7()
{
  int x,y;
  while(!kbhit())
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            getmouseclick(WM_LBUTTONDOWN, x, y);
                if((x>775&&x<900)&&(y>0&&y<45))
                return 1;
}}}
int main()
{



    if (limba()==1) closegraph();
    return 0;
}
