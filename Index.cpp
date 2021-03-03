#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include <conio.h> 
#include<iostream>
#include<windows.h>
#include<stddef.h>
#include<string.h>

char c;

POINT cursorPosition;
int mX, mY;

int x, y;

int TamanhoLetra = 32;
int InicioTxtX = 235;
int InicioTxtY = 490;


int QuebraLinha;
int QtdLinhas = 0;
int EspacamentoLetra = 0;
int EspacamentoLinhas = 27;



int TxtTela = 1;
int AcertouPuzzle = 0;



void FechaPrograma()
{
	getch();
	closegraph();
}

int Cena1()
{
	cleardevice();

	
	char texto1[] = "Olá!";
	char txt1[100];
	char texto2[] = "Meu nome é Akuyia";
	char txt2[200];
	char texto3[] = "Ou era... Enfim...";
	char txt3[200];
	char texto4[] = "Eu preciso de sua ajuda";
	char txt4[200];
	char texto5[] = "Mas antes, deixe-me te levar um pouco de volta no tempo...";
	char txt5[200];
	char texto6[] = "E contar a história da minha morte... ";
	char txt6[200];
	char texto7[] = "Eu nasci e cresci em Kaien, mas com apenas 17 primaveras fui nomeada a    guardiã de meu povo";
	char txt7[200];
	char texto8[] = "Desde criança, esse sempre fora o meu sonho... Poder proteger o mundo de    ameaças, lutando contra o mal...";
	char txt8[200];
	char texto9[] = "Mas... eu suponho que... 'Lutar contra o mal' é uma tarefa muito diferente do que eu imaginava quando tudo começou";
	char txt9[200];
	char texto10[] = "Oh! sim...";
	char txt10[200];
	char texto11[] = "Quando tudo começou...";
	char txt11[200];
	
	//2ª Cena BG Capital
	
	char texto12[] = "Protetora! Acabamos de ser informados de um ataque à aldeia de Moarchor, na região de Zurnü, parece que um grupo está saqueando a mina de Etork de lá";
	char txt12[200];
	char texto13[] = "Oh!";
	char txt13[200];
	char texto14[] = "Se o Etork cair em mãos erradas      teremos problemas";
	char txt14[200];
	char texto15[] = "...";
	char txt15[200];
	char texto16[] = "Certo, eu mesma irei resolver isso";
	char txt16[200];
	char texto17[] = "Mas...";
	char txt17[200];
	char texto18[] = "Está decidido!";
	char txt18[200];
	
	//3ª cena Aldeia Moarchor
	
	
	char texto19[] = "Ao chegar na Aldeia de Moarchor em   Zurnü, percebi que ela parecia estar  deserta. ";
	char txt19[200];
	
	char texto20[] = "Não demorou muito antes de um som    explosivo chamar a minha atenção. ";
	char txt20[200];
	
	char texto21[] = "Corri na direção do ruído e encontrei três saqueadores ainda na cena do     crime.";
	char txt21[200];
	
	char texto22[] = "Rapidamente, avancei na direção dos oponentes que aguardaram meu ataque   confiantes.";
	char txt22[200];
	
	char texto23[] = "Um confronto começou, três saqueadores habilidosos para a minha surpresa";
	char txt23[200];
	
	char texto24[] = "Porém";
	char txt24[200];
	
	char texto25[] = "Logo, derrubei o primeiro no chão e ganhei vantagem sobre os demais.";
	char txt25[200];
	
	char texto26[] = "A luta não durou muito antes dos três  desistirem e fugirem na direção da     floresta. Tentei alcançá-los, mas eles foram velozes e ágeis demais.";
	char txt26[200];
	
	char texto27[] = "Alguns flashes de memória tomam os   pensamentos de Akuyia, ela se sente     zonza e enjoada até que, de repente,   encontra algum tipo de sentido nas   imagens que invadiram sua mente.";
	char txt27[200];
	
	char texto28[] = "A seguir, lembre-se dos detalhes da luta e clique na dupla de saqueadores que se mantiveram de pé durante o     confronto.";
	char txt28[200];
	
	//Puzzle nessa parte
	
	//Cena Floresta
	
	char texto30[] = "Assim que encontrei o acampamento dos  saqueadores, fiquei à espreita        observando as interações do grupo.";
	char txt30[200];
	char texto31[] = "Muito bem, soldados! Lorde Kahlai em breve andará entre nós novamente e    vocês serão muito bem recompensados por sua bravura e lealdade!";
	char txt31[200];
	
	char texto32[] = "Vocês são seguidores de Kahlai...";
	char txt32[200];
	
	//Tudo fica preto aqui
	
	char texto33[] = "Quando recuperei a consciência, eu   estava cercada... ";
	char txt33[200];
	char texto34[] = "Caída aos pés do inimigo. ";
	char txt34[200];
	char texto35[] = "O líder da tropa se aproximou e me   encarou nos olhos";
	char txt35[200];
	char texto36[] = "Um sorriso singelo se abriu em seu   semblante e então, ele ergueu o braço esquerdo em minha direção e de sua    palma saiu uma rajada de fogo púrpuro  ";
	char txt36[200];
	char texto37[] = "E tudo ficou escuro...";
	char txt37[200];
	
	// Aqui tudo fica preto novamente
	
	
	
	char texto38[] = "“vocês são seguidores de Kahlai...”";
	char txt38[200];
	
	
	char texto39[] = "Novamente, flashes e imagens invadem a mente de Akuyia. E quando volta em si, Akuyia está cercada, caída aos pés do inimigo. ";
	char txt39[200];
	char texto40[] = "O líder da tropa se aproxima e a encara nos olhos, um sorriso singelo se abre em seu semblante, então, ele ergue o braço esquerdo e de sua palma sai uma rajada de fogo e tudo se apaga.";
	char txt40[200];
	
	
	
	int i;
	//while(1){					
	
	//readimagefile("Imagens/Cenario/Aldeiazinha.bmp", -10, -10, getmaxx(), getmaxy());
	//readimagefile("Imagens/ImgCenas/Cena1.bmp", -10, -10, getmaxx(), getmaxy()); //ancia
	delay(1000);
	settextjustify(1, 1); //1 = CENTER_TEXT
	setbkcolor(COLOR(228,222,203));
	//setfillstyle(SOLID_FILL, 2);
	setcolor(0);
	settextstyle(6, 4, 5);
	//readimagefile("Imagens/ImgCenas/Cena2.bmp", -10, -10, getmaxx(), getmaxy()); //ancia
	//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
	readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
	//setcolor(0);
	settextstyle(6, 4, 3);
	setcolor(COLOR(21,49,176));
	outtextxy(300, 420, "Akuyia");
	setcolor(0);
	settextstyle(6, 4, 5);
	for(i = 0; i < sizeof(texto1); i++)
	{
		QuebraLinha += 1;
		//char* txt1 = &texto1[i];
		sprintf(txt1, "%c", texto1[i]);
		outtextxy(250 + TamanhoLetra * i, InicioTxtY, txt1);
		//std::cout << txt1 << std::endl;
		delay(100);
	}
	TamanhoLetra = 20;
	readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
	while(1)
	{
		GetCursorPos(&cursorPosition);
		ScreenToClient(GetForegroundWindow(), &cursorPosition);
		x = cursorPosition.x;
		y = cursorPosition.y;
		setbkcolor(COLOR(228,222,203));
		if(GetAsyncKeyState(VK_LBUTTON))
		{
			if (TxtTela == 28){ TxtTela = 288; }
			if (TxtTela == 288)
			{
				if(AcertouPuzzle == 0){  readimagefile("Imagens/ImgCenas/PuzzleClique.bmp", -10, -10, getmaxx(), getmaxy()); delay(350); AcertouPuzzle = 2;}
				if(AcertouPuzzle == 2)
				{
					readimagefile("Imagens/ImgCenas/PuzzleClique.bmp", -10, -10, getmaxx(), getmaxy());
					//delay(5);
					if(GetAsyncKeyState(VK_LBUTTON))
					{
						std::cout << x << std::endl;
						std::cout << y << std::endl;
						if((x >= 0 && x <= 605) and (y >= 0 && y <= 325))
						{
							readimagefile("Imagens/ImgCenas/PuzzleCliqueErrado.bmp", -10, -10, getmaxx(), getmaxy());
							delay(500);
							TxtTela = 18;
							AcertouPuzzle = 2;
							std::cout << "clicou no de cima" << std::endl;
						}
						else if((x >= 0 && x <= 605) and (y >= 400 && y <= 700))
						{
							TxtTela = 29;
							AcertouPuzzle = 1;
							std::cout << "clicou no de baixo" << std::endl;
						}
						else if((x >= 795 && x <= 1200) and (y >= 245 && y <= 700))
						{
							readimagefile("Imagens/ImgCenas/PuzzleCliqueErrado.bmp", -10, -10, getmaxx(), getmaxy());
							delay(500);
							TxtTela = 18;
							AcertouPuzzle = 2;
							std::cout << "clicou no da direita" << std::endl;
						}
						//std::cout << x << std::endl;
						//std::cout << y << std::endl;
						//if(x > = )
					}
				}
			}
			else if((x >= 0 && x <= 1200) && (y >= 0 && y <= 720))
			{
				TxtTela += 1;
				if(TxtTela == 2)
				{
					//cleardevice();
					//readimagefile("Imagens/ImgCenas/Cena2.bmp", -10, -10, getmaxx(), getmaxy()); //ancia
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
					setcolor(COLOR(21,49,176));
					outtextxy(300, 420, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					
					
					
					
					QuebraLinha = 0;
					for(i = 0; i < sizeof(texto2); i++)
					{
						QuebraLinha += 1;
						sprintf(txt2, "%c", texto2[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto2[i] != ' ' && texto2[i-1] == ' ' && texto2[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt2);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto2[i+1] == ',')
								{
									sprintf(txt2, "%c", texto2[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt2);
								}
								else if(texto2[i+1] != ' ')
								{
									if(texto2[i+2] == ' ')
									{
										sprintf(txt2, "%c", texto2[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt3);
										i+=1;
									}
									else if(texto2[i] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto2[i] == ' ' || texto2[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto2[i+1] == ' ')
								{
									sprintf(txt2, "%c", texto2[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt2);
									i+= 2;
								}
								else{
									sprintf(txt2, "%c", texto2[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt2);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt2);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 3)
				{
				//cleardevice();
					//readimagefile("Imagens/ImgCenas/Cena2.bmp", -10, -10, getmaxx(), getmaxy()); //ancia
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
					setcolor(COLOR(21,49,176));
					outtextxy(300, 420, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					for(i = 0; i < sizeof(texto3); i++)
					{
						QuebraLinha += 1;
						sprintf(txt3, "%c", texto3[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto3[i] != ' ' && texto3[i-1] == ' ' && texto3[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt3);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto3[i+1] == ',')
								{
									sprintf(txt3, "%c", texto3[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt3);
								}
								else if(texto3[i+1] != ' ')
								{
									if(texto3[i+2] == ' ')
									{
										sprintf(txt3, "%c", texto3[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt3);
										i+=1;
									}
									else if(texto3[i] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else
						{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto3[i] == ' ' || texto3[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto3[i+1] == ' ')
								{
									sprintf(txt3, "%c", texto3[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt3);
									i+= 2;
								}
								else{
									sprintf(txt3, "%c", texto3[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt3);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt3);
							}
							EspacamentoLetra += 1;
						}
						delay(10);
					}
				}
				if(TxtTela == 4)
				{
				//cleardevice();
					//readimagefile("Imagens/ImgCenas/Cena2.bmp", -10, -10, getmaxx(), getmaxy()); //ancia
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					//bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
					setcolor(COLOR(21,49,176));
					outtextxy(300, 420, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					for(i = 0; i < sizeof(texto4); i++)
					{
						QuebraLinha += 1;
						sprintf(txt4, "%c", texto4[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto4[i] != ' ' && texto4[i-1] == ' ' && texto4[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt4);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto4[i+1] == ',')
								{
									sprintf(txt4, "%c", texto4[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt4);
								}
								else if(texto4[i+1] != ' ')
								{
									if(texto4[i+2] == ' ')
									{
										sprintf(txt4, "%c", texto4[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt4);
										i+=1;
									}
									else if(texto4[i] != ' ' && texto4[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto4[i] == ' ' || texto4[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto4[i+1] == ' ')
								{
									sprintf(txt4, "%c", texto4[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt4);
									i+= 2;
								}
								else{
									sprintf(txt4, "%c", texto4[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt4);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt4);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 5)
				{
				//cleardevice();
					//readimagefile("Imagens/ImgCenas/Cena2.bmp", -10, -10, getmaxx(), getmaxy()); //ancia
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					//bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
					setcolor(COLOR(21,49,176));
					outtextxy(300, 420, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					for(i = 0; i < sizeof(texto5); i++)
					{
						QuebraLinha += 1;
						sprintf(txt5, "%c", texto5[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto5[i] != ' ' && texto5[i-1] == ' ' && texto5[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt5);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								std::cout << texto5[i] << std::endl;
								if(texto5[i+1] == ',')
								{
									sprintf(txt5, "%c", texto5[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt5);
								}
								else if(texto5[i+1] != ' ')
								{
									if(texto5[i+2] == ' ')
									{
										sprintf(txt5, "%c", texto5[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt5);
										i+=1;
									}
									else if(texto5[i] != ' ' && texto5[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto5[i] == ' ' || texto5[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto5[i+1] == ' ')
								{
									sprintf(txt5, "%c", texto5[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt5);
									i+= 2;
								}
								else{
									sprintf(txt5, "%c", texto5[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt5);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt5);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 6)
				{
				//cleardevice();
					//readimagefile("Imagens/ImgCenas/Cena2.bmp", -10, -10, getmaxx(), getmaxy()); //ancia
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					//bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
					setcolor(COLOR(21,49,176));
					outtextxy(300, 420, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					for(i = 0; i < sizeof(texto6); i++)
					{
						QuebraLinha += 1;
						sprintf(txt6, "%c", texto6[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto6[i] != ' ' && texto6[i-1] == ' ' && texto6[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt6);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto6[i+1] == ',')
								{
									sprintf(txt6, "%c", texto6[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt6);
								}
								else if(texto6[i+1] != ' ')
								{
									if(texto6[i+2] == ' ')
									{
										sprintf(txt6, "%c", texto6[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt6);
										i+=1;
									}
									else if(texto6[i] != ' ' && texto6[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto6[i] == ' ' || texto6[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto6[i+1] == ' ')
								{
									sprintf(txt6, "%c", texto6[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt6);
									i+= 2;
								}
								else{
									sprintf(txt6, "%c", texto6[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt6);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt6);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 7)
				{
				//cleardevice();
					//readimagefile("Imagens/ImgCenas/Cena2.bmp", -10, -10, getmaxx(), getmaxy()); //ancia
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					//bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
					setcolor(COLOR(21,49,176));
					outtextxy(300, 420, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					for(i = 0; i < sizeof(texto7); i++)
					{
						QuebraLinha += 1;
						sprintf(txt7, "%c", texto7[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto7[i] != ' ' && texto7[i-1] == ' ' && texto7[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt7);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto7[i+1] == ',')
								{
									sprintf(txt7, "%c", texto7[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt7);
								}
								else if(texto7[i+1] != ' ')
								{
									if(texto7[i+2] == ' ')
									{
										sprintf(txt7, "%c", texto7[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt7);
										i+=1;
									}
									else if(texto7[i] != ' ' && texto7[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto7[i] == ' ' || texto7[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto7[i+1] == ' ')
								{
									sprintf(txt7, "%c", texto7[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt7);
									i+= 2;
								}
								else{
									sprintf(txt7, "%c", texto7[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt7);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt7);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 8)
				{
				//cleardevice();
					//readimagefile("Imagens/ImgCenas/Cena2.bmp", -10, -10, getmaxx(), getmaxy()); //ancia
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					//bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
					setcolor(COLOR(21,49,176));
					outtextxy(300, 420, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					for(i = 0; i < sizeof(texto8); i++)
					{
						QuebraLinha += 1;
						sprintf(txt8, "%c", texto8[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto8[i] != ' ' && texto8[i-1] == ' ' && texto8[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt8);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto8[i+1] == ',')
								{
									sprintf(txt8, "%c", texto8[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt8);
								}
								else if(texto8[i+1] != ' ')
								{
									if(texto8[i+2] == ' ')
									{
										sprintf(txt8, "%c", texto8[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt8);
										i+=1;
									}
									else if(texto8[i] != ' ' && texto8[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto8[i] == ' ' || texto8[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto8[i+1] == ' ')
								{
									sprintf(txt8, "%c", texto8[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt8);
									i+= 2;
								}
								else{
									sprintf(txt8, "%c", texto8[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt8);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt8);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 9)
				{
				//cleardevice();
					//readimagefile("Imagens/ImgCenas/Cena2.bmp", -10, -10, getmaxx(), getmaxy()); //ancia
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					//bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
					setcolor(COLOR(21,49,176));
					outtextxy(300, 420, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					for(i = 0; i < sizeof(texto9); i++)
					{
						QuebraLinha += 1;
						sprintf(txt9, "%c", texto9[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto9[i] != ' ' && texto9[i-1] == ' ' && texto9[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt9);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto9[i+1] == ',')
								{
									sprintf(txt9, "%c", texto9[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt9);
								}
								else if(texto9[i+1] != ' ')
								{
									if(texto9[i+2] == ' ')
									{
										sprintf(txt9, "%c", texto9[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt9);
										i+=1;
									}
									else if(texto9[i] != ' ' && texto9[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto9[i] == ' ' || texto9[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto9[i+1] == ' ')
								{
									sprintf(txt9, "%c", texto9[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt9);
									i+= 2;
								}
								else{
									sprintf(txt9, "%c", texto9[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt9);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt9);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 10)
				{
				//cleardevice();
					//readimagefile("Imagens/ImgCenas/Cena2.bmp", -10, -10, getmaxx(), getmaxy()); //ancia
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					//bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
					setcolor(COLOR(21,49,176));
					outtextxy(300, 420, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					for(i = 0; i < sizeof(texto10); i++)
					{
						QuebraLinha += 1;
						sprintf(txt10, "%c", texto10[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto10[i] != ' ' && texto10[i-1] == ' ' && texto10[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt10);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto10[i+1] == ',')
								{
									sprintf(txt10, "%c", texto10[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt10);
								}
								else if(texto10[i+1] != ' ')
								{
									if(texto10[i+2] == ' ')
									{
										sprintf(txt10, "%c", texto10[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt10);
										i+=1;
									}
									else if(texto10[i] != ' ' && texto10[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto10[i] == ' ' || texto10[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto10[i+1] == ' ')
								{
									sprintf(txt10, "%c", texto10[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt10);
									i+= 2;
								}
								else{
									sprintf(txt10, "%c", texto10[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt10);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt10);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 11)
				{
					//readimagefile("Imagens/ExpressoesAkuyia/Akuyia2.gif", 100, 100, 550, 800); 
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					setcolor(COLOR(21,49,176));
					outtextxy(300, 420, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto11); i++)
					{
						QuebraLinha += 1;
						sprintf(txt11, "%c", texto11[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto11[i] != ' ' && texto11[i-1] == ' ' && texto11[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt11);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto11[i+1] == ',')
								{
									sprintf(txt11, "%c", texto11[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt11);
								}
								else if(texto11[i+1] != ' ')
								{
									if(texto11[i+2] == ' ')
									{
										sprintf(txt11, "%c", texto11[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt11);
										i+=1;
									}
									else if(texto11[i] != ' ' && texto11[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto11[i] == ' ' || texto11[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto11[i+1] == ' ')
								{
									sprintf(txt11, "%c", texto11[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt11);
									i+= 2;
								}
								else{
									sprintf(txt11, "%c", texto11[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt11);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt11);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 12)
				{
					cleardevice();
					readimagefile("Imagens/Cenario/Capital.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesAkuyia/Akuyia2.gif", 100, 100, 550, 800); 
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					delay(2000);
					
					readimagefile("Imagens/ImgCenas/AkuyiaEConselho.bmp", 0, 0, getmaxx(), getmaxy());
					
					delay(1000);
					
					readimagefile("Imagens/ImgCenas/AkuyiaEConselhoBox.bmp", 0, 0, getmaxx(), getmaxy());
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					setcolor(COLOR(21,49,176));
					outtextxy(330, 435, "Conselheiro");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto12); i++)
					{
						QuebraLinha += 1;
						sprintf(txt12, "%c", texto12[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto12[i] != ' ' && texto12[i-1] == ' ' && texto12[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt12);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto12[i+1] == ',')
								{
									sprintf(txt12, "%c", texto12[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt12);
								}
								else if(texto12[i+1] != ' ')
								{
									if(texto12[i+2] == ' ')
									{
										sprintf(txt12, "%c", texto12[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt12);
										i+=1;
									}
									else if(texto12[i] != ' ' && texto12[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto12[i] == ' ' || texto12[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto12[i+1] == ' ')
								{
									sprintf(txt12, "%c", texto12[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt12);
									i+= 2;
								}
								else{
									sprintf(txt12, "%c", texto12[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt12);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt12);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 13)
				{
					//cleardevice();
					//readimagefile("Imagens/Cenario/Aldeia.jpeg", 0, 0, getmaxx(), getmaxy());
					readimagefile("Imagens/ImgCenas/AkuyiaEspantadaEConselho.bmp", 0, 0, getmaxx(), getmaxy());
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					setcolor(COLOR(21,49,176));
					outtextxy(330, 435, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto13); i++)
					{
						QuebraLinha += 1;
						sprintf(txt13, "%c", texto13[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto13[i] != ' ' && texto13[i-1] == ' ' && texto13[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt13);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto13[i+1] == ',')
								{
									sprintf(txt13, "%c", texto13[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt13);
								}
								else if(texto13[i+1] != ' ')
								{
									if(texto13[i+2] == ' ')
									{
										sprintf(txt13, "%c", texto13[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt13);
										i+=1;
									}
									else if(texto13[i] != ' ' && texto13[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto13[i] == ' ' || texto13[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto13[i+1] == ' ')
								{
									sprintf(txt13, "%c", texto13[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt13);
									i+= 2;
								}
								else{
									sprintf(txt13, "%c", texto13[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt13);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt13);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 14)
				{
					//cleardevice();
					//readimagefile("Imagens/Cenario/Aldeia.jpeg", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					readimagefile("Imagens/ImgCenas/AkuyiaEConselhoBox.bmp", 0, 0, getmaxx(), getmaxy());
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					setcolor(COLOR(21,49,176));
					outtextxy(330, 435, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto14); i++)
					{
						QuebraLinha += 1;
						sprintf(txt14, "%c", texto14[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto14[i] != ' ' && texto14[i-1] == ' ' && texto14[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt14);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto14[i+1] == ',')
								{
									sprintf(txt14, "%c", texto14[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt14);
								}
								else if(texto14[i+1] != ' ')
								{
									if(texto14[i+2] == ' ')
									{
										sprintf(txt14, "%c", texto14[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt14);
										i+=1;
									}
									else if(texto14[i] != ' ' && texto14[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto14[i] == ' ' || texto14[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto14[i+1] == ' ')
								{
									sprintf(txt14, "%c", texto14[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt14);
									i+= 2;
								}
								else{
									sprintf(txt14, "%c", texto14[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt14);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt14);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
					///readimagefile("Imagens/ImgCenas/ImgConselho.bmp", 0, 0, getmaxx(), getmaxy());
				}
				if(TxtTela == 15)
				{
					readimagefile("Imagens/ImgCenas/AkuyiaEConselhoBox.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoA/ConselhoA1Virada.gif", 750, 100, 1200, 800);
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					setcolor(COLOR(21,49,176));
					outtextxy(330, 435, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto15); i++)
					{
						QuebraLinha += 1;
						sprintf(txt15, "%c", texto15[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto15[i] != ' ' && texto15[i-1] == ' ' && texto15[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt15);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto15[i+1] == ',')
								{
									sprintf(txt15, "%c", texto15[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt15);
								}
								else if(texto15[i+1] != ' ')
								{
									if(texto15[i+2] == ' ')
									{
										sprintf(txt15, "%c", texto15[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt15);
										i+=1;
									}
									else if(texto15[i] != ' ' && texto15[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto15[i] == ' ' || texto15[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto15[i+1] == ' ')
								{
									sprintf(txt15, "%c", texto15[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt15);
									i+= 2;
								}
								else{
									sprintf(txt15, "%c", texto15[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt15);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt15);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 16)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/AkuyiaEConselhoBox.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					//readimagefile("Imagens/ExpressoesConselhoA/ConselhoA1Virada.gif", 750, 100, 1200, 800);
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					setcolor(COLOR(21,49,176));
					outtextxy(330, 435, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto16); i++)
					{
						QuebraLinha += 1;
						sprintf(txt16, "%c", texto16[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto16[i] != ' ' && texto16[i-1] == ' ' && texto16[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt16);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto16[i+1] == ',')
								{
									sprintf(txt16, "%c", texto16[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt16);
								}
								else if(texto16[i+1] != ' ')
								{
									if(texto16[i+2] == ' ')
									{
										sprintf(txt16, "%c", texto16[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt16);
										i+=1;
									}
									else if(texto16[i] != ' ' && texto16[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto16[i] == ' ' || texto16[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto16[i+1] == ' ')
								{
									sprintf(txt16, "%c", texto16[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt16);
									i+= 2;
								}
								else{
									sprintf(txt16, "%c", texto16[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt16);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt16);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 17)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/AkuyiaEConselhoBox.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					/*readimagefile("Imagens/ExpressoesAkuyia/Akuyia4.gif", 100, 100, 550, 800);
					readimagefile("Imagens/ExpressoesConselhoA/ConselhoA1Virada.gif", 750, 100, 1200, 800);*/
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					setcolor(COLOR(21,49,176));
					outtextxy(330, 435, "Conselheiro");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105);
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto17); i++)
					{
						QuebraLinha += 1;
						sprintf(txt17, "%c", texto17[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto17[i] != ' ' && texto17[i-1] == ' ' && texto17[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt17);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto17[i+1] == ',')
								{
									sprintf(txt17, "%c", texto17[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt17);
								}
								else if(texto17[i+1] != ' ')
								{
									if(texto17[i+2] == ' ')
									{
										sprintf(txt17, "%c", texto17[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt17);
										i+=1;
									}
									else if(texto17[i] != ' ' && texto17[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto17[i] == ' ' || texto17[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto17[i+1] == ' ')
								{
									sprintf(txt17, "%c", texto17[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt17);
									i+= 2;
								}
								else{
									sprintf(txt17, "%c", texto17[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt17);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt17);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 18)
				{
					//cleardevice();
					//readimagefile("Imagens/Cenario/Aldeia.jpeg", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					readimagefile("Imagens/ImgCenas/Cena5.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesAkuyia/Akuyia4.gif", 100, 100, 550, 800);
					//readimagefile("Imagens/ExpressoesConselhoA/ConselhoA1Virada.gif", 750, 100, 1200, 800);
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					setcolor(COLOR(21,49,176));
					outtextxy(330, 435, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105);
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto18); i++)
					{
						QuebraLinha += 1;
						sprintf(txt18, "%c", texto18[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto18[i] != ' ' && texto18[i-1] == ' ' && texto18[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt18);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto18[i+1] == ',')
								{
									sprintf(txt18, "%c", texto18[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt18);
								}
								else if(texto18[i+1] != ' ')
								{
									if(texto18[i+2] == ' ')
									{
										sprintf(txt18, "%c", texto18[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt18);
										i+=1;
									}
									else if(texto18[i] != ' ' && texto18[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto18[i] == ' ' || texto18[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto18[i+1] == ' ')
								{
									sprintf(txt18, "%c", texto18[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt18);
									i+= 2;
								}
								else{
									sprintf(txt18, "%c", texto18[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt18);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt18);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 19)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/Aldeia.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					/*readimagefile("Imagens/ExpressoesAkuyia/Akuyia3.gif", 100, 100, 550, 800);
					readimagefile("Imagens/ExpressoesConselhoA/ConselhoA2Virada.gif", 750, 100, 1200, 800);*/
					delay(500);
					
					readimagefile("Imagens/ImgCenas/Aldeia.bmp", 0, 0, getmaxx(), getmaxy());
					
					delay(500);
					
					readimagefile("Imagens/ImgCenas/Cena6.bmp", 0, 0, getmaxx(), getmaxy());
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto19); i++)
					{
						QuebraLinha += 1;
						sprintf(txt19, "%c", texto19[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto19[i] != ' ' && texto19[i-1] == ' ' && texto19[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt19);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto19[i+1] == ',')
								{
									sprintf(txt19, "%c", texto19[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt19);
								}
								else if(texto19[i+1] != ' ')
								{
									if(texto19[i+2] == ' ')
									{
										sprintf(txt19, "%c", texto19[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt19);
										i+=1;
									}
									else if(texto19[i] != ' ' && texto19[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto19[i] == ' ' || texto19[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto19[i+1] == ' ')
								{
									sprintf(txt19, "%c", texto19[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt19);
									i+= 2;
								}
								else{
									sprintf(txt19, "%c", texto19[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt19);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt19);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 20)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/Cena7.bmp", 0, 0, getmaxx(), getmaxy());
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto20); i++)
					{
						QuebraLinha += 1;
						sprintf(txt20, "%c", texto20[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto20[i] != ' ' && texto20[i-1] == ' ' && texto20[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt20);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto20[i+1] == ',')
								{
									sprintf(txt20, "%c", texto20[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt20);
								}
								else if(texto20[i+1] != ' ')
								{
									if(texto20[i+2] == ' ')
									{
										sprintf(txt20, "%c", texto20[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt20);
										i+=1;
									}
									else if(texto20[i] != ' ' && texto20[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto20[i] == ' ' || texto20[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto20[i+1] == ' ')
								{
									sprintf(txt20, "%c", texto20[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt20);
									i+= 2;
								}
								else{
									sprintf(txt20, "%c", texto20[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt20);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt20);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
					
				}
				if(TxtTela == 21)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/AkuyiaxSaqueadores.bmp", 0, 0, getmaxx(), getmaxy());
					delay(1000);
					readimagefile("Imagens/ImgCenas/Cena9.bmp", 0, 0, getmaxx(), getmaxy());
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto21); i++)
					{
						QuebraLinha += 1;
						sprintf(txt21, "%c", texto21[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto21[i] != ' ' && texto21[i-1] == ' ' && texto21[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt21);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto21[i+1] == ',')
								{
									sprintf(txt21, "%c", texto21[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt21);
								}
								else if(texto21[i+1] != ' ')
								{
									if(texto21[i+2] == ' ')
									{
										sprintf(txt21, "%c", texto21[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt21);
										i+=1;
									}
									else if(texto21[i] != ' ' && texto21[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto21[i] == ' ' || texto21[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto21[i+1] == ' ')
								{
									sprintf(txt21, "%c", texto21[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt21);
									i+= 2;
								}
								else{
									sprintf(txt21, "%c", texto21[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt21);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt21);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 22)
				{
					//cleardevice();
					//readimagefile("Imagens/ImgCenas/Cena9.bmp", 0, 0, getmaxx(), getmaxy());
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto22); i++)
					{
						QuebraLinha += 1;
						sprintf(txt22, "%c", texto22[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto22[i] != ' ' && texto22[i-1] == ' ' && texto22[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt22);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto22[i+1] == ',')
								{
									sprintf(txt22, "%c", texto22[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt22);
								}
								else if(texto22[i+1] != ' ')
								{
									if(texto22[i+2] == ' ')
									{
										sprintf(txt22, "%c", texto22[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt22);
										i+=1;
									}
									else if(texto22[i] != ' ' && texto22[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto22[i] == ' ' || texto22[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto22[i+1] == ' ')
								{
									sprintf(txt22, "%c", texto22[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt22);
									i+= 2;
								}
								else{
									sprintf(txt22, "%c", texto22[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt22);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt22);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 23)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/Cena9.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto23); i++)
					{
						QuebraLinha += 1;
						sprintf(txt23, "%c", texto23[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto23[i] != ' ' && texto23[i-1] == ' ' && texto23[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt23);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto23[i+1] == ',')
								{
									sprintf(txt23, "%c", texto23[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt23);
								}
								else if(texto23[i+1] != ' ')
								{
									if(texto23[i+2] == ' ')
									{
										sprintf(txt23, "%c", texto23[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt23);
										i+=1;
									}
									else if(texto23[i] != ' ' && texto23[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto23[i] == ' ' || texto23[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt23, "%c", texto23[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt23);
									i+= 2;
								}
								else{
									sprintf(txt23, "%c", texto23[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt23);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt23);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 24)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/Cena9.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto24); i++)
					{
						QuebraLinha += 1;
						sprintf(txt24, "%c", texto24[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto24[i] != ' ' && texto24[i-1] == ' ' && texto24[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt24);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto24[i+1] == ',')
								{
									sprintf(txt24, "%c", texto24[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt24);
								}
								else if(texto24[i+1] != ' ')
								{
									if(texto24[i+2] == ' ')
									{
										sprintf(txt24, "%c", texto24[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt24);
										i+=1;
									}
									else if(texto24[i] != ' ' && texto24[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto24[i] == ' ' || texto24[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt24, "%c", texto24[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt24);
									i+= 2;
								}
								else{
									sprintf(txt24, "%c", texto24[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt24);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt24);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 25)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/Cena10.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto25); i++)
					{
						QuebraLinha += 1;
						sprintf(txt25, "%c", texto25[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto25[i] != ' ' && texto25[i-1] == ' ' && texto25[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt25);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto25[i+1] == ',')
								{
									sprintf(txt25, "%c", texto25[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt25);
								}
								else if(texto25[i+1] != ' ')
								{
									if(texto25[i+2] == ' ')
									{
										sprintf(txt25, "%c", texto25[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt25);
										i+=1;
									}
									else if(texto25[i] != ' ' && texto25[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto25[i] == ' ' || texto25[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt25, "%c", texto25[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt25);
									i+= 2;
								}
								else{
									sprintf(txt25, "%c", texto25[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt25);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt25);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 26)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/Cena11.bmp", 0, 0, getmaxx(), getmaxy());
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto26); i++)
					{
						QuebraLinha += 1;
						sprintf(txt26, "%c", texto26[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto26[i] != ' ' && texto26[i-1] == ' ' && texto26[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt26);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto26[i+1] == ',')
								{
									sprintf(txt26, "%c", texto26[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt26);
								}
								else if(texto26[i+1] != ' ')
								{
									if(texto26[i+2] == ' ')
									{
										sprintf(txt26, "%c", texto26[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt26);
										i+=1;
									}
									else if(texto26[i] != ' ' && texto26[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto26[i] == ' ' || texto26[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt26, "%c", texto26[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt26);
									i+= 2;
								}
								else{
									sprintf(txt26, "%c", texto26[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt26);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt26);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 27)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/AkuyiaCansada.bmp", 0, 0, getmaxx(), getmaxy());
					delay(1000);
					readimagefile("Imagens/ImgCenas/Cena13.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto27); i++)
					{
						QuebraLinha += 1;
						sprintf(txt27, "%c", texto27[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto27[i] != ' ' && texto27[i-1] == ' ' && texto27[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt27);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto27[i+1] == ',')
								{
									sprintf(txt27, "%c", texto27[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt27);
								}
								else if(texto27[i+1] != ' ')
								{
									if(texto27[i+2] == ' ')
									{
										sprintf(txt27, "%c", texto27[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt27);
										i+=1;
									}
									else if(texto27[i] != ' ' && texto27[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto27[i] == ' ' || texto27[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt27, "%c", texto27[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt27);
									i+= 2;
								}
								else{
									sprintf(txt27, "%c", texto27[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt27);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt27);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 28)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/Cena13.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto28); i++)
					{
						QuebraLinha += 1;
						sprintf(txt28, "%c", texto28[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto28[i] != ' ' && texto28[i-1] == ' ' && texto28[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt28);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto28[i+1] == ',')
								{
									sprintf(txt28, "%c", texto28[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt28);
								}
								else if(texto28[i+1] != ' ')
								{
									if(texto28[i+2] == ' ')
									{
										sprintf(txt28, "%c", texto28[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt28);
										i+=1;
									}
									else if(texto28[i] != ' ' && texto28[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto28[i] == ' ' || texto28[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt28, "%c", texto28[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt28);
									i+= 2;
								}
								else{
									sprintf(txt28, "%c", texto28[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt28);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt28);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 30)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/FlorestaMabak.bmp", 0, 0, getmaxx(), getmaxy());
					delay(2000);
					/*readimagefile("Imagens/ImgCenas/AkuyiaObservandoSaqueadores.bmp", 0, 0, getmaxx(), getmaxy());
					delay(2000);*/
					readimagefile("Imagens/ImgCenas/GrupoSaqueadoresBox.bmp", 0, 0, getmaxx(), getmaxy());
					
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					//readimagefile("Imagens/ImgCenas/Cena13.bmp", 0, 0, getmaxx(), getmaxy());
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					setcolor(COLOR(21,49,176));
					outtextxy(330, 435, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto30); i++)
					{
						QuebraLinha += 1;
						sprintf(txt30, "%c", texto30[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto30[i] != ' ' && texto30[i-1] == ' ' && texto30[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt30);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto30[i+1] == ',')
								{
									sprintf(txt30, "%c", texto30[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt30);
								}
								else if(texto30[i+1] != ' ')
								{
									if(texto30[i+2] == ' ')
									{
										sprintf(txt30, "%c", texto30[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt30);
										i+=1;
									}
									else if(texto30[i] != ' ' && texto30[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto30[i] == ' ' || texto30[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt30, "%c", texto30[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt30);
									i+= 2;
								}
								else{
									sprintf(txt30, "%c", texto30[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt30);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt30);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 31)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/GrupoSaqueadoresBox.bmp", 0, 0, getmaxx(), getmaxy());
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					//readimagefile("Imagens/ImgCenas/Cena13.bmp", 0, 0, getmaxx(), getmaxy());
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					setcolor(COLOR(21,49,176));
					outtextxy(340, 430, "Líder do grupo");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto31); i++)
					{
						QuebraLinha += 1;
						sprintf(txt31, "%c", texto31[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto31[i] != ' ' && texto31[i-1] == ' ' && texto31[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt31);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto31[i+1] == ',')
								{
									sprintf(txt31, "%c", texto31[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt31);
								}
								else if(texto31[i+1] != ' ')
								{
									if(texto31[i+2] == ' ')
									{
										sprintf(txt31, "%c", texto31[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt31);
										i+=1;
									}
									else if(texto31[i] != ' ' && texto31[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto31[i] == ' ' || texto31[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt31, "%c", texto31[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt31);
									i+= 2;
								}
								else{
									sprintf(txt31, "%c", texto31[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt31);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt31);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 32)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/GrupoSaqueadoresBox.bmp", 0, 0, getmaxx(), getmaxy());
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					//readimagefile("Imagens/ImgCenas/Cena13.bmp", 0, 0, getmaxx(), getmaxy());
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					setcolor(COLOR(21,49,176));
					outtextxy(330, 435, "Akuyia");
					setcolor(0);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto32); i++)
					{
						QuebraLinha += 1;
						sprintf(txt32, "%c", texto32[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto32[i] != ' ' && texto32[i-1] == ' ' && texto32[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt32);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto32[i+1] == ',')
								{
									sprintf(txt32, "%c", texto32[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt32);
								}
								else if(texto32[i+1] != ' ')
								{
									if(texto32[i+2] == ' ')
									{
										sprintf(txt32, "%c", texto32[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt32);
										i+=1;
									}
									else if(texto32[i] != ' ' && texto32[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto32[i] == ' ' || texto32[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt32, "%c", texto32[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt32);
									i+= 2;
								}
								else{
									sprintf(txt32, "%c", texto32[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt32);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt32);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 33)
				{
					readimagefile("Imagens/ImgCenas/FundoPreto.jpg", 0, 0, getmaxx(), getmaxy());
					delay(2000);
					readimagefile("Imagens/ImgCenas/AkuyiaCercada.bmp", 0, 0, getmaxx(), getmaxy());
					delay(2000);
					readimagefile("Imagens/ImgCenas/AkuyiaCercadaBox.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					//setbkcolor(COLOR(228,222,203));
					
					//readimagefile("Imagens/ImgCenas/Cena13.bmp", 0, 0, getmaxx(), getmaxy());
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					setbkcolor(COLOR(228,222,203));
					setcolor(0);
					//bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					//readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto33); i++)
					{
						QuebraLinha += 1;
						sprintf(txt33, "%c", texto33[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto33[i] != ' ' && texto33[i-1] == ' ' && texto33[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt33);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto33[i+1] == ',')
								{
									sprintf(txt33, "%c", texto33[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt33);
								}
								else if(texto33[i+1] != ' ')
								{
									if(texto33[i+2] == ' ')
									{
										sprintf(txt33, "%c", texto33[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt33);
										i+=1;
									}
									else if(texto33[i] != ' ' && texto33[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto33[i] == ' ' || texto33[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt33, "%c", texto33[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt33);
									i+= 2;
								}
								else{
									sprintf(txt33, "%c", texto33[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt33);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt33);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 34)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/AkuyiaCercadaBox.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					//readimagefile("Imagens/ImgCenas/Cena13.bmp", 0, 0, getmaxx(), getmaxy());
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					//bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					//readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto34); i++)
					{
						QuebraLinha += 1;
						sprintf(txt34, "%c", texto34[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto34[i] != ' ' && texto34[i-1] == ' ' && texto34[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt34);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto34[i+1] == ',')
								{
									sprintf(txt34, "%c", texto34[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt34);
								}
								else if(texto34[i+1] != ' ')
								{
									if(texto34[i+2] == ' ')
									{
										sprintf(txt34, "%c", texto34[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt34);
										i+=1;
									}
									else if(texto34[i] != ' ' && texto34[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto34[i] == ' ' || texto34[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt34, "%c", texto34[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt34);
									i+= 2;
								}
								else{
									sprintf(txt34, "%c", texto34[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt34);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt34);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 35)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/SaqueadorEncarando.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					//readimagefile("Imagens/ImgCenas/Cena13.bmp", 0, 0, getmaxx(), getmaxy());
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto35); i++)
					{
						QuebraLinha += 1;
						sprintf(txt35, "%c", texto35[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto35[i] != ' ' && texto35[i-1] == ' ' && texto35[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt35);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto35[i+1] == ',')
								{
									sprintf(txt35, "%c", texto35[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt35);
								}
								else if(texto35[i+1] != ' ')
								{
									if(texto35[i+2] == ' ')
									{
										sprintf(txt35, "%c", texto35[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt35);
										i+=1;
									}
									else if(texto35[i] != ' ' && texto35[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto35[i] == ' ' || texto35[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt35, "%c", texto35[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt35);
									i+= 2;
								}
								else{
									sprintf(txt35, "%c", texto35[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt35);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt35);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 36)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/SaqueadorFogoEncarando.bmp", 0, 0, getmaxx(), getmaxy());
					delay(500);
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					//readimagefile("Imagens/ImgCenas/Cena13.bmp", 0, 0, getmaxx(), getmaxy());
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto36); i++)
					{
						QuebraLinha += 1;
						sprintf(txt36, "%c", texto36[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto36[i] != ' ' && texto36[i-1] == ' ' && texto36[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt36);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto36[i+1] == ',')
								{
									sprintf(txt36, "%c", texto36[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt36);
								}
								else if(texto36[i+1] != ' ')
								{
									if(texto36[i+2] == ' ')
									{
										sprintf(txt36, "%c", texto36[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt36);
										i+=1;
									}
									else if(texto36[i] != ' ' && texto36[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto36[i] == ' ' || texto36[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt36, "%c", texto36[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt36);
									i+= 2;
								}
								else{
									sprintf(txt36, "%c", texto36[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt36);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt36);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 37)
				{
					readimagefile("Imagens/ImgCenas/FundoPreto.jpg", 0, 0, getmaxx(), getmaxy());
					delay(1000);
					//readimagefile("Imagens/ImgCenas/Cena155.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					//readimagefile("Imagens/ImgCenas/Cena13.bmp", 0, 0, getmaxx(), getmaxy());
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					//bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/Interface/Box.bmp", 150, getmaxy() - 320, getmaxx() - 160, getmaxy() - 80);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto37); i++)
					{
						QuebraLinha += 1;
						sprintf(txt37, "%c", texto37[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto37[i] != ' ' && texto37[i-1] == ' ' && texto37[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt37);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto37[i+1] == ',')
								{
									sprintf(txt37, "%c", texto37[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt37);
								}
								else if(texto37[i+1] != ' ')
								{
									if(texto37[i+2] == ' ')
									{
										sprintf(txt37, "%c", texto37[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt37);
										i+=1;
									}
									else if(texto37[i] != ' ' && texto37[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto37[i] == ' ' || texto37[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt37, "%c", texto37[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt37);
									i+= 2;
								}
								else{
									sprintf(txt37, "%c", texto37[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt37);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt37);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 38)
				{
					settextstyle(6, 4, 7);
					setcolor(0);
					setbkcolor(0);
					readimagefile("Imagens/ImgCenas/FundoPreto.jpg", 0, 0, getmaxx(), getmaxy()); //ancia
					//readimagefile("Imagens/Interface/Logo1.bmp", 100, 150, 1100, 350);
					setcolor(15);
					outtextxy(getmaxx() / 2, getmaxy() / 2 , "CONTINUA...");
					delay(500);
					
					/*settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);					
					setfillstyle(EMPTY_FILL, getmaxcolor());
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto38); i++)
					{
						QuebraLinha += 1;
						sprintf(txt38, "%c", texto38[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto38[i] != ' ' && texto38[i-1] == ' ' && texto38[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt38);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto38[i+1] == ',')
								{
									sprintf(txt38, "%c", texto38[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt38);
								}
								else if(texto38[i+1] != ' ')
								{
									if(texto38[i+2] == ' ')
									{
										sprintf(txt38, "%c", texto38[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt38);
										i+=1;
									}
									else if(texto38[i] != ' ' && texto38[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto38[i] == ' ' || texto38[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt38, "%c", texto38[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt38);
									i+= 2;
								}
								else{
									sprintf(txt38, "%c", texto38[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt38);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt38);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}*/
				}
				/*if(TxtTela == 39)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/Cena155.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					//readimagefile("Imagens/ImgCenas/Cena13.bmp", 0, 0, getmaxx(), getmaxy());
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto39); i++)
					{
						QuebraLinha += 1;
						sprintf(txt39, "%c", texto39[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto39[i] != ' ' && texto39[i-1] == ' ' && texto39[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt39);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto39[i+1] == ',')
								{
									sprintf(txt39, "%c", texto39[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt39);
								}
								else if(texto39[i+1] != ' ')
								{
									if(texto39[i+2] == ' ')
									{
										sprintf(txt39, "%c", texto39[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt39);
										i+=1;
									}
									else if(texto39[i] != ' ' && texto39[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto39[i] == ' ' || texto39[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt39, "%c", texto39[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt39);
									i+= 2;
								}
								else{
									sprintf(txt39, "%c", texto39[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt39);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt39);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 40)
				{
					//cleardevice();
					readimagefile("Imagens/ImgCenas/Cena155.bmp", 0, 0, getmaxx(), getmaxy());
					//readimagefile("Imagens/ExpressoesConselhoB/ConselhoB1.gif", 100, 100, 550, 800);
					
					settextjustify(1, 1); //1 = CENTER_TEXT
					settextstyle(6, 4, 3);
					
					//readimagefile("Imagens/ImgCenas/Cena13.bmp", 0, 0, getmaxx(), getmaxy());
					setfillstyle(EMPTY_FILL, getmaxcolor());
					//bar3d(200, getmaxy() - 250, getmaxx() - 180, getmaxy() - 100, 0, 0);
					bar(200, getmaxy() - 240, getmaxx() - 180, getmaxy() - 100);
					readimagefile("Imagens/CliqueMouse2.gif", getmaxx() - 210, getmaxy() - 130, getmaxx() - 180, getmaxy() - 105); //ancia
					
					EspacamentoLetra = 0;
					QuebraLinha = 0;
					QtdLinhas = 0;
					
					for(i = 0; i < sizeof(texto40); i++)
					{
						QuebraLinha += 1;
						sprintf(txt40, "%c", texto40[i]);
						if(QuebraLinha <= 37)
						{
							if(QuebraLinha == 37 && texto40[i] != ' ' && texto40[i-1] == ' ' && texto40[i+1] != ' ')
							{
								i -= 1;
							}
							else
							{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt40);
							}
							EspacamentoLetra += 1;
							if(QuebraLinha == 37)
							{
								if(texto40[i+1] == ',')
								{
									sprintf(txt40, "%c", texto40[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt40);
								}
								else if(texto40[i+1] != ' ')
								{
									if(texto40[i+2] == ' ')
									{
										sprintf(txt40, "%c", texto40[i+1]);
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt40);
										i+=1;
									}
									else if(texto40[i] != ' ' && texto40[i-1] != ' ')
									{
										outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, "-");
									}
								}
							}
						}
						else{
							QtdLinhas += 1;
							QuebraLinha = 0;
							EspacamentoLetra = 0;
							if(texto40[i] == ' ' || texto40[i] == ','){
								InicioTxtX - EspacamentoLetra;
								if(texto23[i+1] == ' ')
								{
									sprintf(txt40, "%c", texto40[i+2]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt40);
									i+= 2;
								}
								else{
									sprintf(txt40, "%c", texto40[i+1]);
									outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt40);
									i+= 1;
								}
							}
							else{
								outtextxy(InicioTxtX + TamanhoLetra * EspacamentoLetra, InicioTxtY + QtdLinhas * EspacamentoLinhas, txt40);
							}
							EspacamentoLetra += 1;
							
						}
						delay(10);
					}
				}
				if(TxtTela == 41)
				{
					settextstyle(6, 4, 5);
					setcolor(0);
					readimagefile("Imagens/Interface/Fundo.jpg", 0, 0, getmaxx(), getmaxy()); //ancia
					readimagefile("Imagens/Interface/Logo1.bmp", 100, 150, 1100, 350);
					outtextxy(getmaxx() / 2, getmaxy() / 2 + 100, "CONTINUA...");
					setbkcolor(0);
					delay(500);
					
				}*/
			}
		}
	}
	
	//readimagefile("Imagens/ExpressoesAkuyia/Akuyia1.gif", getmaxx() - 600, 100, getmaxx() - 150, 800); //ancia
	
}











int JogoSeteErros()
{
	
	
	cleardevice();
	
	/*DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
	DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);	
	initwindow(screenWidth, screenHeight, "", -3, -3);*/
	
	/*POINT cursorPosition;
	int mX, mY;*/
	
	int vidas = 9;
	int coordenadaX;
	int coordenadaY;
	int qtdAcertos = 0;
	char txtVidas[50];
	char txtAcertos[50];
	
	//setbkcolor(2);
	
	bool ErroOlho = false;
	bool ErroPerolaPescoco = false;
	bool ErroRoupaOmbro = false;
	bool ErroRoupaAbdomen = false;
	bool ErroPerolaUmbigo = false;
	bool ErroFaixaQuadril = false;
	bool ErroDobraBraco = false;
	
	//readimagefile("Imagens/Cenario/Aldeia.jpeg", 0, 0, getmaxx(), getmaxy());
	
	settextjustify(1, 1); //1 = CENTER_TEXT
	settextstyle(3, 4, 1);
	outtextxy(getmaxx() / 2, 30, "Jogo dos 7 erros.");
	outtextxy(getmaxx() / 2, 60, "Encontre e clique nas diferenças encontradas na segunda imagem.");
	outtextxy(getmaxx() / 2, 80, "Você tem 9 tentativas para encontrar as diferenças.");
	readimagefile("Imagens/ImgSeteErros2.jpg", getmaxx() / 4, 100, 1000, 600);
	//readimagefile("Imagens/ExpressoesAkuyia/Akuyia2.gif", 100, 100, 500, 800); //ancia
	//readimagefile("Imagens/ExpressoesAkuyia/Akuyia1.gif", getmaxx() - 600 , 100, getmaxx() - 200, 800); //ancia
	
	
	
	//readimagefile("Imagens/ExpressoesAkuyia/Akuyia2.gif", 100, 100, 550, 800); //ancia
	//readimagefile("Imagens/ExpressoesAkuyia/Akuyia1.gif", getmaxx() - 600, 100, getmaxx() - 150, 800); //ancia
	
	//printimage("Imagens/ExpressoesAncia.gif", 7, 0.75, 0.75, 100, 100, 1000, 600);	
	
	
		while(1)
		{
			
				
				GetCursorPos(&cursorPosition);
				ScreenToClient(GetForegroundWindow(), &cursorPosition);
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
								/*line(mX, mY - 5, mX+8, mY+8);
								line(mX+8, mY - 5, mX, mY+8);*/
								readimagefile("Imagens/iconeX.gif", mX - 5, mY - 5, mX + 15, mY + 15);
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
								/*line(mX, mY - 5, mX+8, mY+8);
								line(mX+8, mY - 5, mX, mY+8);*/
								readimagefile("Imagens/iconeX.gif", mX - 5, mY - 5, mX + 15, mY + 15);
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
								/*line(mX, mY - 5, mX+8, mY+8);
								line(mX+8, mY - 5, mX, mY+8);*/
								readimagefile("Imagens/iconeX.gif", mX - 5, mY - 5, mX + 15, mY + 15);
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
								/*line(mX, mY - 5, mX+8, mY+8);
								line(mX+8, mY - 5, mX, mY+8);*/
								readimagefile("Imagens/iconeX.gif", mX - 5, mY - 5, mX + 15, mY + 15);
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
								/*line(mX, mY - 5, mX+8, mY+8);
								line(mX+8, mY - 5, mX, mY+8);*/
								readimagefile("Imagens/iconeX.gif", mX - 5, mY - 5, mX + 15, mY + 15);
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
								/*line(mX, mY - 5, mX+8, mY+8);
								line(mX+8, mY - 5, mX, mY+8);*/
								readimagefile("Imagens/iconeX.gif", mX - 5, mY - 5, mX + 15, mY + 15);
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
								/*line(mX, mY - 5, mX+8, mY+8);
								line(mX+8, mY - 5, mX, mY+8);*/
								readimagefile("Imagens/iconeX.gif", mX - 5, mY - 5, mX + 15, mY + 15);
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
				
					/*do{
					c = (char) getch( );
					if(c != 27)
					{
				   		JogoSeteErros();
					}
					else
					{  FechaPrograma(); break; }
					} while ((c != 27));*/
					
				if(qtdAcertos == 7)
				{
					settextjustify(2, 1);
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
					break;
				}
				
		/*c = (char) getch( );
		if(c == 27)
		{  closegraph(); exit(1); }*/
		
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
				outtextxy(70, 80, "Que pena, nenhum erro encontrado.");
				outtextxy(70, 100, "Pressione qualquer tecla para continuar.");
			}
			
		}
	}



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
	
	//waveOutSetVolume(0,0x88888888); //volume no médio
	waveOutSetVolume(0,0xFFFFFFFF); //volume no maximo
	//waveOutSetVolume(0,0x01111111); //volume no baixo
	mciSendString("open .\\Musicas\\Musica4.wav type MPEGVideo alias repetido", NULL, 0, 0);
	mciSendString("play repetido repeat", NULL, 0, 0);
	
	DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
	DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);	
	//initwindow(screenWidth, screenHeight, "", -3, -3);
	initwindow(1200, 700, "Remembrance", 10, 10, false, true);	

	settextjustify(1, 1); //1 = CENTER_TEXT
	settextstyle(8, 4, 2);
	//outtextxy(getmaxx() / 2, 30, "Pressione qualquer tecla para iniciar e Esc para sair.");
	setbkcolor(COLOR(35,72,41));
	readimagefile("Imagens/ImgCenas/TelaInicio.bmp", 0, 0, getmaxx(), getmaxy()); //ancia
	outtextxy(getmaxx() / 2, getmaxy() - 20, "Clique com o botão esquerdo do mouse para continuar.");
	//setbkcolor(COLOR(228,222,203));
	//readimagefile("Imagens/Interface/Fundo.jpg", 0, 0, getmaxx(), getmaxy()); //ancia
	
	//readimagefile("Imagens/Interface/Logo1.bmp", 100, 250, 1100, 450); //ancia
	
	
	//settextstyle(6, 4, 5);
	//outtextxy(getmaxx() / 2, getmaxy() / 2, "REMEMBRANCE");
	
	
	//readimagefile("Imagens/ImgCenas/PuzzleClique.bmp", 0, 0, getmaxx(), getmaxy()); //ancia
	
	
	while(1){		
		//int x, y;	
		
		GetCursorPos(&cursorPosition);
		ScreenToClient(GetForegroundWindow(), &cursorPosition);
		x = cursorPosition.x;
		y = cursorPosition.y;
		if(GetAsyncKeyState(VK_LBUTTON))
		{
			
			if(x >= 0 && y >= 0){
				setbkcolor(0);
				Cena1();
				//std::cout << x << std::endl;
				//std::cout << y << std::endl;
				//JogoSeteErros();	
				break;
			}
		}else if(GetAsyncKeyState(VK_RBUTTON)){
			if(x >= 0 && y >= 0){
				closegraph(); exit(1);
			}
		}
	}
	
	getch();
	closegraph();
	
}


