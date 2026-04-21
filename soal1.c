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

    //pengecekan
    for (int i = 0; i < idx; i++){
        int valid = 1;
        if (temparray[i] == '('){
            valid = 0;
            for (int j = i; j < idx; j++){
                if (temparray[j] == ')'){
                    temparray[i] = 1;
                    temparray[j] = 1;
                    valid = 1;
                    break;
                } 
            }
        }else if (temparray[i] == ')'){
            valid = 0;
            for (int j = 0; j < i; j++){
                if (temparray[j] == '('){
                    temparray[i] = 1;
                    temparray[j] = 1;
                    valid = 1;
                    break;
                }
            }
        }
        // if (valid == 0){
        //     index[i] = 1;
        // }
        
    }
    // printf("%s", temparray); //debug
    
    //pengecekan indeks tidak valid
    for (int i = 0; i < idx; i++){
        if (temparray[i] == '(' || temparray[i] == ')'){
            index[i] = 1;
        }
        printf("%d ", index[i]); // debug
    }

    //penghapusan karakter tidak valid
    for (int i = 0; i < idx; i++){
        if (index[i] == 1){
            if (i == idx - 1){
                idx--;
                // printf("\nBerhasil");
            }else{
                for (int j = i; j < idx - 1; j++){
                    array[j] = array[j+1];
                }
                idx--;
            }
        }
    }

    printf("\n%d Hasil: ", idx);
    for (int i = 0; i < idx; i++){
        printf("%c", array[i]);
    }

    return 0;
 }
 
