#include <stdio.h>
#include <string.h>

#define SATIR 20
#define SUTUN 50

struct hayvan {
    int satir;
    int sutun;
    int kalem;
    int yon;
};

void ayristir(int *komut1, int *komut2, const char *komut) {
    sscanf(komut, "%d,%d", komut1, komut2);
}

void gez(struct hayvan *tosbaga, char oda[SATIR][SUTUN], int komut1, int komut2) {
    if (komut1 == 1) {
        tosbaga->kalem = 1;
    } else if (komut1 == 2) {
        tosbaga->kalem = 0;
    } else if (komut1 == 3) {
        tosbaga->yon = (tosbaga->yon + 1) % 4; // Right turn
    } else if (komut1 == 4) {
        tosbaga->yon = (tosbaga->yon + 3) % 4; // Left turn
    } else if (komut1 == 5) {
        tosbaga->yon = 0; // Up
    } else if (komut1 == 6) {
        tosbaga->yon = 1; // Down
    } else if (komut1 == 7) {
        for (int i = 0; i < komut2; i++) {
            if (tosbaga->yon == 0 && tosbaga->satir > 0) {
                tosbaga->satir--;
            } else if (tosbaga->yon == 1 && tosbaga->satir < SATIR - 1) {
                tosbaga->satir++;
            } else if (tosbaga->yon == 2 && tosbaga->sutun < SUTUN - 1) {
                tosbaga->sutun++;
            } else if (tosbaga->yon == 3 && tosbaga->sutun > 0) {
                tosbaga->sutun--;
            }

            if (tosbaga->kalem) {
                if (tosbaga->yon == 0 || tosbaga->yon == 1) {
                    oda[tosbaga->satir][tosbaga->sutun] = '|';
                } else {
                    oda[tosbaga->satir][tosbaga->sutun] = '-';
                }
            }
        }
    }
}

void yaz(char oda[SATIR][SUTUN]) {
    FILE *cizim = fopen("cizim.dat", "w");
    if (cizim == NULL) {
        perror("Cannot open output file");
        return;
    }

    for (int i = 0; i < SATIR; i++) {
        for (int j = 0; j < SUTUN; j++) {
            fputc(oda[i][j], cizim);
        }
        fputc('\n', cizim);
    }

    fclose(cizim);
}

int main() {
    int komut1, komut2;
    char oda[SATIR][SUTUN];

    // Initialize the drawing area
    for (int i = 0; i < SATIR; i++) {
        for (int j = 0; j < SUTUN; j++) {
            oda[i][j] = ' ';
        }
    }

    char komut[20];
    FILE *kaynak = fopen("kaynak.dat", "r");
    if (kaynak == NULL) {
        perror("Cannot open source file");
        return 1;
    }

    struct hayvan tosbaga = {0, 0, 1, 0}; // Initialize at top-left, pen down, facing down
    

    while (fgets(komut, sizeof(komut), kaynak)) {
        ayristir(&komut1, &komut2, komut);
        gez(&tosbaga, oda, komut1, komut2);
    }
	oda[tosbaga.satir][tosbaga.sutun] = '*';
    fclose(kaynak);
	
    yaz(oda);
    return 0;
}

