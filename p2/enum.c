enum estadoCivil{
        casada = 1,
        solteira =2
};

int main() {
    setlocale(0, "Portuguese");
    enum estadoCivil eCivil;
    
    printf("Digite 1 para casada e 2 para solteira: ");
    scanf("%d", &eCivil);
    
    switch(eCivil){
        case casada:
            printf("Você é casada!");
            break;
        case solteira:
            printf("Você é solteira!");
            break;
        default:
            printf("Opção inválida!");
    }
    return 0;
}