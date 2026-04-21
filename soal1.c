/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 2
 *   Hari dan Tanggal    : 
 *   Nama (NIM)          : Zulfan Hanani (13224105)
 *   Nama File           : soal1.c
 *   Deskripsi           : 
 * 
 */


 #include <stdio.h>
  
 int main() {
    char array[30];
    int jml1 = 0;
    int jml2 = 0;
    int idx;
    
    for (int i = 0; i < 10; i++){
        scanf("%c", &array[i]);
        if (array[i] == '\n'){
            array[i] = '\0';
            idx = i;
            break;
        }
    }

    char temparray[idx];
    int index[idx];
    for (int i = 0; i < idx; i++){
        index[i] = -1;
        temparray[i] = array[i];
    }
    
    for (int i = 0; i < idx; i++){
        if (temparray[i] == '('){
            for (int j = i; j < idx; j++){
                if (temparray[j] == ')'){
                    temparray[i] = 1;
                    temparray[j] = 1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < idx; i++){
        if (temparray[i] == '(' || temparray[i] == ')'){
            index[i] = i;
        }
    }

    for (int i = 0; i < idx; i++){
        if (index[i] > 0){
            for (int j = i; j < idx; j++){
                array[j] = array[j+1];
            }
        }
    }

    printf("%s", array);

    return 0;
 }
 
