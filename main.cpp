#include <iostream>
#define esp 100


using namespace std;

int iguais(char v[], char d[]);

void reinTempS();
void copia(char d[], char f[]);
void criaVar();
void pegaPArcela();
void e0();
void e1();
void e2();
void sigma1();
void sigma2();
void sigma3();
void sigma4();
void sigma5();
void sigma6();
void sigma7();
void sigma8();
void sigma9();
void sigma10();

int p = 0;
int contador = 0;
int auxC = -1;
int lin = 0;
int col = 0;
int aux = 0;
int pos_N = 0;
int pos_S = 0;
int N[esp];
long long int tempN;
char TempC[10];
char f[esp];
char tempS[esp];
char vars[200][20];
char pre[9][10] = {{"if"},{"else"},{"then"},{"print"},{"read"}, {"of"}, {"goto"}, {"end"}, {"let"}};

int tamanho(char* vet){
    int i = 0;
    for (i = 0; vet[i] != '\0' ; i++) {

    }
    return i;
}

int main(int argc, char *argv[]) {

    printf("Entrada das variaveis: \n");
    //gets(f);
    scanf("%[^\n]", f);
    fflush(stdin);
    e0();

    puts("===============");
    for (int i = 0; i < 20; i++) {
        cout<<vars[i]<<endl;
    }
    return 0;
}

void e0(){
    char ver;
    for (int i = 0; f[i] != '\0'; i++) {
        ver = f[i];
        //if
        if(f[i] == 'i'){
            if(f[(i+1)] == 'f'){
                i+=2;
            }
        }
        if(f[i] == 'e') {
            //end e else
            if (f[(i + 1)] == 'n') {
                if (f[(i + 2)] == 'd') {
i+=3;
                }
            } else if (f[(i + 1)] == 'l') {
                if (f[(i + 2)] == 's') {
                    if (f[(i + 3)] == 'e') {
                    i+=4;
                    }
                }
            }
        }
        //them
        if(f[i] == 't'){
            if(f[(i+1)] == 'h'){
                if(f[(i+2)] == 'e'){
                    if(f[(i+3)] == 'n'){
i+=4;
                    }
                }
            }
        }
        //print
        if(f[i] == 'p'){
            if(f[(i+1)] == 'r'){
                if(f[(i+2)] == 'i'){
                    if(f[(i+3)] == 'n'){
                        if(f[(i+4)] == 't'){
i+=5;
                        }
                    }
                }
            }
        }
        //read
        if(f[i] == 'r'){
            if(f[(i+1)] == 'e'){
                if(f[(i+2)] == 'a'){
if(f[i+3] == 'd'){
    i+=4;
}
                }
            }
        }
        //of
        if(f[i] == 'o') {
            if (f[(i + 1)] == 'f') {
i+= 2;
            }
        }
        //goto
        if(f[i] == 'g'){
            if(f[(i+1)] == 'o'){
                if(f[(i+2)] == 't'){
                    if(f[(i+3)] == 'o'){
i+=4;
                    }
                }
            }
        }
        if(f[i] == 'l'){
            if(f[(i+1)] == 'e'){
                if(f[(i+2)] == 't'){
i+=3;
                }
            }
        }
            vars[lin][col] = f[i];
            col++;

    }
}

void pegaParcela(char* vet,char* temp, int* casa){
    int j = 0;
    int c = 0;
    int i = *casa;
    if(vet[i] == 32){
        i++;
    }
    for (i; vet[i] != '\0'; i++) {
        if (vet[i] == 32) {
            c = (i+1);
            temp[j] = '\0';
            *casa = i;
            return;
        }
        else{
            temp[(j-c)] = vet[i];
            temp[(j-c)+1] = '\0';
        }
        j++;
    }
}

void e1(){
    if(f[p] >= '0' && f[p] <= '9'){
        sigma2();
        p++;
        e1();
    }else{
        sigma3();
        e0();
    }
}

void e2(){
    if(f[p] >= 'a' && f[p] <= 'z' || f[p] >='A' && f[p] <= 'Z' || f[p] >= '0' && f[p] <= '9'){
        sigma5();
        p++;
        e2();
    }else{
        sigma6();
        e0();
    }
}

void sigma1(){
    pos_N = 0;
    tempN = f[p] - '0';
}
void sigma2(){
    pos_N++;
    tempN = tempN*10 + f[p] - '0';
}
/*
void sigma3(){
    int tam = 0;
    int ok = 0;
    int po = -1;
    int i = 0;
    for (i = 0; i < 9 ; i++) {
        tam = tamanho(pre[i]);
        for (int j = 0; f[j] != '\0'; j++) {
            if(pre[i][j] == f[j]){
                ok++;
            }
        }
        if(ok == tam){
            po = i;
        }
            ok = 0;
    }
if(po != -1){
    printf("P(%d)\n", po);
}
    else{
    tam = 0;
    ok = 0;
    po = -1;
    i = 0;
    for (i = 0; i < contador ; i++) {
        tam = tamanho(pre[i]);
        for (int j = 0; f[j] != '\0'; j++) {
            if (vars[i][j] == f[j]) {
                ok++;
            }
        }
    }
        if(ok == tam){
            po = i;
        }
        ok = 0;
        if(po != -1){
            printf("V(%d)\n", po);
        }
        else{
            for (int j = 0; f[j] != '\0' ; j++) {
                vars[contador][j] = f[j];
            }
            printf("V(%d)\n", contador);
            contador++;
        }
    }
    //cout<<vars[0];

}
 */

void sigma3(){
    int c=0, achou=0;
    for(c = 0; c <= auxC ; c++){
        if(iguais(pre[c],tempS)){
            achou = 1;
            aux = c;
        }
    }
    if(achou){
        printf("P(%d)", aux);
        //reinTempS();
    }else {
        c = 0;
        achou = 0;
        for (c = 0; c <= auxC; c++) {
            if (iguais(vars[c], tempS)) {
                achou = 1;
                //aux = c;
            }
        }
        if (achou) {
            printf("V(%d)", aux);
            //reinTempS();
        }
        else{
            copia(vars[aux+1],tempS);
        }

    }
}
void sigma4(){
    pos_S = 0;
    tempS[pos_S] = f[p];
}
void sigma5(){
    pos_S++;
    tempS[pos_S] = f[p];
}
void sigma6(){
    int c=0, achou=0;
    for(c = 0; c <= auxC ; c++){
        if(iguais(vars[c],tempS)){
            achou = 1;
            aux = c;
        }
    }
    if(!achou){
        auxC++;
        copia(vars[auxC], tempS);
        printf("V(%d)", auxC);
        reinTempS();
    }else{
        printf("V(%d)", aux);
        reinTempS();
    }
}
void sigma7(){
    printf(":");
}
void sigma8(){
    printf(":=");
}
void sigma9(){
    TempC[0] = '<';
    TempC[1] = '=';
}
void sigma10(){
    sigma9();
    for (int i = 0; i < 2; i++) {
        printf("%c", TempC[i]);
    }
}

void parcela(){

}

void copia(char d[], char f[]){
    int c=0;
    for(c = 0; d[c] = f[c]; c++);
}

int iguais(char v[], char d[]){
    int i;
    for(i = 0; v[i]; i++){
        if(v[i] != d[i]){
            return 0;
        }
    }
    if(v[i] != d[i]){
        return 0;
    }else{
        return 1;
    }
}

void reinTempS(){
    int i =0;
    while(tempS[i] != 0){
        tempS[i] = 0;
        i++;
    }
}

void criaVar(){
    printf("\n- Tabela vars -\n");
    int i;
    for(i=0; i <= auxC; i++){
        printf("\n%d  -> %s", i, vars[i]);
    }
    printf("\n");
}
