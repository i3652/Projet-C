
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Outils.h"
#include <conio.h>

void Color(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}
// (pas terminer) reveil du personnage
void reveil()
{
    system("cls");
    Sleep(2000);
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("\n");
    }
    printf("       - D I E U :\n");
    Sleep(2000);
    printf("\n\n");
    printf("         Euhhh...! Ohhh...! [ ... ] Euhhh...! Ohhh...! \n");
    Sleep(2000);
    printf("\n\n");
    printf("         T'es la ?  Mais tu vas te reveiller put** de Mer**. \n");
    Sleep(2000);
    printf("\n\n");
    printf("         Euhhh... ? \n");
    printf("\n\n");
    Sleep(2000);
    printf("         Mais attends, comment dois-je t'appeler Jeune avanturier ? \n");


    printf("\n\n\n\n\n");
    Sleep(2000);
    printf("       - M O I : \n");
    printf("\n\n");
    printf( "        [ A ] Je m'appel Lebron James \n");
    printf("\n");
    Sleep(2000);
    printf( "        [ B ] Je m'appel Kyrie Irving \n");
    printf("\n");
    Sleep(2000);
    printf( "        [ C ] Je m'appel Bob \n");
    printf("\n");
    Sleep(2000);
    printf( "        [ D ] Je m'appel Kobe Bryant \n");
    printf("\n");
    Sleep(2000);
    printf( "        [ E ] Je m'appel sans doute chocolat et litchis \n");
    Sleep(2000);

    if ( getch()=='a' ) jeuxpartiel1();
    if ( getch()=='b' ) jeuxpartiel1();
    if ( getch()=='c' ) jeuxpartiel1();
    if ( getch()=='d' ) jeuxpartiel1();
    if ( getch()=='e' ) jeuxpartiel1();
}

void jeuxpartiel1()
{
    system("cls");
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("\n");
    }
    printf("       - D I E U :\n");
    Sleep(2000);
    printf("\n\n");
    printf("         Humm... ok BoB Bienvenue a toi...(^U^) \n");


    printf("\n\n\n\n\n");
    Sleep(2000);
    printf("       - M O I : \n");
    printf("\n\n");
    Sleep(2000);
    printf( "        [ A ] Non, Je m'appel Lebron James \n");
    printf("\n");
    Sleep(2000);
    printf( "        [ B ] Non, Je m'appel Kyrie Irving \n");
    printf("\n");
    Sleep(2000);
    printf( "        [ C ] Non, Je m'appel Kobe Bryant \n");
    printf("\n");
    Sleep(2000);
    printf( "        [ D ] Non, Je m'appel sans doute chocolat et litchis \n");
    Sleep(2000);

    if ( getch()=='a' ) jeuxpartiel2();
    if ( getch()=='b' ) jeuxpartiel2();
    if ( getch()=='c' ) jeuxpartiel2();
    if ( getch()=='d' ) jeuxpartiel2();
}

void jeuxpartiel2()
{
    system("cls");
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("\n");
    }
    printf("       - D I E U : \n");
    Sleep(2000);
    printf("\n\n");
    printf("         Mais oui c'est ce que j'ais dit Mon petit BOB (^-^), j'adore vraiment ce nom. \n");
    Sleep(2000);
    printf("\n\n");
    printf("         Enfin bref, je me present, je suis Dieu et aujourd'hui tu es mort accidentellement (^x^)* enfin presque...\n");
    Sleep(2000);
    printf("\n\n\n\n");
    printf("        - M O I : \n");
    Sleep(2000);
    printf("\n\n");
    printf("         oui ca j ai remarquer. Et comment ca presque ? Comment suis-je mort alors que j'etais en bonne forme et que j'etais chez moi tranquilement \n");
    Sleep(2000);
    printf("\n\n\n\n");
    printf("       - D I E U : \n");
    Sleep(2000);
    printf("\n\n");
    printf("         il se peut que je me sois trompe en demandants a mes shinigami de t'eliminer \n");
    Sleep(2000);
    printf("\n\n");
    printf("         Ducoup pour me faire pardonner je veux bien te reincarner si ton ame est digne de passer mon test, et au cas ou tu poserais la question, NoN je ne peux \n");
    printf("\n");
    printf("         pas te redonner la vie car tel est [MON NINDO]. ");
    Sleep(2000);
    printf("\n\n\n\n");
    printf("       - M O I : \n");
    Sleep(2000);
    printf("\n\n");
    Color(11,0);
    printf("         Saperlipopette bon alors c'est quoi ton test ? ");
    Sleep(3000);
    jeuxpartiel3();
}
void jeuxpartiel3()
{
    system("cls");
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("\n");
    }
    printf("       - D I E U : \n");
    Sleep(2000);
    printf("\n\n");
    printf("         OK mon petit BOB(^-^), Pour reussir ce test, tu vas devoir gagner contre un horde de shinobie, de Kirito enrager, et de Titans..  \n");
    Sleep(2000);
    printf("\n\n");
    printf("         Mais je te previen mon PTIT  BOB, si tu ne reussis pas tu iras en Enfer, mais si tu reussi tu te reincarneras en Mec de demon Slayer Riche beau parfais, presque comme moi en gros (^U^) ");
    printf("\n\n");
    Sleep(2000);
    printf( "        [ A ] Non, Je n'abandonne Pas  car je suis comme naruto et que tel est mon nindo \n");
    printf("\n");
    Sleep(2000);
    printf( "        [ B ] Apres tout le paradis est pas si mal \n");

    if ( getch()=='a' ) finEnfer();
    if ( getch()=='b' ) finReincarnation();
}

void finEnfer()
{
    system("cls");
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("\n");
    }
    printf("       - M O I : \n");

}

void finReincarnation()
{
    system("cls");
    Exit();
}

// Terminer
void New_game()
{
    Sleep(2000);
    system("cls");
    Loading();
    reveil();
}
// Terminer
void Continue()
{
    Sleep(2000);
    system("cls");
    Loading();
    reveil();
}
// Terminer
void lignes()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}
// Terminer
void Loading()
{
    for (int i = 0 ; i < 15 ; i++)
    {
// separation de lignes pour mieux voir
        Sleep(0);
        system("cls");
        lignes();
        printf("            loading             [ | ] ");
// separation de lignes pour mieux voir
        Sleep(0);
        system("cls");
        lignes();
        printf("            loading       .     [ / ] ");
// separation de lignes pour mieux voir
        Sleep(0);
        system("cls");
        lignes();
        printf("            loading       . .   [ - ] ");
// separation de lignes pour mieux voir
        Sleep(0);
        system("cls");
        lignes();
        printf("            loading       . . . [ \\ ] ");
    }
    system("cls");
}

void Save_game()
{
    Sleep(2000);
    system("cls");
    Loading();
    disp_menu();
}

void Shop()
{
    Sleep(2000);
    system("cls");
    printf("\n");
    printf("     B A C K   [ A ]");
    for (int i = 0 ; i < 5 ; i++)
        {
        printf("\n");
        }
    printf("                                                          -----------------------------------------------------\n");
    printf("                                                                 _|_|_|  _|    _|    _|_|    _|_|_|    \n");
    printf("                                                                _|       _|    _|  _|    _|  _|    _|  \n");
    printf("                                                                 _|_|    _|_|_|_|  _|    _|  _|_|_|    \n");
    printf("                                                                     _|  _|    _|  _|    _|  _|        \n");
    printf("                                                               _|_|_|    _|    _|    _|_|    _|        \n");
    printf("                                                          -----------------------------------------------------\n\n\n\n");
    printf("pour un meilleur jeu plus performant voici : un petit liens qui vous laisera nous aidder a nous achetez plus de manga pour avoir plus de ref de manga dans ce jeu : \n");
    printf(" paypal.me/pools/c/8ni9R4Yyns \n");
}

void About()
{
    Sleep(2000);
    system("cls");
    printf("     B A C K   [ A ]");
    for (int i = 0 ; i < 5 ; i++)
        {
        printf("\n");
        }
    printf("                                                          ----------------------------------------------------- \n");
    printf("                                                              _|_|    _|_|_|      _|_|    _|    _|  _|_|_|_|_|  \n");
    printf("                                                            _|    _|  _|    _|  _|    _|  _|    _|      _|      \n");
    printf("                                                            _|_|_|_|  _|_|_|    _|    _|  _|    _|      _|      \n");
    printf("                                                            _|    _|  _|    _|  _|    _|  _|    _|      _|      \n");
    printf("                                                            _|    _|  _|_|_|      _|_|      _|_|        _|      \n");
    printf("                                                          ----------------------------------------------------- \n");
    for (int i = 0 ; i < 10 ; i++)
        {
        printf("\n");
        }
    printf(" I L L A   M O H A M E D   A B D A L L A H I    -->   D E V E L O P P E R  .\n");
    printf("\n");
    printf(" L E   V A N   N H A N            M E L V I N   -->   D E V E L O P P E R  .\n");
    printf("\n\n\n\n");

    if ( getch()=='a' ) disp_menu() ;
}

// TERMINER
void Exit()
{
    Sleep(3000);
    system("cls");
    for (int i = 0 ; i < 18 ; i++)
        {
        printf("\n");
        }
    printf("                       ---------------------------------------------------------------------------------------------------------------- \n");
    printf("                           _|_|_|    _|_|      _|_|    _|_|_|        _|_|_|    _|      _|  _|_|_|_|      _|_|_|      _|_|    _|_|_|     \n");
    printf("                         _|        _|    _|  _|    _|  _|    _|      _|    _|    _|  _|    _|            _|    _|  _|    _|  _|    _|   \n");
    printf("                         _|  _|_|  _|    _|  _|    _|  _|    _|      _|_|_|        _|      _|_|_|        _|_|_|    _|    _|  _|_|_|     \n");
    printf("                         _|    _|  _|    _|  _|    _|  _|    _|      _|    _|      _|      _|            _|    _|  _|    _|  _|    _|   \n");
    printf("                           _|_|_|    _|_|      _|_|    _|_|_|        _|_|_|        _|      _|_|_|_|      _|_|_|      _|_|    _|_|_|     \n");
    printf("                       ---------------------------------------------------------------------------------------------------------------- \n");
     printf("      G A M E    O V E R");

}

// Terminer
void disp_list()
{
    Sleep(150);
    printf("\n");
    printf("          ___________________________\n");

    Sleep(150);
    printf("\n");
    printf("          N E W   G A M E    [ A ] \n");

    Sleep(150);
    printf("\n");
    printf("          C O N T I N U E    [ B ] \n");

    Sleep(150);
    printf("\n");
    printf("          S A V E   G A M E  [ C ] \n");

    Sleep(150);
    printf("\n");
    printf("          S H O P            [ D ] \n");

    Sleep(150);
    printf("\n");
    printf("          A B O U T          [ E ] \n");

    Sleep(150);
    printf("\n");
    printf("          ___________________________\n");
}
// Terminer
void disp_menu()
{
    system("cls");
    char m;

    for (int i = 0 ; i < 5 ; i++)
    {
        printf("\n");
    }
    Sleep(150);
    Color(12,0);
    printf("                                                         _____________________________________________                                        _____________ \n");
    printf("\n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|    _|    _|_|    _|_|_|    _|_|_|                                              E X I T [ F ]  \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|    _|  _|    _|  _|    _|  _|    _|                                            _____________ \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|_|_|_|  _|_|_|_|  _|_|_|    _|    _|  \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|    _|  _|    _|  _|    _|  _|    _|  \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|    _|  _|    _|  _|    _|  _|_|_|    \n");
    Sleep(150);

    printf("\n");

    Color(12,0);
    printf("                                                              _|_|_|    _|_|    _|      _|  _|_|_|  \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|        _|    _|  _|_|  _|_|  _|       \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|  _|_|  _|_|_|_|  _|  _|  _|  _|_|     \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|    _|  _|    _|  _|      _|  _|       \n");
    Sleep(150);
    Color(12,0);
    printf("                                                              _|_|_|  _|    _|  _|      _|  _|_|_|   \n");
    Sleep(150);
    Color(12,0);
    printf("                                                         _____________________________________________\n");

    for (int a = 0 ; a < 10 ; a++)
    {
        printf("\n");
    }
    disp_list();
    scanf("%c",&m);

    if(m == 'a')
    New_game();

    else if(m == 'b')
        Continue();

    else if(m == 'c')
        Save_game();

    else if(m == 'd')
        Shop();

    else if(m == 'e')
        About();

    else if(m == 'f')
        Exit();
}
