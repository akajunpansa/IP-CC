#include <stdio.h>

int main() {
      //Variaveis 
      float preco_kw;
      float salario;
      float gasto_kw;
      float valor_consumo;
      float valor_desconto;
      
      scanf("%f", &salario);
      scanf("%f", &gasto_kw);

      preco_kw = (0.7*salario)/100.0;
      valor_consumo = preco_kw*gasto_kw;
      valor_desconto = valor_consumo-(valor_consumo*0.1);
      
      printf("Custo por kW: R$ %.2f\n", preco_kw);
      printf("Custo do consumo: R$ %.2f\n", valor_consumo);
      printf("Custo com desconto: R$ %.2f\n", valor_desconto);
  
    	return 0;
}
