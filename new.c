#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sender(char * frame){
    int count=str len(frame);
    printf("sender:frame/length=%d bytes \n",count);
    return count;
}
void recover(char * frame){
    printf("reciever:frame recieved=\"%s\"\n",frame);
}
int main(){
    char frame[100];
    printf("enter frame data:");
    fgets("frame",size of(frame),stdin);
    frame [strcspn(frame,"\n")]='\0';
    sender(frame);
    reciever(frame);
    return 0;
}
