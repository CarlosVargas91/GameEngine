#include <SDL2/SDL.h>
#include <vector>
#include <unordered_map>
#include "Actor.hpp"

#pragma once
class Game {
public:
    Game();
    ~Game();

    bool Init();

    void RunLoop();

    void Shutdown();

    void AddActor(class Actor* actor);

    void RemoveActor(class Actor* actor);

    void AddSprite(class SpriteComponent* sprite);

	void RemoveSprite(class SpriteComponent* sprite);

private:
    void ProcessInput();

    void UpdateGame();

    void GenerateOutput();

    void LoadData();

    void UnloadData();

    SDL_Texture* GetTexture(const std::string& fileName);

    // Window created by SDL
    SDL_Window* mWindow;
    
    // Renderer for 2D drawing
    SDL_Renderer* mRenderer;

    bool mIsRunning;

    // Number of ticks since start of game
    Uint32 mTicksCount;

    // All the actors in the game
    std::vector<class Actor*> mActors;
    // Any pending actors
    std::vector<class Actor*> mPendingActors;

    // Track if we're updating actors right now
    bool mUpdatingActors;

    // Map of textures loaded
	std::unordered_map<std::string, SDL_Texture*> mTextures;

    // All the sprite components drawn
	std::vector<class SpriteComponent*> mSprites;
};