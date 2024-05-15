#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#include "animations.h"

#define RED_BG "\e[41m"
#define BOLD_YEL "\e[1;33m"
#define BLU "\e[0;34m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLK "\e[0;30m"
#define BMAG "\e[1;35m"

#define reset "\e[0m"

void tiMath(){
   

    printf("\n");
    
    printf(BMAG

    "                         ##      #####\n"
    "                        ####    ##   ##\n"
    "                       ##  ##   ##   ##\n"
    "                       ##  ##   ##   ##\n"
    "                       ######   ##   ##\n"
    "                       ##  ##   ##   ##\n"
    "                       ##  ##    #####\n"

    );

    printf("\n");

    printf(BMAG
    "         ######    ####    ##   ##    ##     ######   ##   ##\n"
    "         # ## #     ##     ### ###   ####    # ## #   ##   ##\n"
    "           ##       ##     #######  ##  ##     ##     ##   ##\n"
    "           ##       ##     #######  ##  ##     ##     #######\n"
    "           ##       ##     ## # ##  ######     ##     ##   ##\n"
    "           ##       ##     ##   ##  ##  ##     ##     ##   ##\n"
    "          ####     ####    ##   ##  ##  ##    ####    ##   ##\n" reset);

    printf(
         "    ____     ___     _   __    __  __   ____    _   __   ______\n"
        "   / __ \\   /   |   / | / /   / / /_/  /  _/   / | / /  / ____/\n"
        "  / /_/ /  / /| |  /  |/ /   / ,<      / /    /  |/ /  / / __  \n"
        " / _, _/  / ___ | / /|  /   / /| |   _/ /    / /|  /  / /_/ /  \n"
        "/_/ |_|  /_/  |_|/_/ |_/   /_/ |_|  /___/   /_/ |_/   \\____/   \n"
    );

    sleep(1);
}

void menu(){
    printf(BOLD_YEL "\n----- MENU PRINCIPAL -----\n" reset);
    printf(BLU "1. Jogar TiMath\n" reset);
    printf(GRN "2. Visualizar Ranking\n" reset);
    printf(CYN "3. Sair\n" reset);
}

void displayGame(){
    printf(BMAG

    
    "##   ##   #####   #####     #####              ##     ####     #######    ##     ######    #####   ######    ####     #####\n"
    "### ###  ##   ##   ## ##   ##   ##            ####     ##       ##   #   ####    # ## #   ##   ##   ##  ##    ##     ##   ##\n"
    "#######  ##   ##   ##  ##  ##   ##           ##  ##    ##       ## #    ##  ##     ##     ##   ##   ##  ##    ##     ##   ##\n"
    "#######  ##   ##   ##  ##  ##   ##           ##  ##    ##       ####    ##  ##     ##     ##   ##   #####     ##     ##   ##\n"
    "## # ##  ##   ##   ##  ##  ##   ##           ######    ##   #   ## #    ######     ##     ##   ##   ## ##     ##     ##   ##\n"
    "##   ##  ##   ##   ## ##   ##   ##           ##  ##    ##  ##   ##   #  ##  ##     ##     ##   ##   ##  ##    ##     ##   ##\n"
    "##   ##   #####   #####     #####            ##  ##   #######  #######  ##  ##    ####     #####   #### ##   ####     #####\n" reset);

    sleep(1);

   
}

void ranking(){
     printf(BMAG

    "  ######     ##     ##   ##  ###  ##   ####    ##   ##    ####\n"
    "  ##  ##   ####    ###  ##   ##  ##    ##     ###  ##   ##  ##\n"
    "  ##  ##  ##  ##   #### ##   ## ##     ##     #### ##  ##\n"
    "  #####   ##  ##   ## ####   ####      ##     ## ####  ##\n"
    "  ## ##   ######   ##  ###   ## ##     ##     ##  ###  ##  ###\n"
    "  ##  ##  ##  ##   ##   ##   ##  ##    ##     ##   ##   ##  ##\n"
    " #### ##  ##  ##   ##   ##  ###  ##   ####    ##   ##    #####\n" reset);
}
