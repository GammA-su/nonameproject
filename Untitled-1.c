#include <stdio.h>
#include <stdlib.h>


int cols=0;
int lines=0;
int *colsp = &cols;
int *linesp = &lines;

void space(int n){  //ESPACE n fois
    for (int i=0;i<n;i++){
        printf(" ");
    }
}
void line(int n, int s){ //Line N fois avec s espace entre les traits
    for (int i=0;i<n;i++){
        printf("-");
        space(s);
    }
}
void slashN(int n){ // Retour a ligne n fois
 for (int i=0;i<n;i++){
        printf("\n");
    }
 
}

void cadre_prenant_toute_largeur_et_responsive(int largeur, int longeur, int fill){
    if (fill == 0){
        space(1);
        line(longeur,1);
        slashN(1);
        for (int i=0;i<=largeur-2;i++){
            line(1,0);
            space(2*longeur-1);
            line(1,0);
            slashN(1);
        }
        space(1);
        line(longeur,1);
        slashN(1);
    }
    if (fill == 1){
        space(1);
        line(cols/2,1);
        slashN(1);
        for (int i=0;i<=lines/2-2;i++){
            line(1,0);
            space(cols/2*2-1);
            line(1,0);
            slashN(1);
        }
        space(1);
        line(cols/2,1);
        slashN(1);

    }
    
    }


int init(int* cols, int* lines){
    char test = ' ';
    printf("\nIn order to configure the Game, You have to answer few questions\nWhat is the output of tput cols : ");
    scanf("%d", cols);
    printf("\nOk , What is the output of tput lines : ");
    scanf("%d", lines);
    printf("You entederd %d cols and %d lines, Is that right? y/n : ", *cols, *lines);
    scanf("%s", &test);
    int Xmargin = 1; // marge standart ou collapse , a manipuler (Margin left)
    int Ymargin = 1; // Margin bot
    *cols = *cols-Xmargin;
    *lines = *lines-Ymargin;
    printf("%d", *cols);
    if (test == 'y') {return 0;} 
    else {printf("Let's restart. "); init(cols, lines); }

}
int menu(){
    space(10);
    line(20,0);
    slashN(2);
    printf("Wlcome To Magical World THe future of GAcha GAme");
    slashN(1);
    cadre_prenant_toute_largeur_et_responsive(17,15,1);
    return 0;

}










int main(){
    init(colsp,linesp);
    menu();



}