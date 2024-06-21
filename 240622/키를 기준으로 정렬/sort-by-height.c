#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Person{
    char name[50];
    int height;
    float weight;
};

void height(struct Person people[],int n){
    struct Person temp;
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(people[j].height>people[j+1].height){
                temp=people[j];
                people[j]=people[j+1];
                people[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);

    struct Person *people = (struct Person *)malloc(n*sizeof(struct Person));
    if(people==NULL){
        return 1;
    }

    for(int i=0;i<n;i++){
        scanf("%s %d %f", people[i].name, &people[i].height, &people[i].weight);
    }

    height(people,n);

    for(int i=0;i<n;i++){
        printf("%s %d %.0f\n", people[i].name, people[i].height, people[i].weight);
    }

    free(people);

    return 0;

}