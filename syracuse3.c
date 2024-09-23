//Sylvestre Saint-Martin

#include <stdio.h>
#include <stdlib.h>


//init fonction
void syracuse(int nb1);

int main () {    
    //Déclaration de variables
    int Un_0,*max=0, *p=0;

    
    //Appel des variables
	printf("Entrer Un_0:\n");
	scanf("%d",&Un_0);
    
    //initialisation du fichier
    
    syracuse(Un_0);
    

}


void syracuse(int nb1){
    
    int Condition=1, Un=nb1, nb2=0, nb3=0;
    FILE *fich;
    

    fich = fopen("/home/sns3273a/SyracuseM1/data.txt","w");
    fprintf(fich, "%s %s", "p", "Un\n");
    
    
    while(Condition ==1){
        //Ecriture sur le fichier
        fprintf(fich, "%d %d", nb3, Un);
        fprintf(fich, "\n");
        
        if (Un>nb2){
            nb2=Un;
        }
        
        if (Un==1){
            Condition=0;
        }
        
        else if(Un%2==0){
            Un=Un/2;
        }
        
        else{
            Un=3*Un+1;
        }
            
        nb3=nb3+1;
      
    }
    
    printf("temps de vol : %d",nb3);
    printf("\n Altitude : %d \n",nb2);

}
