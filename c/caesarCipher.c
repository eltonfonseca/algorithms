/**********************************************
* cripto <option> <pathin> <pathout> <key>    *
***********************************************
* Program for encrypt texts                   *
* Using a algorithm of Cesar cipher           *
***********************************************
**          ARGUMENTS OF PROGRAM              *
*/////////////////////////////////////////////*
** <options>                                  //
** -e -> encrypt                              //
** -d -> decrypt                              //
** -h -> help                                 //
**********************************************//
** <pathin>                                   //
**  file path that will be read               //
**********************************************//
** <pathout>                                  //
**  path of the output file more the file name//
**********************************************//
** <key>                                      //
**  key for encrypt the file or decrypt file  //
**                                            //
**//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int
main(int argc, char *argv[]){

    //Functions
    void encrypt();
    void decrypt();
    void help();

    if(argv[1] != NULL){
        if(strcmp(argv[1], "-e") == 0){
            if(argv[2] == NULL || argv[3] == NULL || argv[4] == NULL){
                printf("Help:\t Encrypt -e <pathin> <pathout> <key>\n");
            }
            else{
                encrypt(argv[2], argv[3], argv[4]);
            }
        }
        else if(strcmp(argv[1], "-d") == 0){
            if(argv[2] == NULL || argv[3] == NULL || argv[4] == NULL){
                printf("Help: \t Decrypt -d <pathin> <pathout> <key>\n");
            }
            else{
                decrypt(argv[2], argv[3], argv[4]);
            }
        }
        else{
            help();
        }
    }
    return 0;
}

void encrypt(char *pathin, char *pathout, char *key){

    int key2 = atoi(key);
    key2 = key2 % 26;
    FILE *filein;
    FILE *fileout;
    char c;
    int caracter;

    filein = fopen(pathin, "r");
    fileout = fopen(pathout, "w");

    if(key2 != 0){
        while(!feof(filein)){
            c = fgetc(filein);
            c = tolower(c);
            caracter = (int) c;

            if(caracter >= 97 && caracter <= 122){
                caracter = (int) c + key2;
                if(caracter > 122){
                    caracter = caracter - 123 + 97;
                }
                else if(caracter < 97){
                    caracter = 122 - (97 - caracter - 1);
                }
            }
            if(caracter != -1){
                fputc(caracter, fileout);
            }
        }
        fclose(filein);
        fclose(fileout);
    }
}

void decrypt(char *pathin, char *pathout, char *key){

    int key2 = atoi(key);
    key2 = key2 % 26;
    FILE *filein;
    FILE *fileout;
    char c;
    int caracter;

    if(key2 != 0){
        filein = fopen(pathin, "r");
        fileout = fopen(pathout, "w");

        while(!feof(filein)){
            c = fgetc(filein);
            c = tolower(c);
            caracter = (int) c;

            if(caracter >= 97 && caracter <= 122){
                caracter = (int) c - key2;
                if(caracter > 122){
                    caracter = caracter - 123 + 97;
                }
                else if(caracter < 97){
                    caracter = 122 - (97 - caracter - 1);
                }
            }
            if(caracter != -1){
                fputc(caracter, fileout);
            }
        }
        fclose(filein);
        fclose(fileout);
    }

}

void help(){

    printf("Program encrypt & decrypt cesar cipher\n");
    printf("./caesar <operação> <pathin> <pathout> <key>");
    printf("./caesar -c <pathin> <pathout> <key> - encrypting");
    printf("./caesar -d <pathin> <pathout> <key> - descrypting\n");
    printf("./caesar -h for help\n");
}
