/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 2
 *   Hari dan Tanggal    : Selasa, 21 April 2026
 *   Nama (NIM)          : Zulfan Hanani (13224105)
 *   Nama File           : soal1.c
 *   Deskripsi           : Membuat kalimat valid jika '(' memiliki pasangan ')' setelahnya
 * 
 */


 #include <stdio.h>
 #include <string.h>
  
 int main() {
    char array[30];
    int idx;

    fgets(array, sizeof(array), stdin);
    idx = strlen(array);

    char temparray[idx];
    int index[idx];
    for (int i = 0; i < idx; i++){
        index[i] = 1;
        temparray[i] = array[i];
    }

    //pengecekan
    for (int i = 0; i < idx; i++){
        if (temparray[i] == '('){
            for (int j = i; j < idx; j++){
                if (temparray[j] == ')'){
                    temparray[i] = 1;
                    temparray[j] = 1;
                    break;
                } 
            }
        }else if (temparray[i] == ')'){
            for (int j = 0; j < i; j++){
                if (temparray[j] == '('){
                    temparray[i] = 1;
                    temparray[j] = 1;
                    break;
                }
            }
        }
        
    }
    
    //pengecekan indeks tidak valid
    for (int i = 0; i < idx; i++){
        if (temparray[i] == '(' || temparray[i] == ')'){
            index[i] = -1;
        }
        // printf("%d ", index[i]); // debug
    }

    for (int i = 0; i < idx; i++){
        if (index[i] == 1){
            printf("%c", array[i]);
        }
    }

    return 0;
 }
 
