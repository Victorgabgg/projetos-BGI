#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

int main() {
	int a=0, b=650, cont=0, i=0, aux=0, aux2=650, c, d=0;
 initwindow(650, 650, "Tabuleiro");
 
setbkcolor(RGB(165, 42, 42));
cleardevice();

 setfillstyle(1, RGB(255, 165, 0));
 bar3d(20, 20, 630, 630, 0, 5);
 // bar(80, 570, 570, 80);
 
 setcolor(RGB(0, 128, 0));
	do{
		a = a + 80; 
		b = b - 80; 
	 rectangle(a, b, b, a);
	 rectangle(a, b, b, a);
	 rectangle(a, b, b, a);
	 
	 cont++;
	 }while(cont < 3);
	 
	line(325, 80, 325, 570);
	line(80, 325, 570, 325);
	bar(241, 409, 409, 241);

//Casas

c = 10; 
d = getmaxx()/2;
	do{	aux = aux + 80; 
		aux2 = aux2 - 80;
		//Diagonal esquerda.
		setfillstyle(1, RGB(240, 248, 255)); 
		fillellipse(aux, aux2, c, c);
		fillellipse(aux2, aux, c, c);
		//Meio vertical
		setfillstyle(1, RGB(28, 28, 28)); 
		fillellipse(d, aux2, c, c);
		fillellipse(d, aux, c, c);
		//Meio horizontal
		setfillstyle(1, RGB(0, 128, 0));
		fillellipse(aux, d, c, c);
		fillellipse(aux2, d, c, c);
		//Diagonal direita.
		fillellipse(aux, aux, c, c);
		fillellipse(aux2, aux2, c, c);
		i++;
	}while(i<3);

//Corrigindo as cores
 fillellipse(80, 570, c, c);
 setfillstyle(1, RGB(28, 28, 28));
 fillellipse(240, d, c, c);

 while(!kbhit());
 closegraph();
 return 0;
}
