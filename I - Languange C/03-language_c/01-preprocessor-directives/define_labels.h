#define SEGUNDOS_MINUTOS 60
#define MINUTOS_HORAS 60
#define HORAS_DIAS 24

float segundos_para_dias(int segundos) {
    return (float) segundos / (SEGUNDOS_MINUTOS*MINUTOS_HORAS*HORAS_DIAS);
}

