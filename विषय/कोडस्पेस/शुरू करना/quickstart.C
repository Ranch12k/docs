#include<stdio.h>
#include<conio.h>
void Travers(char arr[],int size)
{
    for(int i=1; i<size; i++) {
        printf("|%c",arr[i]);
        if(i==3 || i==6)
            printf("|\n_________\n");

    }
    printf("|");
};
int insert(char arr[],int size,int capacity,char element,int index) {
    if(size>=capacity) {
        printf("overflow");
        return -1;
    }
    for(int i=size-1; i>=index; i--) {
        

    }
    
    arr[index] =element;

}

int main()
{
clrscr();
    char arr[100]= {'0','1','2','3','4','5','6','7','8','9'};
    int size=10,index,capacity=100,player=1;
    char element;
    
    Travers(arr, size);
    do {
    
    printf("\nPlayer %d Turn",player);
    scanf("%d",&index);
    if(player==1){
    player=2;
    element='X';
    }else{
    player=1;
    element='O';
    }
       if(index==0) {
            printf("check you Position");
        }
        else if(index==1) {
        insert(arr,size, capacity, element, index);
            printf("\n\n\n");
            Travers(arr, size);
        }
        else if(index==2) {    
            insert(arr,size, capacity, element, index);    
            printf("\n\n\n");
            Travers(arr, size);
        }
        else if(index==3) {
            insert(arr,size, capacity, element, index);  
            printf("\n\n\n");
            Travers(arr, size);
        }
        else if(index==4) {
            insert(arr,size, capacity, element, index);
            printf("\n\n\n");
            Travers(arr, size);
        }
        else if(index==5) {
            insert(arr,size, capacity, element, index);          
            printf("\n\n\n");
            Travers(arr, size);
        }

        else if(index==6) {
            insert(arr,size, capacity, element, index);
            printf("\n\n\n");
            Travers(arr, size);
        }
        else if(index==7) {
            insert(arr,size, capacity, element, index); 
            printf("\n\n\n");
            Travers(arr, size);
        }
        else if(index==8) {
            insert(arr,size, capacity, element, index);          printf("\n\n\n");
            Travers(arr, size);
        }
        else if(index==9) {
            insert(arr,size, capacity, element, index);  
            printf("\n\n\n");
            Travers(arr, size);
        }
    } while(index!=13);
    getchar();
    return 0;
}
