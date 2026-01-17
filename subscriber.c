/*
 * Subscriber - simulare client receptor
 * Primeste un mesaj (simulat) si il salveaza in fisier ca istoric
 */

#include <stdio.h>

int main(void) {
    const char* message = "temperature=52;smoke=71;flame=0;state=WARNING";

    FILE* fp = fopen("events_log.txt", "a");
    if (!fp) {
        printf("Eroare: nu pot deschide events_log.txt\n");
        return 1;
    }

    fprintf(fp, "EVENT: %s\n", message);
    fclose(fp);

    printf("MQTT SUBSCRIBE (simulare): mesaj salvat in events_log.txt\n");
    return 0;
}
