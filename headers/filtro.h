//APLICAÇÃO DO FILTRO BLUR
void filtroBlur(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]);

//APLICAÇÃO DO FILTRO SHARPEN
void filtroSharpen(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]);

//APLICAÇÃO DO FILTRO EMBOSS
void filtroEmboss(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]);

//APLICAÇÃO DO FILTRO IDENTITY
void filtroIdentity(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]);

//APLICAÇÃO DE UMA ROTAÇÃO NA IMAGEM DE 180º
void filtroRotacionar180(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]);

//APLICAÇÃO DO FILTRO DE ESCALA CINZA
void filtroGrayScale(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]);

//APLICAÇÃO DA BINARIZAÇÃO DA IMAGEM - PRETO/BRANCO
void filtroThresholding(int n, int m, PIXEL original[n][m], PIXEL modificada[n][m]);