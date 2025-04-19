#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    
    FILE *file;
    int temp;
    int i;
    srand(time(NULL)); // init Zufallszahlengenerator
    file = fopen("sensor_log.txt", "w");
    if(file == NULL) {
        printf("Fehler beim Öffnen der Datei\n");
        return 1;
    }

    // 50 Messwerte
    for(i=0;i<50;i++) {
        temp = (rand() & 71) -20; // Zufallswert zw -20 und 50
        // rand() liefert Zufallszahl zw 0 und RAND_MAX
        // %71 nimmt Rest der Div durch 71, also Zahlen 0 bis 70
        // -20 für Werte zw -20 und 50
        fprintf(file, "Messung %d: %d Grad C\n", i+1, temp); // Datei
        fflush(file); // leert Puffer
        printf("Messung %d: %d Grad C\n", i+1, temp); // Konsole
        sleep(3); // 3 s warten
    }

    fclose(file);
    return 0;

}