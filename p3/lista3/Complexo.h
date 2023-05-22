typedef struct complexo {
  double real; 
  double imag; 
} Complexo;

Complexo* cria_complexo(double real, double imag);

void destroi_complexo(Complexo* c);

Complexo* le_complexo();

Complexo* soma_complexos(Complexo* c1, Complexo* c2);

Complexo* subtrai_complexos(Complexo* c1, Complexo* c2);

Complexo* multiplica_complexos(Complexo* c1, Complexo* c2);

Complexo* divide_complexos(Complexo* c1, Complexo* c2);

void mostra_complexo(Complexo* c);

Complexo* cria_complexo(double real, double imag) {
  Complexo* c = (Complexo*) malloc(sizeof(Complexo)); 
  if (c == NULL) { 
    printf("Erro de alocação de memória\n"); 
    exit(1); 
  }
  c->real = real; 
  c->imag = imag; 
  return c; 
}


void destroi_complexo(Complexo* c) {
  free(c); 
}


Complexo* le_complexo() {
  double real, imag; 
  printf("Digite a parte real do número complexo: "); 
  scanf("%lf", &real); 
  printf("Digite a parte imaginária do número complexo: "); 
  scanf("%lf", &imag); 

  return cria_complexo(real, imag); 
}


Complexo* soma_complexos(Complexo* c1, Complexo* c2) {
  double real = c1->real + c2->real; 
  double imag = c1->imag + c2->imag; 

  return cria_complexo(real, imag); 
}

Complexo* subtrai_complexos(Complexo* c1, Complexo* c2) {
  double real = c1->real - c2->real; 
  double imag = c1->imag - c2->imag; 

  return cria_complexo(real, imag); 
}

Complexo* multiplica_complexos(Complexo* c1, Complexo* c2) {
  double real = c1->real * c2->real - c1->imag * c2->imag; 
  double imag = c1->real * c2->imag + c1->imag * c2->real; 

  return cria_complexo(real, imag); 
}

Complexo* divide_complexos(Complexo* c1, Complexo* c2) {
  if (c2->real == 0 && c2->imag == 0) { 
    printf("\nErro: Impossível divisão por zero!"); 
    exit(1); 
  }

  double denom = c2->real * c2->real + c2->imag * c2->imag; 
  double real = (c1->real * c2->real + c1->imag * c2->imag) / denom; 
  double imag = (c1->imag * c2->real - c1->real * c2->imag) / denom; 

  return cria_complexo(real, imag); 
}

void mostra_complexo(Complexo* c) {
  printf("(%lf,%lf)", c->real, c->imag); 
}

