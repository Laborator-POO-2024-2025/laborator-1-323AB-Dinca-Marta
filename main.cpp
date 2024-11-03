

#include <iostream>
#include <cstring>

struct Persoana {
    char nume[30];
    double venit;
};

//
void setValori(Persoana persoane[]) {
    strcpy(persoane[0].nume, "Andrei Popescu");
    persoane[0].venit = 3500.75;

    strcpy(persoane[1].nume, "Maria Ionescu");
    persoane[1].venit = 4200.50;

    strcpy(persoane[2].nume, "Ion Gheorghe");
    persoane[2].venit = 2900.00;

    strcpy(persoane[3].nume, "Elena Marin");
    persoane[3].venit = 5100.25;

    strcpy(persoane[4].nume, "Alexandra Tudor");
    persoane[4].venit = 3000.80;

    strcpy(persoane[5].nume, "Cristian Stan");
    persoane[5].venit = 4500.90;

    strcpy(persoane[6].nume, "Diana Matei");
    persoane[6].venit = 2800.60;

    strcpy(persoane[7].nume, "Florin Dumitru");
    persoane[7].venit = 3700.00;

    strcpy(persoane[8].nume, "Irina Radu");
    persoane[8].venit = 5300.45;

    strcpy(persoane[9].nume, "Bogdan Oprea");
    persoane[9].venit = 3900.35;
}

void afiseazaPersoane(const Persoana persoane[], int marime) {
    for (int i = 0; i < marime; ++i) {
        std::cout << "Nume: " << persoane[i].nume << ", Venit: " << persoane[i].venit << std::endl;
    }
}


void sorteazaPersoane(Persoana persoane[], int marime) {
    for (int i = 0; i < marime - 1; ++i) {
        for (int j = 0; j < marime - i - 1; ++j) {
            if (persoane[j].venit > persoane[j + 1].venit) {
                Persoana temp = persoane[j];
                persoane[j] = persoane[j + 1];
                persoane[j + 1] = temp;
            }
        }
    }
}

int main() {

    Persoana persoane[10];


    setValori(persoane);


    afiseazaPersoane(persoane, 10);

    sorteazaPersoane(persoane, 10);

    afiseazaPersoane(persoane, 10);

    return 0;
}

