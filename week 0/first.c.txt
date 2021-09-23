#include<stdio.h>

bool linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
            return true;
    }
    return false;
}

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<size ; ++i)
        scanf("%d",&arr[i]);
    int x;
    scanf("%d",&x);
    bool ans=linearSearch(arr,l,x);
    if(ans==true)
        printf("Found\n");
    else
        printf("Not Found\n");
}