/*
 * Instituição: etecvav
 * Data: 27/05/2026
 * Autor: Larissa Mascoti
 * Descricao: Ler um número inteiro, calcular e exibir separadamente as potências de 2^0 até
 * 2^(esse número).
 */
 #include <iostream>
 int main() {
     int numero, i;
     int potencia = 1;
 
     // Leitura do número
     printf("Digite um numero inteiro: ");
     scanf("%d", &numero);
 
     // Exibe as potências de 2
     for (i = 0; i <= numero; i++) {
         printf("2^%d = %d\n", i, potencia);
 
         // Atualiza para a próxima potência
         potencia = potencia * 2;
     }
 
     return 0;
 }