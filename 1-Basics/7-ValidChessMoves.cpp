#include<iostream>

//If move is valid : YES
//           else  : NO

void kingMove(const int &x1, const int &y1, const int &x2, const int &y2){
    int dx = abs(x2-x1);
    int dy = abs(y2-y1);
    if(((dx) == 1 && (dy) == 0) || ((dx) == 0 && (dy) == 1) 
        || ((dy) == 1 && (dx) == 1))
        std::cout << "YES\n";
    else    
        std::cout << "NO\n";
}


void QueenMove(const int &x1, const int &y1, const int &x2, const int &y2){
    int dx = abs(x2-x1);
    int dy = abs(y2-y1);
    if((dx == 0 && dy != 0) || (dx != 0 && dy == 0) || (dx == dy))
        std::cout << "YES";
    else    
        std::cout << "NO";
}

void BishopMove(const int &x1, const int &y1, const int &x2, const int &y2){
    int dx = abs(x2-x1);
    int dy = abs(y2-y1);
    if(dx == dy)
        std::cout << "YES";
    else    
        std::cout << "NO";
}

void KnightMove(const int &x1, const int &y1, const int &x2, const int &y2){
    int dx = abs(x2-x1);
    int dy = abs(y2-y1);
    if((dx == 1 && dy == 2) || (dx == 2 && dy == 1))
        std::cout << "YES";
    else    
        std::cout << "NO";
}

void RookMove(const int &x1, const int &y1, const int &x2, const int &y2){
    int dx = abs(x2-x1);
    int dy = abs(y2-y1);
    if((dx == 0 || dy == 0) && !(dx == 0 && dy == 0))
        std::cout << "YES";
    else    
        std::cout << "NO";
}

int main(){
    
    int choice, x1, y1, x2, y2;
    
    std::cout << "Chess piece you want to move: \n"
    "1. King\n"
    "2. Queen\n"
    "3. Bishop\n"
    "4. Knight\n"
    "5. Rook\n"
    ;
    std::cin >> choice;
    
    std::cout << "Enter move [x and y ranging from 1-8] (x1, y1, x2, y2) : \n";
    std::cin >> x1 >> y1 >> x2 >> y2;

    switch(choice){
        case 1:
            kingMove(x1,y1,x2,y2);
            break;
        case 2:
            QueenMove(x1,y1,x2,y2);
            break;
        case 3:
            BishopMove(x1,y1,x2,y2);
            break;
        case 4:
            KnightMove(x1,y1,x2,y2);
            break;
        case 5:
            RookMove(x1,y1,x2,y2);
            break;
    }
    
}