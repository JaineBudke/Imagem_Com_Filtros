#include <stdio.h>
#include "../headers/imagem.h"


int main(){

	//DECLARAÇÃO DE VARIÁVEIS
	char tipo[2];
	int i, j, col, lin, qual;

	FILE *matrizFoto = fopen( "lena.txt", "r" );

	fscanf(matrizFoto, "%s", tipo);
	fscanf(matrizFoto, "%i %i", &col, &lin);
	fscanf(matrizFoto, "%i", &qual);

	PIXEL matriz[lin][col];
	PIXEL matrizModificada[lin][col];

	lerImagem(lin, col, matriz, matrizFoto);
	
	fclose(matrizFoto);
	
	//IMPRIMIR TODAS AS IMAGENS -- COM FILTRO E ORIGINAL
	for(i=0; i<=7; i++){
		filtroImagem(i, lin, col, matriz, matrizModificada);
		escreverImagem(tipo, qual, lin, col, matrizModificada, i);
	}

	return 0;
}