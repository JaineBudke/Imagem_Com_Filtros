#ifndef IMAGEM_H
#define IMAGEM_H

//DECLARAÇÃO DE STRUCT RGB
typedef struct RegPixel{
	int r;
	int g;
	int b;
} PIXEL;


typedef enum FILTRO {
	blur,
	sharpen, 
	binarizacao, 
	grayScale, 
	rotacionar, 
	emboss, 
	identity
} FILTROS;


//FUNÇÃO PARA LER A MATRIZ DA IMAGEM
int lerImagem(int lin, int col, PIXEL matriz[lin][col], FILE *matrizFoto);


//FUNÇÃO PARA IMPRIMIR TODAS AS IMAGENS -- COM TODOS FILTROS E A ORIGINAL
int escreverImagem(char tipo[2], int qual, int lin, int col, PIXEL matriz[lin][col], FILTROS filtro);


//FUNÇÃO PARA APLICAR FILTRO NA IMAGEM
void filtroImagem(FILTROS filtro, int lin, int col, PIXEL matriz[lin][col], PIXEL matrizModificada[lin][col]);


#endif