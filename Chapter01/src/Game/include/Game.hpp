#include <SDL2/SDL.h>

// Vector2 struct just stores x/y coordinates
// (for now)
struct Vector2
{
	float x;
	float y;
};

class Game {
    public:
        Game();
        ~Game();

        bool Init();

        void RunLoop();

        void Shutdown();

    private:
        void ProcessInput();

        void UpdateGame();

        void GenerateOutput();

        void DrawPongGame();

        // Window created by SDL
	    SDL_Window* mWindow;
        
        // Renderer for 2D drawing
        SDL_Renderer* mRenderer;

        bool mIsRunning;

        // Pong specific
        // Direction of paddle
        int mPaddleDir;
        // Position of paddle
        Vector2 mPaddlePos;
        // Position of ball
        Vector2 mBallPos;
        // Velocity of ball
        Vector2 mBallVel;

        // Number of ticks since start of game
	    Uint32 mTicksCount;
};