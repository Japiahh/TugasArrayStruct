#include <iostream>
#include <string>
using namespace std;
struct Mahasiswa {
    string nama;
    string nim;
    float persentasehadir;
    Mahasiswa* next;
};
Mahasiswa* head = nullptr;
Mahasiswa* tail = nullptr;
void insert(string n, string id, float p) {
    Mahasiswa* baru = new Mahasiswa;
    baru->nama = n;
    baru->nim = id;
    baru->persentasehadir = p;
    baru->next = nullptr;

    if (head == nullptr) {
        head = baru;
        tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}
int main() {
    insert("ZHAFRANLINKYSISWARA", "103012400196", 100);
    insert("GANDASETYARAMADHANA", "103012400278", 50);
    insert("MUHAMMADABRARSINURAT", "103012400406", 100);
    insert("FARIDALVAROSITEPU", "103012500025", 100);
    insert("CHARLESNATHANMARCELINO", "103012500037", 100);
    insert("ARYAAWALADRIANSYAH", "103012500038", 100);
    insert("MUHAMMADANDHIKABAGASKOR", "103012500044", 100);
    insert("MOCHAMADRIZKYKAZAINALR", "103012500055", 100);
    insert("NAYLAFAUZYAKHAIRUNNISA", "103012500071", 100);
    insert("NAYAGARADITHYA", "103012500072", 100);
    insert("RILLORAIHANDWISATRIA", "103012500078", 100);
    insert("ALFATHIRABIMANYUGAZAAL", "103012500088", 100);
    insert("MUHAMMADDZAKILUKMANULH", "103012500092", 100);
    insert("SAMUELDIPTAYOGITARUNA", "103012500099", 100);
    insert("AHMADDHANINURRIDWAN", "103012500104", 100);
    insert("MUHAMMADRAFIKIHANNAN", "103012500158", 100);
    insert("AHMADRADHINPRADITYA", "103012500217", 100);
    insert("MAULANANAUFALMAHRUS", "103012500226", 100);
    insert("NABILAANURULALIFAH", "103012500236", 50);
    insert("ABIDZARALGHIFARI", "103012500243", 100);
    insert("REVANPUTRAANDRIAN", "103012500266", 100);
    insert("TSANIARAHMAHALIZA", "103012500276", 100);
    insert("LAZHINADRIRAMADHAN", "103012500295", 100);
    insert("MUHAMMADZEIN", "103012500304", 50);
    insert("NABILASYAKIRAANDRIANIS", "103012500315", 100);
    insert("MUHAMMADGHASSANFIRDIAN", "103012500325", 100);
    insert("NUGRAHAAKMALYOGA", "103012500331", 100);
    insert("RIFQIBHADRIKAADWITIYA", "103012500339", 100);
    insert("FAUZANNURABDILLAH", "103012500349", 100);
    insert("ANINDAMARETHANINGTYASCE", "103012500389", 100);
    insert("LUKMANHAKIM", "103012500397", 100);
    insert("RAYYAIZZATULMILA", "103012530009", 100);
    insert("RADENHASBIRADHITYANATA", "103012530017", 100);
    insert("RAYHANMUZABFAUZAN", "103012530021", 100);
    insert("GAZARAUSHANFIKRI", "103012530033", 50);
    insert("RAYYANNAKHLAHPRAYATA", "103012530040", 100);
    insert("IMANABDIILAHI", "103012530045", 100);
    insert("DUNCANAGASTYAKURNIAWAN", "103012530055", 100);
    insert("ADAMTEGUHMAULAANAA", "1301213218", 50);
    insert("RAFLINUJJIYAMAULANA", "1301223394", 50);
    for (Mahasiswa* p = head; p != nullptr; p = p->next) {
        cout << p->nama << " " << p->nim << " " << p->persentasehadir << "%" << endl;
    }
}