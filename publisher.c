/* 
 * Publisher - simulare sistem inteligent de detectare a incendiilor
 * Genereaza valori de senzori si afiseaza ce s-ar trimite prin MQTT
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int read_temperature(void) { return 20 + rand() % 40; }
int read_smoke(void) { return rand() % 101; }
int read_flame(void) { return (rand() % 100 < 5) ? 1 : 0; }

const char* system_state(int t, int s, int f) {
    if (f == 1 || t >= 55 || s >= 80) return "ALARM";
    if (t >= 45 || s >= 60) return "WARNING";
    return "NORMAL";
}

int main(void) {
    srand((unsigned)time(NULL));

    int t = read_temperature();
    int s = read_smoke();
    int f = read_flame();

    const char* state = system_state(t, s, f);

    printf("MQTT PUBLISH (simulare):\n");
    printf("fire/sensors/temperature -> %d\n", t);
    printf("fire/sensors/smoke       -> %d\n", s);
    printf("fire/sensors/flame       -> %d\n", f);
    printf("fire/status/alarm        -> %s\n", state);

    return 0;
}
