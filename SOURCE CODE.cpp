#include <iostream>
#include <windows.h>
bool unchangingScreen = false;
void MainMenu (int SelectedBTN) {
    std::string Space90 = "                                                                                          ";
    std::string Space39 = "                                       ";
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    for (int a = 0; a < 6; a++)
        std::cout << Space90 << '\n';
    std::cout << "               \xBA\x20\x20 \xC9\xCD\xBB \xC9\xCD\xCD \xC9\xCD\xCD \xC9\xCD\xBB \xC9\xCD\xCD     \x20\x20\x20 \xBA     \xC9\xCD\xCB\xCD\xBB \xC9\xCD\xBB \xCD\xCD\xBB \xC9\xCD\xCD \xC9\xCD\xCD                " << '\n';
    std::cout << "               \xBA\x20\x20 \xBA\x20\xBA \xC8\xCD\xBB \xCC\xCD\xCD \xCC\xCB\xBC \xC8\xCD\xBB     \xC9\xCD\xBB \xBA     \xBA\x20\xBA\x20\xBA \xBA\x20\xBA \x20\x20\xBA \xCC\xCD\xCD \xC8\xCD\xBB                " << '\n';
    std::cout << "               \xBA\x20\x20 \xCC\xCD\xB9 \x20\x20\xBA \xBA\x20\x20 \xBA\xC8\xBB \x20\x20\xBA     \xBA\x20\xBA \x20     \xBA\x20\xBA\x20\xBA \xCC\xCD\xB9 \xC9\xCD\xBC \xBA\x20\x20 \x20\x20\xBA                " << '\n';
    std::cout << "               \xC8\xCD\xCD \xBA\x20\xBA \xCD\xCD\xBC \xC8\xCD\xCD \xBA\x20\xBA \xCD\xCD\xBC     \xBA\x20\xBA \x20     \xBA\x20\x20\x20\xBA \xBA\x20\xBA \xC8\xCD\xCD \xC8\xCD\xCD \xCD\xCD\xBC                " << '\n';
    for (int a = 0; a < 5; a++)
        std::cout << Space90 << '\n';
    SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    std::cout << Space90 << Space90 << Space39;
    if (SelectedBTN == 1)
        SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    else
        SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "\xAE   PLAY   \xAF";
    SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    std::cout << Space39 << Space90 << Space90 << Space90 << Space39;
    if (SelectedBTN == 2)
        SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    else
        SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "\xAE TUTORIAL \xAF";
    SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    std::cout << Space39 << Space90 << Space90 << Space90 << Space39;
    if (SelectedBTN == 3)
        SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
    else
        SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "\xAE  CREATE  \xAF";
    SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    std::cout << Space39 << Space90 << Space90 << Space90;
}
void Tutorial () {
    std::string Space90 = "                                                                                          \n";
    std::string Space80 = "                                                                                ";
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    for (int a = 0; a < 4; a++)
        std::cout << Space90;
    std::cout << "    \xC9";
    for (int a = 0; a < 80; a++)
        std::cout << "\xCD";
    std::cout << "\xBB    \n";
    std::cout << "    \xBA" << Space80 << "\xBA    \n";
    std::cout << "    \xBA" << Space80 << "\xBA    \n";
    std::cout << "    \xBA" << Space80 << "\xBA    \n";
    std::cout << "    \xBA   Hello Fellow Mazer. I'd like to present you to Lasers n' Mazes, a new game   \xBA    \n";
    std::cout << "    \xBA   made just for people who like riddles, hard ones mostly, and for the people  \xBA    \n";
    std::cout << "    \xBA   who want to do a lot of critical thinking which doesn't include me: The      \xBA    \n";
    std::cout << "    \xBA   Editor.                                                                      \xBA    \n";
    std::cout << "    \xBA" << Space80 << "\xBA    \n";
    std::cout << "    \xBA" << Space80 << "\xBA    \n"; // line 14 :)
    std::cout << "    \xBA   To play this game you only need a keyboard:                                  \xBA    \n";
    std::cout << "    \xBA   WASD to move through the maze, which will be invisible to your eyes in a     \xBA    \n";
    std::cout << "    \xBA   future update, so use it until the walls become invisible, after then, to    \xBA    \n";
    std::cout << "    \xBA   know where the walls will be, you will use a laser!, only clue I'm going to  \xBA    \n";
    std::cout << "    \xBA   give, and there will be SO many updates.                                     \xBA    \n";
    std::cout << "    \xBA" << Space80 << "\xBA    \n";
    std::cout << "    \xBA   Take your time, there's now 30 seconds to solve as many mazes as you can     \xBA    \n";
    std::cout << "    \xBA                                                                     Good Luck  \xBA    \n";
    std::cout << "    \xBA" << Space80 << "\xBA    \n";
    std::cout << "    \xBA" << Space80 << "\xBA    \n";
    std::cout << "    \xBA" << Space80 << "\xBA    \n";
    std::cout << "    \xC8";
    for (int a = 0; a < 80; a++)
        std::cout << "\xCD";
    std::cout << "\xBC";
    for (int a = 0; a < 4; a++)
        std::cout << Space90;
    SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_INTENSITY);
}
void Game (std::string code, int x, int y, int Score) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "\n\n         ";
    for (int b = 0; b < 72; b++)
        std::cout << "\xDB";
    std::cout << "        \n";
    for (int a = 0; a < 5; a++) {
        for (int b = 0; b < 3; b++) {
            if (b == 1) {
                std::cout << "         \xDB\xDB";
                for (int c = 0; c < 9; c++) {
                    if (x == c && y == a) {
                        if (code.at(19 * a + c) == '1')
                            std::cout << "  \xFE  \xDB\xDB";
                        else
                            std::cout << "  \xFE    ";
                    } else {
                        if (code.at(19 * a + c) == '1')
                            std::cout << "     \xDB\xDB";
                        else
                            std::cout << "       ";
                    }
                }
                if (x == 9 && y == a)
                    std::cout << "  \xFE  \xDB\xDB         \n";
                else
                    std::cout << "     \xDB\xDB         \n";
            } else {
                std::cout << "         \xDB\xDB";
                for (int c = 0; c < 9; c++) {
                    if (code.at(19 * a + c) == '1')
                        std::cout << "     \xDB\xDB";
                    else
                        std::cout << "       ";
                }
                std::cout << "     \xDB\xDB         \n";
            }
        }
        std::cout << "         \xDB\xDB";
        for (int c = 0; c < 10; c++) {
            if (code.at(19 * a + c + 9) == '1')
                std::cout << "\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
            else
                std::cout << "     \xDB\xDB";
        }
        std::cout << "         \n";
    }
    for (int a = 0; a < 3; a++) {
        if (a == 1) {
            std::cout << "         \xDB\xDB";
            for (int b = 0; b < 9; b++) {
                if (x == b && y == 5) {
                    if (code.at(19 * 5 + b) == '1')
                        std::cout << "  \xFE  \xDB\xDB";
                    else
                        std::cout << "  \xFE    ";
                } else {
                    if (code.at(19 * 5 + b) == '1')
                        std::cout << "     \xDB\xDB";
                    else
                        std::cout << "       ";
                }
            }
            if (x == 9 && y == 5)
                std::cout << "  \xFE  \xDB\xDB         \n";
            else
                std::cout << "     \xDB\xDB         \n";
        } else {
            std::cout << "         \xDB\xDB";
            for (int b = 0; b < 9; b++) {
                if (code.at(19 * 5 + b) == '1')
                    std::cout << "     \xDB\xDB";
                else
                    std::cout << "       ";
            }
            std::cout << "     \xDB\xDB         \n";
        }
    }
    std::cout << "         ";
    for (int b = 0; b < 72; b++)
        std::cout << "\xDB";
    std::cout << "        \n\n         Score: " << Score;
}
void CreateMap(int WallSelected, std::string code) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "\n\n         ";
    for (int b = 0; b < 72; b++)
        std::cout << "\xDB";
    std::cout << "        \n";
    for (int a = 0; a < 5; a++) {
        for (int b = 0; b < 3; b++) {
            SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            std::cout << "         \xDB\xDB";
            for (int c = 0; c < 9; c++) {
                if (code.at(19 * a + c) == '1')
                    SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                else
                    SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
                if (19 * a + c == WallSelected)
                    SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                std::cout << "     \xDB\xDB";
            }
            SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            std::cout << "     \xDB\xDB         \n";
        }
        std::cout << "         \xDB\xDB";
        for (int c = 0; c < 10; c++) {
            if (code.at(19 * a + c + 9) == '1')
                SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            else
                SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
            if (19 * a + c + 9 == WallSelected)
                SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            std::cout << "\xDB\xDB\xDB\xDB\xDB";
            SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            std::cout << "\xDB\xDB";
        }
        std::cout << "         \n";
    }
    for (int a = 0; a < 3; a++) {
        SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        std::cout << "         \xDB\xDB";
        for (int b = 0; b < 9; b++) {
            if (code.at(19 * 5 + b) == '1')
                SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            else
                SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
            if (19 * 5 + b == WallSelected)
                SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            std::cout << "     \xDB\xDB";
        }
        SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        std::cout << "     \xDB\xDB         \n";
    }
    std::cout << "         ";
    for (int b = 0; b < 72; b++)
        std::cout << "\xDB";
    std::cout << "        \n";
}
std::string RandomMaze() {
    std::string MazeCode = "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111";
    int x = rand() % 10;
    int y = rand() % 6;
    srand(GetTickCount());
    bool isVisited[10][6];
    for (int a = 0; a < 10; a++) {
        for (int b = 0; b < 6; b++)
            isVisited[a][b] = false;
    }
    while (true) {
        int dir = rand() % 4;
        isVisited[x][y] = true;
        switch (dir) {
        case 0:
            if (y - 1 != -1) {
                if (!isVisited[x][y - 1])
                    MazeCode[19 * y + x - 10] = '0';
                y -= 1;
            }
            break;
        case 1:
            if (x + 1 != 10) {
                if (!isVisited[x + 1][y])
                    MazeCode[19 * y + x ] = '0';
                x += 1;
            }
            break;
        case 2:
            if (y + 1 != 6) {
                if (!isVisited[x][y + 1])
                    MazeCode[19 * y + x + 9] = '0';
                y += 1;
            }
            break;
        case 3:
            if (x - 1 != -1) {
                if (!isVisited[x - 1][y])
                    MazeCode[19 * y + x - 1] = '0';
                x -= 1;
            }
            break;
        }
        bool isFin = true;
        for (int a = 0; a < 10; a++) {
            for (int b = 0; b < 6; b++) {
                if (!isVisited[a][b])
                    isFin = false;
            }
        }
        if (isFin)
            return MazeCode;
    }
}
int main () {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
    SetConsoleTitle("Lasers n' Mazes v1.3");
    int ScreenID = 0;
    int SelectedBTN = 1;
    int NoResize = MessageBox(0, "To use this app, it's recommended not to resize it: It could break the program", "Warning!", MB_OK);
    NoResize = MessageBox(0, "Are you sure you won't resize it (if you do so, under your own responsability)?", "Warning", MB_OKCANCEL);
    if (NoResize == IDOK)
        NoResize = MessageBox(0, "Thank You!, Happy Gaming :)", "Warning!", MB_OK);
    else
        return 0;
    system("mode con cols=90 lines=30");
    std::string GameCode = "00001001001110010000001010011110110110001100101010101100010100111000101000111001011100111110010000001000";
    int playerX = 0, playerY = 5;
    int Score = 0;
    double TimeSince;
    while(true) {
        if (!unchangingScreen) {
            unchangingScreen = true;
            system("cls");
            switch(ScreenID) {
            case 0:
                MainMenu(SelectedBTN);
                Score = 0;
                TimeSince = GetTickCount();
                break;
            case 1:
                Game(GameCode, playerX, playerY, Score);
                if (playerX == 9 && playerY == 0) {;
                    playerX = 0;
                    playerY = 5;
                    GameCode = RandomMaze();
                    unchangingScreen = false;
                    Score += 1;
                }
                if (GetTickCount() - TimeSince > 30000) {
                    std::string output = "Good Job!, Your score is ";
                    output += std::to_string(Score);
                    ScreenID = 0;
                    unchangingScreen = false;
                    int t = MessageBox(0, output.c_str(), "Message", MB_OK);
                    playerX = 0;
                    playerY = 5;
                }
                break;
            case 2:
                Tutorial();
                break;
            case 3:
                CreateMap(SelectedBTN, GameCode);
                break;
            }
        }
        switch(ScreenID) {
        case 0:
            if (GetAsyncKeyState(VK_TAB) & 0b1) {
                SelectedBTN++;
                if(SelectedBTN == 4) {
                    SelectedBTN = 1;
                }
                unchangingScreen = false;
            }
            if (GetAsyncKeyState(VK_RETURN) & 0b1) {
                switch(SelectedBTN) {
                case 1:
                    ScreenID = 1;
                    break;
                case 2:
                    ScreenID = 2;
                    break;
                case 3:
                    ScreenID = 3;
                    break;
                }
                unchangingScreen = false;
            }
            break;
        case 1:
            if (GetAsyncKeyState(VK_ESCAPE) & 0b1) {
                ScreenID = 0;
                SelectedBTN = 1;
                unchangingScreen = false;
            }
            if (GetAsyncKeyState('W') & 0b1) {
                playerY -= 1;
                if (playerY == -1)
                    playerY = 0;
                else {
                    if (GameCode.at(19 * playerY + 9 + playerX) == '1')
                        playerY += 1;
                    else
                        unchangingScreen = false;
                }
            }
            if (GetAsyncKeyState('A') & 0b1) {
                playerX -= 1;
                if (playerX == -1)
                    playerX = 0;
                else {
                    if (GameCode.at(19 * playerY + playerX) == '1')
                        playerX += 1;
                    else
                        unchangingScreen = false;
                }
            }
            if (GetAsyncKeyState('S') & 0b1) {
                playerY += 1;
                if (playerY == 6)
                    playerY = 5;
                else {
                    if (GameCode.at(19 * playerY - 10 + playerX) == '1')
                        playerY -= 1;
                    else
                        unchangingScreen = false;
                }
            }
            if (GetAsyncKeyState('D') & 0b1) {
                playerX += 1;
                if (playerX == 10)
                    playerX = 9;
                else {
                    if (GameCode.at(19 * playerY - 1 + playerX) == '1')
                        playerX -= 1;
                    else
                        unchangingScreen = false;
                }
            }
            break;
        case 2:
            if (GetAsyncKeyState(VK_RETURN) & 0b1) {
                ScreenID = 0;
                SelectedBTN = 1;
                unchangingScreen = false;
            }
            break;
        case 3:
            if (GetAsyncKeyState(VK_RIGHT) & 0b1) {
                SelectedBTN += 1;
                if (SelectedBTN == 104)
                    SelectedBTN = 0;
                unchangingScreen = false;
            }
            if (GetAsyncKeyState(VK_LEFT) & 0b1) {
                SelectedBTN -= 1;
                if (SelectedBTN == -1)
                    SelectedBTN = 103;
                unchangingScreen = false;
            }
            if (GetAsyncKeyState(VK_RETURN) & 0b1) {
                if (GameCode.at(SelectedBTN) == '1')
                    GameCode[SelectedBTN] = '0';
                else
                    GameCode[SelectedBTN] = '1';
                unchangingScreen = false;
            }
            if (GetAsyncKeyState(VK_ESCAPE) & 0b1) {
                ScreenID = 0;
                SelectedBTN = 1;
                unchangingScreen = false;
            }
            if (GetAsyncKeyState('R') & 0b1)
                GameCode = "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111";
            break;
        }
    }
}

