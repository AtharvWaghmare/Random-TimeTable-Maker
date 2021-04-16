#include<stdio.h>
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int ssb(int);
void check(int);
int fmath(int);
int fphys(int);
int ffpl(int);
int fem(int);
int fbxe(int);
int fbme(int);
int smath(int);
int sfpl(int);
int sbme(int);
int sbxe(int);
int sem(int);
int sphy(int);
int km,mk=0;
int math=0,fpl=0,bme=0,bxe=0,phy=0,em=0;
int sm=0,sf=0,sp=0,sx=0,se=0,sb=0;
int data[6][6];
int ct=0;
void main()
{
	clrscr();
	randomize();
	ofstream fout;
	fout.open("tt.txt",ios::out);
	cout<<"names of 6 subjects are;-\n1.maths\n2.fpl\n3.physics\n4.mechanics\n5.bme\n6.bxe";
	char div,ch='y';
	do
	{
	cout<<"\nenter for which division for which time table is to be prepare";
	cin>>div;
	cout<<"\n TIME TABLE FOR DIVISION "<<div<<"\n";
	int m,r,ck;
	static int n=6;
	for(int i=0;i<6;i++)
	{       switch(i)
		{
			case 0:cout<<"MONDAY";
			break;
			case 1:cout<<"TUESDAY";
			break;
			case 2:cout<<"WEDNESDAY";
			break;
			case 3:cout<<"THUSDAY";
			break;
			case 4:cout<<"FRIDATY";
			break;
			case 5:cout<<"SATURDAY";
			break;
		}
		for(int j=0;j<6;j++)
		{
			m=random(n)+1;
		       //	mk=m;
		       //	if(mk==m)

			// m=i+j;
			r=ssb(m);
			//n++;
			if(r==0 && km==1)
			{
			j=j-1;
			}
			else
			r=j;
		}
	cout<<"\n";
	sm=0,sf=0,sp=0,sx=0,se=0,sb=0;
	ct=i;
	}
	cout<<"\n\n DO U WANT CONTINUE";
	cin>>ch;
	/*for(i=0;i<6;i++)
	{
	for(int j=0;j<6;j++)
	{
	 cout<<"\t"<<data[i][j];
	}
	cout<<"\n";
	}*/
	math=0,fpl=0,bme=0,bxe=0,phy=0,em=0;
	}while(ch=='y'||ch=='Y');
	getch();

}

int ssb(int a)
{       int m;
	switch(a)
	{
		case 1:
			m=fmath(math);
			km=smath(sm);
			if(m==0)
			{cout<<"\t MATHS"<<math;
			math++,sm++;
			data[ct][m]=1;
			return 1;}
			else
			return 0;
			break;
		case 2:
			m=ffpl(fpl);
			km=sfpl(sf);
			if(m==0)
			{cout<<"\t FPL"<<fpl;
			fpl++,sf++;
			data[ct][m]=2;
			return 1;}
			else
			return 0;
			break;
		case 3:
			m=fphys(phy);
			km=sphy(sp);
			if(m==0)
			{cout<<"\t PHYS"<<phy;
			phy++,sp++;
			data[ct][m]=3;
			return 1;}
			else
			return 0;
			break;
		case 4:
			m=fem(em);
			km=sem(se);
			if(m==0)
			{cout<<"\t EM"<<em;
			em++,se++;
			data[ct][m]=4;
			return 1;}
			else
			return 0;

			break;
		case 5:
			m=fbme(bme);
			km=sbme(sb);
			if(m==0)
			{cout<<"\t BME"<<bme;
			 bme++,sb++;
			 data[ct][m]=5;
			return 1;}
			else
			return 0;
			break;
		case 6:
			m=fbxe(bxe);
			km=sbxe(sx);
			if(m==0)
			{cout<<"\t BXE"<<bxe;
			bxe++,sx++;
			data[ct][m]=6;
			return 1;}
			else
			return 0;
			break;
}

}
int ffpl(int f)
{
	if(f<4)
	return 0;
	else
	return 1;
}
int fbme(int bm)
{
	if(bm<7)
	return 0;
	else
	return 1;
}
int fem(int me)
{
	if(me<7)
	return 0;
	else
	return 1;
}
int fbxe(int be)
{
	if(be<7)
	return 0;
	else
	return 1;
}
int fmath(int mat)
{
	if(mat<7)
	return 0;
	else
	return 1;
}
int fphys(int phy)
{
	if(phy<7)
	return 0;
	else
	return 1;
}


int smath(int sm)
{
	if(math<2)
	return 1;
	else
	return 0;
}
int sfpl(int sf)
{
	if(sf<2)
	return 1;
	else
	return 0;
}
int sbme(int sm)
{
	if(sm<2)
	return 1;
	else
	return 0;
}
int sbxe(int sx)
{
	if(sx<2)
	return 1;
	else
	return 0;
}
int sphy(int sp)
{
	if(sp<2)
	return 1;
	else
	return 0;
}
int sem(int se)
{
	if(se<2)
	return 1;
	else
	return 0;
}
