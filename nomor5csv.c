#include <stdio.h>

int main (void) {

    FILE *fp = fopen("temperature.txt", "r");

    if (fp == NULL)
    {
        perror("temperature.txt");
        return 1;
    }
    for (int i = 0; i < 6; i++)
    {
        double time, temperature;
        fscanf(fp, "%lf,%lf", &time, &temperature);
        printf("Time: %lf, Temperature: %lf\n", time, temperature);
    }  

    fclose(fp);
    return 0;
}
