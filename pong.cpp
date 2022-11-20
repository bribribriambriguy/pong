#include <raylib.h>
#include <iostream>

int rectPos=50;
int rectMovePos=0;
int rect2MovePos=0;
int cirx = 100;
int ciry = 300;
int cirxadd = 4;
int ciryadd = 4;
int rect2Pos=50;
int rectpoint=0;
int rect2point=0;

int main(){
    InitWindow(900, 600, "Pong");
    SetTargetFPS(60);

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        if (IsKeyDown(KEY_A)){
            rectPos += 5;
        }

        if (IsKeyDown(KEY_D)){
            rectPos += -5;
        }

        if (IsKeyDown(KEY_J)){
            rect2Pos+=5;
        }

        if (IsKeyDown(KEY_L)){
            rect2Pos+=-5;
        }

        if (cirx > GetScreenWidth() or cirx < 0){
            if(cirx > GetScreenWidth()){
                rectpoint++;
                cirx=100;
                ciry=300;
                cirxadd=4;
                ciryadd=4;
                //break;
            }

            if(cirx < 0){
                rect2point++;
                cirx=100;
                ciry=300;
                cirxadd=4;
                ciryadd=4;
                //break;
            }
        }

        if (rectPos < 0){
            rectPos=0;
        }

        if(rectPos > GetScreenHeight()-100){
            rectPos = GetScreenHeight()-100;
        }

        if (rect2Pos < 0){
            rect2Pos=0;
        }

        if(rect2Pos > GetScreenHeight()-100){
            rect2Pos = GetScreenHeight()-100;
        }

        if (ciry > GetScreenHeight() or ciry < 0){
            ciryadd*=-1;
        }

        if ((cirx <= 70 and cirx >= 60) and (ciry >= rectPos and ciry <= rectPos + 100)){
            cirxadd*=-1;
            rectpoint++;
        }

        if ((cirx >= 840 and cirx<= 850) and (ciry >= rect2Pos and ciry <= rect2Pos + 100)){
            cirxadd*=-1;
            rect2point++;
        }

        cirx+=cirxadd;
        ciry+=ciryadd;

        DrawRectangle(50, rectPos , 20, 100, RED);
        DrawRectangle(850, rect2Pos, 20, 100, BLUE);
        DrawCircle(cirx, ciry , 10, GREEN);
        EndDrawing();
    }
    std::cout<<"player one: "<<rectpoint<<" point/s"<<std::endl<<"player two: "<<rect2point<<" point/s"<<std::endl;

}    