#include <stdio.h>
#include <windows.h>

void talkToAI() {
    char inputMessage[400];

    printf(">> ");
    scanf("%s", inputMessage);

    printf("Sending...\n");
    Sleep(2000);
    printf("Failed to send message\n");
}