int q22(void) {
  float moeda_5, moeda_10, moeda_25, moeda_50, eco;
  float m5 = 0.05, m10 = 0.1, m25 = 0.25, m50 = 0.5;

  printf("Quantas moedas de 5 centavos? ");
  scanf("%f", &moeda_5);

  printf("Quantas moedas de 10 centavos? ");
  scanf("%f", &moeda_10);

  printf("Quantas moedas de 25 centavos? ");
  scanf("%f", &moeda_25);

  printf("Quantas moedas de 50 centavos? ");
  scanf("%f", &moeda_50);

  eco = (moeda_5 * m5) + (moeda_10 * m10) + (moeda_25 * m25) + (moeda_50 * m50);

  printf("Total economizado: %.2f\n", eco);
}