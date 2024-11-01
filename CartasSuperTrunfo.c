//EXERCICIO PARA CRIAR O JOGO DO TRUNFO

#include <stdio.h>

int main() {
   
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;

    printf("Cadastro de Cidades\n");
    printf("-------------------\n");

    printf("Informe o código da cidade: ");
    scanf("%d", &codigo);

    printf("Informe o nome da cidade: ");

    getchar(); 
    fgets(nome, sizeof(nome), stdin);
    
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao);

    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Informe o PIB da cidade (em milhões): ");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos);

    
    printf("\nDados da Cidade Cadastrada:\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s", nome); 
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos);

    return 0;
}
