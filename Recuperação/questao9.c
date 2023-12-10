#include <stdio.h>

int main(){
    double raio_esfera, volume_esfera;
    double const pi = 3.14159;
    scanf("%lf", &raio_esfera);
    volume_esfera = (4.0 / 3) * pi * raio_esfera * raio_esfera * raio_esfera;
    printf("VOLUME = %.3lf\n", volume_esfera);
    return 0;
}