#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "config.h"



void tiMath(){
    printf("\n");
    
    printf(BMAG
        "   ___                            _             _        \n"
        "  / __\\  ___  _ __ ___   /\\   /\\ (_) _ __    __| |  ___  \n"
        " /__\\// / _ \\| '_ ` _ \\  \\ \\ / / | || '_ \\  / _` | / _ \\ \n"
        "/ \\/  \\|  __/| | | | | |  \\ V /  | || | | || (_| || (_) |\n"
        "\\_____/ \\___||_| |_| |_|   \\_/   |_||_| |_| \\__,_| \\___/ \n"
        "\t\t     __ _   ___  \n"
        "\t\t    / _` | / _ \\ \n"
        "\t\t   | (_| || (_) |\n"
        "\t\t    \\__,_| \\___/ \n"
        BOLD_CYAN
        " ______   __     __    __     ______     ______   __  __    \n"
        "/\\__  _\\ /\\ \\   /\\ \"-./  \\   /\\  __ \\   /\\__  _\\ /\\ \\_\\ \\   \n"
        "\\/_/\\ \\/ \\ \\ \\  \\ \\ \\-./\\ \\  \\ \\  __ \\  \\/_/\\ \\/ \\ \\  __ \\  \n"
        "   \\ \\_\\  \\ \\_\\  \\ \\_\\ \\ \\_\\  \\ \\_\\ \\_\\    \\ \\_\\  \\ \\_\\ \\_\\ \n"
        "    \\/_/   \\/_/   \\/_/  \\/_/   \\/_/\\/_/     \\/_/   \\/_/\\/_/ \n"
    reset);

    sleep(1);
}

void menu(){
    printf(BOLD_YEL "\n----- MENU PRINCIPAL -----\n" reset);
    printf(BLU "1. Jogar TiMath\n" reset);
    printf(GRN "2. Visualizar Ranking\n" reset);
    printf(CYN "3. Sair\n" reset);
}

void displayGame(){
    printf(BOLD_BLUE
        " _    __    ___     __     ______    _   __    ____    ____     __\n"
        "| |  / /   /   |   / /    / ____/   / | / /   / __ \\  / __ \\   / /\n"
        "| | / /   / /| |  / /    / __/     /  |/ /   / / / / / / / /  / / \n"
        "| |/ /   / ___ | / /___ / /___    / /|  /   / /_/ / / /_/ /  /_/  \n"
        "|___/   /_/  |_|/_____//_____/   /_/ |_/   /_____/  \\____/  (_)   \n"
        "                                                                  \n"
    reset);
    sleep(1);
}

void ranking(){
    printf(BOLD_YEL
        "    ____     ___     _   __    __  __   ____    _   __   ______\n"
        "   / __ \\   /   |   / | / /   / / /_/  /  _/   / | / /  / ____/\n"
        "  / /_/ /  / /| |  /  |/ /   / ,<      / /    /  |/ /  / / __  \n"
        " / _, _/  / ___ | / /|  /   / /| |   _/ /    / /|  /  / /_/ /  \n"
        "/_/ |_|  /_/  |_|/_/ |_/   /_/ |_|  /___/   /_/ |_/   \\____/   \n"
    reset);
    
}

