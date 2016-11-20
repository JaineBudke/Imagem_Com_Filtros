#include <stdio.h>
#include "../headers/imagem.h"
#include "../headers/filtro.h"

//Aplicação do filtro 'Blur'
void filtroBlur(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]){
	
	int lin, col, sum1, sum2, sum3, i, j;

	float boxblur[3][3] = {
		{ 0.0625, 0.125, 0.0625 },
		{ 0.125,  0.25,  0.125  },
		{ 0.0625, 0.125, 0.0625 }
	};

	for(lin=1; lin<n-1; lin++){
		for(col=1; col<m-1; col++){
			sum1 = 0, sum2 = 0, sum3 = 0;
			for(i=0; i<3; i++){
				for(j=0; j<3; j++){
					sum1 += (original[lin-1 + i][col-1 + j].r) * boxblur[i][j];
					sum2 += (original[lin-1 + i][col-1 + j].g) * boxblur[i][j];
					sum3 += (original[lin-1 + i][col-1 + j].b) * boxblur[i][j];
				}
			}

			if(sum1 > 255){
				sum1 = 255;
			}
			if(sum1 < 0){
				sum1 = 0;
			}
			if(sum2 > 255){
				sum2 = 255;
			}
			if(sum2 < 0){
				sum2 = 0;
			}
			if(sum3 > 255){
				sum3 = 255;
			}
			if(sum3 < 0){
				sum3 = 0;
			}

			modificada[lin][col].r = sum1;
			modificada[lin][col].g = sum2;
			modificada[lin][col].b = sum3;
		}
	}
}

//Aplicação do filtro 'Sharpen'
void filtroSharpen(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]){
	
	int lin, col, sum1, sum2, sum3, i, j;

	float boxsharpen[3][3] = {
		{  0, -1,  0  },
		{ -1,  5, -1  },
		{  0, -1,  0  }
	};

	for(lin=1; lin<n-1; lin++){
		for(col=1; col<m-1; col++){
			sum1 = 0, sum2 = 0, sum3 = 0;
			for(i=0; i<3; i++){
				for(j=0; j<3; j++){
					sum1 += (original[lin-1 + i][col-1 + j].r) * boxsharpen[i][j];
					sum2 += (original[lin-1 + i][col-1 + j].g) * boxsharpen[i][j];
					sum3 += (original[lin-1 + i][col-1 + j].b) * boxsharpen[i][j];
				}
			}

			if(sum1 > 255){
				sum1 = 255;
			}
			if(sum1 < 0){
				sum1 = 0;
			}
			if(sum2 > 255){
				sum2 = 255;
			}
			if(sum2 < 0){
				sum2 = 0;
			}
			if(sum3 > 255){
				sum3 = 255;
			}
			if(sum3 < 0){
				sum3 = 0;
			}

			modificada[lin][col].r = sum1;
			modificada[lin][col].g = sum2;
			modificada[lin][col].b = sum3;
		}
	}
}


//Aplicação do filtro 'Emboss'
void filtroEmboss(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]){
	
	int lin, col, sum1, sum2, sum3, i, j;

	float boxemboss[3][3] = {
		{ -2, -1,  0  },
		{ -1,  1,  1  },
		{  0,  1,  2  }
	};

	for(lin=1; lin<n-1; lin++){
		for(col=1; col<m-1; col++){
			sum1 = 0, sum2 = 0, sum3 = 0;
			for(i=0; i<3; i++){
				for(j=0; j<3; j++){
					sum1 += (original[lin-1 + i][col-1 + j].r) * boxemboss[i][j];
					sum2 += (original[lin-1 + i][col-1 + j].g) * boxemboss[i][j];
					sum3 += (original[lin-1 + i][col-1 + j].b) * boxemboss[i][j];
				}
			}

			if(sum1 > 255){
				sum1 = 255;
			}
			if(sum1 < 0){
				sum1 = 0;
			}
			if(sum2 > 255){
				sum2 = 255;
			}
			if(sum2 < 0){
				sum2 = 0;
			}
			if(sum3 > 255){
				sum3 = 255;
			}
			if(sum3 < 0){
				sum3 = 0;
			}

			modificada[lin][col].r = sum1;
			modificada[lin][col].g = sum2;
			modificada[lin][col].b = sum3;
		}
	}
}

//Aplicação do filtro 'Identity'
void filtroIdentity(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]){
	
	int lin, col, sum1, sum2, sum3, i, j;

	float boxidentity[3][3] = {
		{  0,  0,  0  },
		{  0,  1,  0  },
		{  0,  0,  0  }
	};

	for(lin=1; lin<n-1; lin++){
		for(col=1; col<m-1; col++){
			sum1 = 0, sum2 = 0, sum3 = 0;
			for(i=0; i<3; i++){
				for(j=0; j<3; j++){
					sum1 += (original[lin-1 + i][col-1 + j].r) * boxidentity[i][j];
					sum2 += (original[lin-1 + i][col-1 + j].g) * boxidentity[i][j];
					sum3 += (original[lin-1 + i][col-1 + j].b) * boxidentity[i][j];
				}
			}

			if(sum1 > 255){
				sum1 = 255;
			}
			if(sum1 < 0){
				sum1 = 0;
			}
			if(sum2 > 255){
				sum2 = 255;
			}
			if(sum2 < 0){
				sum2 = 0;
			}
			if(sum3 > 255){
				sum3 = 255;
			}
			if(sum3 < 0){
				sum3 = 0;
			}

			modificada[lin][col].r = sum1;
			modificada[lin][col].g = sum2;
			modificada[lin][col].b = sum3;
		}
	}
}

//Aplicação do filtro 'rotacionar180'
void filtroRotacionar180(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]){
	
	int lin, col, i, j;
	int linha=1, coluna=1;

	for(lin=n-1; lin>0; lin--){
		for(col=m-1; col>0; col--){
			modificada[linha][coluna].r = original[lin][col].r;
			modificada[linha][coluna].g = original[lin][col].g;
			modificada[linha][coluna].b = original[lin][col].b;
			coluna++;
		}
		linha++;
		coluna=1;
	}
}

//Aplicação do filtro 'GrayScale'
void filtroGrayScale(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]){
	
	int lin, col, sum, i, j;

	float boxGrayScale[3][3] = {
		{  0,  0,  0  },
		{  0,  1,  0  },
		{  0,  0,  0  }
	};

	for(lin=1; lin<n-1; lin++){
		for(col=1; col<m-1; col++){
			sum = 0;
			for(i=0; i<3; i++){
				for(j=0; j<3; j++){
					sum +=  ((original[lin-1 + i][col-1 + j].r) * boxGrayScale[i][j]
					     +   (original[lin-1 + i][col-1 + j].g) * boxGrayScale[i][j]
					     +   (original[lin-1 + i][col-1 + j].b) * boxGrayScale[i][j]
							)/3;
				}
			}

			if(sum > 255){
				sum = 255;
			}
			if(sum < 0){
				sum = 0;
			}

			modificada[lin][col].r = sum;
			modificada[lin][col].g = sum;
			modificada[lin][col].b = sum;
		}
	}
}


//Aplicação do filtro 'Thresholding'
void filtroThresholding(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]){

	int lin, col, sum, i, j, threshold=127;

	float boxGrayScale[3][3] = {
		{  0,  0,  0  },
		{  0,  1,  0  },
		{  0,  0,  0  }
	};

	for(lin=1; lin<n-1; lin++){
		for(col=1; col<m-1; col++){
			sum = 0;
			for(i=0; i<3; i++){
				for(j=0; j<3; j++){
					sum +=  ((original[lin-1 + i][col-1 + j].r) * boxGrayScale[i][j]
					     +   (original[lin-1 + i][col-1 + j].g) * boxGrayScale[i][j]
					     +   (original[lin-1 + i][col-1 + j].b) * boxGrayScale[i][j]
							)/3;
				}
			}

			if(sum > 255){
				sum = 255;
			}
			if(sum < 0){
				sum = 0;
			}

			if (sum > threshold) {
				modificada[lin][col].r = 255;
				modificada[lin][col].g = 255;
				modificada[lin][col].b = 255;
			} else {
				modificada[lin][col].r = 0;
				modificada[lin][col].g = 0;
				modificada[lin][col].b = 0;
			}
			
		}
	}
}
