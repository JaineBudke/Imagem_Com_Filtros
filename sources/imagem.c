#include <stdio.h>
#include "../headers/imagem.h"
#include "../headers/filtro.h"

//LER MATRIZ DA IMAGEM
int lerImagem(int lin, int col, PIXEL matriz[lin][col], FILE *matrizFoto){

	int i, j;
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			fscanf(matrizFoto, "%i %i %i", &matriz[i][j].r, &matriz[i][j].g, &matriz[i][j].b);
		}
	}
	return 0;

}

//GERAR IMAGEM NO FORMATO PPM
int escreverImagem(char tipo[2], int qual, int lin, int col, PIXEL matriz[lin][col], FILTROS filtro){
	FILE *arquivo;
	
	switch(filtro){
		case blur:
			arquivo = fopen( "../galeria/blur.ppm", "w" );
			break;
		case sharpen:
			arquivo = fopen( "../galeria/sharpen.ppm", "w" );
			break;
		case binarizacao:
			arquivo = fopen( "../galeria/binarizacao.ppm", "w" );
			break;
		case grayScale:
			arquivo = fopen( "../galeria/grayScale.ppm", "w" );
			break;
		case rotacionar:
			arquivo = fopen( "../galeria/rotacionar.ppm", "w" );
			break;
		case emboss:
			arquivo = fopen( "../galeria/emboss.ppm", "w" );
			break;
		case identity:
			arquivo = fopen( "../galeria/identity.ppm", "w" );
			break;
		default:
			arquivo = fopen( "../galeria/original.ppm", "w" );
			break;
	}

	fprintf(arquivo, "%s\n", tipo);
	fprintf(arquivo, "%i %i\n", col, lin);
	fprintf(arquivo, "%i\n", qual);

	int i, j;
	for(i=0; i<lin; i++){
		for(j=0; j<col; j++){
			fprintf(arquivo, "%i %i %i", matriz[i][j].r, matriz[i][j].g, matriz[i][j].b);
			fprintf(arquivo, "\n");
		}
		fprintf(arquivo, "\n");
	}

	fclose(arquivo);
	return 0;
}

//APLICAR FILTRO NA IMAGEM
void filtroImagem(FILTROS filtro, int lin, int col, PIXEL matriz[lin][col], PIXEL matrizModificada[lin][col]){
	int l, c;
	switch(filtro){
		case blur:
			filtroBlur(lin, col, matriz, matrizModificada);
			break;
		case sharpen:
			filtroSharpen(lin, col, matriz, matrizModificada);
			break;
		case binarizacao:
			filtroThresholding(lin, col, matriz, matrizModificada);
			break;
		case grayScale:
			filtroGrayScale(lin, col, matriz, matrizModificada);
			break;
		case rotacionar:
			filtroRotacionar180(lin, col, matriz, matrizModificada);
			break;
		case emboss:
			filtroEmboss(lin, col, matriz, matrizModificada);
			break;
		case identity:
			filtroIdentity(lin, col, matriz, matrizModificada);
			break;
		default:
			for (l = 0; l < lin; l++) {
				for (c = 0; c < col; c++) {
					matrizModificada[l][c] = matriz[l][c];		
				}
			}
			break;
	}

}