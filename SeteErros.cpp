#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<windows.h>
/*#include<windows.h>
using namespace std;*/

int main()
{
	
	/*initwindow(1080, 720, "Remambrance", 100,100);*/
	
	/*
	
		Posições das diferenças:
		
		Olho Posição X = 800 a 803 / Y = 219 a 224
		
		PerolaPescoco Posição X = 793 a 814 / Y = 302 a 320
		
		RoupaOmbro Posição X = 725 a 738 / Y = 342 a 358
		
		RoupaAbdomen Posição X = 812 a 826 / Y = 380 a 409
		
		PerolaUmbigo Posição X = 818 a 826 / Y = 445 a 456
		
		FaixaQuadril Posição X = 808 a 843 / Y = 479 a 488
		
		DobraBracoDireito Posição X = 713 a 728 / Y = 465 a 528
	
	*/
	
	
	/*PlaySound(TEXT("barracks.wav"),NULL,SND_ASYNC);
	system("pause");*/
	
	mciSendString("open .\\Musicas\\Musica.mp3 type MPEGVideo alias repetido", NULL, 0, 0);
	mciSendString("play repetido repeat", NULL, 0, 0);
	
	
	DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
	DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);	
	initwindow(screenWidth, screenHeight, "", -3, -3);
	
	POINT cursorPosition;
	int mX, mY;
	
	int vidas = 9;
	int coordenadaX;
	int coordenadaY;
	int qtdAcertos = 0;
	char txtVidas[50];
	char txtAcertos[50];
	
	bool ErroOlho = false;
	bool ErroPerolaPescoco = false;
	bool ErroRoupaOmbro = false;
	bool ErroRoupaAbdomen = false;
	bool ErroPerolaUmbigo = false;
	bool ErroFaixaQuadril = false;
	bool ErroDobraBraco = false;
	
	outtextxy(getmaxx() / 2 - 100, 30, "Jogo dos 7 erros.");
	outtextxy(getmaxx() / 3, 60, "Encontre e clique nas diferenças encontradas na segunda imagem.");
	outtextxy(getmaxx() / 3 + 30, 80, "Você tem 9 tentativas para encontrar as diferenças.");
	readimagefile("Imagens/ImgSeteErros2.jpg", getmaxx() / 4, 100, 1000, 600);
	
	
	
	while(1)
	{
	
		GetCursorPos(&cursorPosition);
		
		mX = cursorPosition.x;
		mY = cursorPosition.y;
		
		
		sprintf(txtVidas, "Vidas restantes: %d", vidas);
		outtextxy(getmaxx() - 200, 60, txtVidas);
		sprintf(txtAcertos, "Quantidade de acertos: %d", qtdAcertos);
		outtextxy(getmaxx() - 200, 80, txtAcertos);
		
		
		if(GetAsyncKeyState(VK_LBUTTON))
		{
			
			//Aqui verifica se está sendo clicado dentro da imagem
			if(mX >= 649 && mX <= 1000 && mY >= 100 && mY <= 600 && vidas > 0)
			{
				//Aqui verifica se o clique foi em uma posição da diferença(Posições comentadas lá em cima)
				if(mX >= 800 && mX <= 803 && mY >= 219 && mY <= 224)
				{
					if(ErroOlho == false)
					{
						/*setcolor(GREEN);
						line(mX, mY , mX+5, mY+10);
						line(mX + 5, mY + 10, mX + 13, mY - 5);*/
						//setcolor(RED);
						line(mX, mY - 5, mX+8, mY+8);
						line(mX+8, mY - 5, mX, mY+8);
						ErroOlho = true;
						qtdAcertos = qtdAcertos + 1;
					}
				}
				else if(mX >= 793 && mX <= 814 && mY >= 302 && mY <= 320)
				{
					if(ErroPerolaPescoco == false)
					{
						/*setcolor(GREEN);
						line(mX, mY , mX+5, mY+10);
						line(mX + 5, mY + 10, mX + 13, mY - 5);*/
						//setcolor(RED);
						line(mX, mY - 5, mX+8, mY+8);
						line(mX+8, mY - 5, mX, mY+8);
						ErroPerolaPescoco = true;
						qtdAcertos = qtdAcertos + 1;
					}
				}
				else if(mX >= 725 && mX <= 738 && mY >= 342 && mY <= 358)
				{	
					if(ErroRoupaOmbro == false)
					{
						/*setcolor(GREEN);
						line(mX, mY , mX+5, mY+10);
						line(mX + 5, mY + 10, mX + 13, mY - 5);*/
						//setcolor(RED);
						line(mX, mY - 5, mX+8, mY+8);
						line(mX+8, mY - 5, mX, mY+8);
						ErroRoupaOmbro = true;
						qtdAcertos = qtdAcertos + 1;
					}
				}
				else if(mX >= 812 && mX <= 826 && mY >= 380 && mY <= 409)
				{
					if(ErroRoupaAbdomen == false)
					{
						/*setcolor(GREEN);
						line(mX, mY , mX+5, mY+10);
						line(mX + 5, mY + 10, mX + 13, mY - 5);*/
						//setcolor(RED);
						line(mX, mY - 5, mX+8, mY+8);
						line(mX+8, mY - 5, mX, mY+8);
						ErroRoupaAbdomen = true;
						qtdAcertos = qtdAcertos + 1;
					}
				}
				else if(mX >= 818 && mX <= 826 && mY >= 445 && mY <= 456)
				{
					if(ErroPerolaUmbigo == false)
					{
						/*setcolor(GREEN);
						line(mX, mY , mX+5, mY+10);
						line(mX + 5, mY + 10, mX + 13, mY - 5);*/
						//setcolor(RED);
						line(mX, mY - 5, mX+8, mY+8);
						line(mX+8, mY - 5, mX, mY+8);
						ErroPerolaUmbigo = true;
						qtdAcertos = qtdAcertos + 1;
					}
				}
				else if(mX >= 808 && mX <= 843 && mY >= 479 && mY <= 488)
				{
					if(ErroFaixaQuadril == false)
					{
						/*setcolor(GREEN);
						line(mX, mY , mX+5, mY+10);
						line(mX + 5, mY + 10, mX + 13, mY - 5);*/
						//setcolor(RED);
						line(mX, mY - 5, mX+8, mY+8);
						line(mX+8, mY - 5, mX, mY+8);
						ErroFaixaQuadril = true;
						qtdAcertos = qtdAcertos + 1;
					}
				}
				else if(mX >= 713 && mX <= 728 && mY >= 465 && mY <= 528)
				{
					if(ErroDobraBraco == false)
					{
						/*setcolor(GREEN);
						line(mX, mY , mX+5, mY+10);
						line(mX + 5, mY + 10, mX + 13, mY - 5);*/
						//setcolor(RED);
						line(mX, mY - 5, mX+8, mY+8);
						line(mX+8, mY - 5, mX, mY+8);
						ErroDobraBraco = true;
						qtdAcertos = qtdAcertos + 1;
					}
				}
				else
				{
					
					//setcolor(RED);
					//line(mX, mY - 5, mX+8, mY+8);
					//line(mX+8, mY - 5, mX, mY+8);
					vidas = vidas - 1 ;
				}
				//outtextxy(200, 200, coordenada);
			}
			
			if(vidas == 0)
			{
				sprintf(txtVidas, "Vidas restantes: %d", vidas);
				outtextxy(getmaxx() - 200, 60, txtVidas);
				break;	
			}
			
			
			
			std::cout << mX << std::endl;
			std::cout << mY << std::endl;
			
		} 
		
		delay(100);

	}
	
	if(vidas == 0)
	{
		if(qtdAcertos >= 1)
		{
			outtextxy(60, 80, "Histórico de acertos:");
			if(ErroOlho == true)
			{ outtextxy(60, 100, "Cor do olho: encontrado"); }
			//else{  outtextxy(100, 80, "Cor do olho: não encontrado"); }
			
			if(ErroPerolaPescoco == true)
			{ outtextxy(60, 120, "Pérola do pescoço: encontrado"); }
			//else{  outtextxy(100, 80, "Pérola do pescoço: não encontrado"); }
			
			if(ErroRoupaOmbro == true)
			{ outtextxy(60, 140, "Ombro direito: encontrado"); }
			//else{  outtextxy(100, 80, "Ombro direito: não encontrado"); }
			
			if(ErroRoupaAbdomen == true)
			{ outtextxy(60, 160, "Detalhe no abdomen: encontrado"); }
			//else{  outtextxy(100, 80, "Diferença na cor do olho: não encontrado"); }
			
			if(ErroPerolaUmbigo == true)
			{ outtextxy(60, 180, "Pérola no umbigo: encontrado"); }
			//else{  outtextxy(100, 80, "Diferença na cor do olho: não encontrado"); }
			
			if(ErroFaixaQuadril == true)
			{ outtextxy(60, 200, "Faixa no quadril: encontrado"); }
			//else{  outtextxy(100, 80, "Diferença na cor do olho: não encontrado"); }
			
			if(ErroDobraBraco == true)
			{ outtextxy(60, 220, "Dobra a mais no braço direito: encontrado"); }
			//else{  outtextxy(100, 80, "Diferença na cor do olho: não encontrado"); }
			
		}
		else{
			outtextxy(100, 80, "Que pena, nenhum erro encontrado.");
		}
		
	}
	
			
		
	
	
	getch();
	closegraph();
}


